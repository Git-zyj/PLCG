#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1298226228;
unsigned long long int var_1 = 2902919690343876195ULL;
int var_2 = -846027666;
short var_4 = (short)2374;
long long int var_5 = -4277903374877434891LL;
short var_8 = (short)-3015;
long long int var_9 = 8793543167823181325LL;
unsigned char var_12 = (unsigned char)0;
long long int var_13 = -7666214572098034901LL;
int zero = 0;
unsigned int var_15 = 3541584635U;
unsigned long long int var_16 = 7707910680941347611ULL;
int var_17 = -1431974157;
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
