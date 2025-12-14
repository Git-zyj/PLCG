#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
unsigned int var_2 = 1006146780U;
short var_4 = (short)15810;
signed char var_6 = (signed char)-66;
int var_8 = -1026952537;
_Bool var_14 = (_Bool)1;
long long int var_17 = 3335788582178160208LL;
int zero = 0;
unsigned long long int var_18 = 17368637052175743609ULL;
unsigned char var_19 = (unsigned char)209;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
