#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)178;
short var_6 = (short)17267;
unsigned char var_7 = (unsigned char)174;
long long int var_8 = -1575852825630565055LL;
long long int var_9 = 5491351306492547057LL;
unsigned long long int var_11 = 3528081596420514081ULL;
signed char var_12 = (signed char)23;
int zero = 0;
short var_13 = (short)-22016;
long long int var_14 = -8811590614090312610LL;
unsigned char var_15 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
