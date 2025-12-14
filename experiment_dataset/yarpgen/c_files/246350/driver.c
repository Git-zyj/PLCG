#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1984718851U;
unsigned char var_3 = (unsigned char)88;
unsigned char var_4 = (unsigned char)76;
int var_5 = -1931421882;
short var_6 = (short)-2225;
int var_7 = -704110250;
int var_9 = -1728917843;
unsigned char var_11 = (unsigned char)254;
short var_12 = (short)-22303;
unsigned long long int var_15 = 10626703225867038550ULL;
unsigned long long int var_17 = 2895732538248498722ULL;
int zero = 0;
unsigned long long int var_19 = 7812025697039154679ULL;
int var_20 = -962264898;
unsigned char var_21 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
