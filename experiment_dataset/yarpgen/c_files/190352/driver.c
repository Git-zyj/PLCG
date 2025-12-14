#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned long long int var_2 = 17782640547564448075ULL;
signed char var_5 = (signed char)116;
int var_7 = 75419740;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 10435569098904828585ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 795403742;
unsigned long long int var_17 = 1746988802230522997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
