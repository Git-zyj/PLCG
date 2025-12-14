#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9070428709610172579ULL;
unsigned int var_4 = 1619140114U;
short var_9 = (short)-23120;
unsigned long long int var_13 = 15143903947847583044ULL;
short var_14 = (short)4155;
unsigned int var_15 = 3619911110U;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned int var_17 = 649425839U;
signed char var_18 = (signed char)-85;
signed char var_19 = (signed char)38;
unsigned short var_20 = (unsigned short)45384;
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
