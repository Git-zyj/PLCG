#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30190;
short var_6 = (short)11231;
long long int var_9 = -3550158332386610346LL;
signed char var_14 = (signed char)127;
int zero = 0;
unsigned char var_17 = (unsigned char)251;
long long int var_18 = 3251581019641559651LL;
signed char var_19 = (signed char)-61;
unsigned long long int var_20 = 4832237261825982425ULL;
void init() {
}

void checksum() {
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
