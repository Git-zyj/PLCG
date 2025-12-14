#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3170711491U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)25;
unsigned long long int var_9 = 18041408828357388728ULL;
unsigned long long int var_14 = 15799417673004530452ULL;
unsigned char var_17 = (unsigned char)78;
int zero = 0;
unsigned char var_18 = (unsigned char)143;
unsigned int var_19 = 3200908326U;
short var_20 = (short)29178;
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
