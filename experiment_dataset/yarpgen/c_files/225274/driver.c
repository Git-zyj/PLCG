#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16309206084902690472ULL;
unsigned short var_4 = (unsigned short)45726;
unsigned int var_6 = 4288520661U;
unsigned short var_8 = (unsigned short)19832;
unsigned short var_9 = (unsigned short)51578;
long long int var_10 = -1864660887814403255LL;
int var_11 = 1735354904;
long long int var_13 = 12595581277539394LL;
int zero = 0;
unsigned char var_14 = (unsigned char)226;
short var_15 = (short)-24176;
void init() {
}

void checksum() {
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
