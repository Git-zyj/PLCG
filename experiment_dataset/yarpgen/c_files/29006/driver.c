#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15433282474717983916ULL;
unsigned short var_4 = (unsigned short)54936;
long long int var_5 = -1206559357992420212LL;
unsigned short var_9 = (unsigned short)2272;
unsigned long long int var_10 = 9715609693220318561ULL;
int zero = 0;
unsigned long long int var_16 = 14729805812647729626ULL;
unsigned long long int var_17 = 9505278511247095845ULL;
unsigned short var_18 = (unsigned short)29730;
unsigned short var_19 = (unsigned short)30314;
long long int var_20 = -5456829548174002497LL;
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
