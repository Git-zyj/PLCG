#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9010684750530817967LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_14 = 16065506110255270933ULL;
short var_15 = (short)-6121;
unsigned char var_16 = (unsigned char)241;
unsigned long long int var_19 = 8032766525145950665ULL;
int zero = 0;
signed char var_20 = (signed char)-116;
signed char var_21 = (signed char)-119;
unsigned char var_22 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
