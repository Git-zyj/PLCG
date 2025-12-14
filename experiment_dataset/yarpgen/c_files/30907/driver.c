#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4954503064111765327LL;
int var_7 = -15380590;
unsigned char var_8 = (unsigned char)141;
short var_14 = (short)5339;
int zero = 0;
unsigned int var_16 = 1117831536U;
long long int var_17 = 8161934975696249324LL;
unsigned long long int var_18 = 11761733865019467233ULL;
unsigned long long int var_19 = 16634479037446970319ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
