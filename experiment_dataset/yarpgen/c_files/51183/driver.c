#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38707;
short var_1 = (short)24955;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)89;
int zero = 0;
signed char var_10 = (signed char)-120;
unsigned int var_11 = 1085829127U;
unsigned int var_12 = 3320098880U;
unsigned short var_13 = (unsigned short)4462;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
