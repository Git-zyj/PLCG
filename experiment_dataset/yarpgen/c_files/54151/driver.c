#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53911;
int var_6 = 203258555;
short var_10 = (short)-22941;
unsigned long long int var_11 = 11735434646754421377ULL;
unsigned short var_12 = (unsigned short)59381;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)58656;
int zero = 0;
unsigned short var_16 = (unsigned short)3426;
long long int var_17 = -3428515608323595729LL;
int var_18 = 1324810622;
unsigned short var_19 = (unsigned short)26028;
unsigned long long int var_20 = 4487862063415864443ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
