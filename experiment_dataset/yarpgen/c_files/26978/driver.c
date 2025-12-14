#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)4;
unsigned long long int var_6 = 9920530390776944757ULL;
unsigned long long int var_9 = 8568004377639173105ULL;
int zero = 0;
int var_10 = 286014776;
unsigned short var_11 = (unsigned short)49713;
unsigned short var_12 = (unsigned short)61990;
unsigned char var_13 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
