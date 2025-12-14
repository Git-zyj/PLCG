#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2101618846;
int var_1 = 1841126125;
int var_2 = -1053771497;
signed char var_5 = (signed char)112;
unsigned long long int var_8 = 3854775165709237529ULL;
long long int var_11 = -2724347400223332212LL;
int zero = 0;
long long int var_16 = -561094248973093031LL;
unsigned short var_17 = (unsigned short)63407;
unsigned char var_18 = (unsigned char)241;
void init() {
}

void checksum() {
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
