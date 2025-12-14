#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1218474007;
int var_4 = -422888769;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)26;
signed char var_10 = (signed char)-114;
int zero = 0;
unsigned short var_17 = (unsigned short)64538;
signed char var_18 = (signed char)-69;
signed char var_19 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
