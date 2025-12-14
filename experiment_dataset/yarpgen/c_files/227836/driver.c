#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29478;
signed char var_1 = (signed char)-17;
long long int var_2 = 2418460778458917412LL;
short var_4 = (short)-22480;
unsigned long long int var_5 = 15220683620993953910ULL;
short var_9 = (short)13157;
int zero = 0;
unsigned int var_10 = 2947005470U;
unsigned long long int var_11 = 10894393539570831617ULL;
unsigned short var_12 = (unsigned short)17677;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
