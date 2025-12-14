#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26798;
unsigned short var_1 = (unsigned short)23384;
unsigned int var_2 = 3757665982U;
unsigned long long int var_3 = 1822725022641584879ULL;
unsigned int var_4 = 1739779837U;
long long int var_5 = 6723708319049841899LL;
unsigned int var_6 = 3220639879U;
unsigned int var_8 = 3368681365U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 17999479675399736405ULL;
unsigned int var_11 = 1043912578U;
signed char var_12 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
