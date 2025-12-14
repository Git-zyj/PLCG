#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
unsigned short var_5 = (unsigned short)26802;
unsigned long long int var_6 = 10250421211257858359ULL;
signed char var_9 = (signed char)25;
long long int var_10 = 8196524834319373465LL;
unsigned short var_16 = (unsigned short)17500;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
unsigned char var_20 = (unsigned char)116;
void init() {
}

void checksum() {
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
