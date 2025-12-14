#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6833;
_Bool var_2 = (_Bool)1;
long long int var_3 = -1260549515897480577LL;
signed char var_4 = (signed char)-46;
unsigned short var_7 = (unsigned short)18888;
signed char var_14 = (signed char)91;
int zero = 0;
long long int var_15 = -3510591593637392366LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)101;
unsigned char var_18 = (unsigned char)86;
int var_19 = 297011978;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
