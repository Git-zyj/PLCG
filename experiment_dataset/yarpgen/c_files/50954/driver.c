#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7128;
unsigned long long int var_3 = 17178090431210986836ULL;
unsigned int var_10 = 2744357059U;
short var_11 = (short)31326;
unsigned long long int var_14 = 8358216354113532134ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)24352;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4072611388U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
