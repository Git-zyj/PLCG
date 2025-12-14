#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)165;
signed char var_6 = (signed char)-115;
long long int var_8 = 6223779820876614891LL;
unsigned short var_9 = (unsigned short)37355;
unsigned short var_11 = (unsigned short)12475;
signed char var_12 = (signed char)19;
unsigned int var_15 = 1380249107U;
int zero = 0;
unsigned int var_16 = 392132332U;
int var_17 = -466311828;
int var_18 = -2042288825;
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
