#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned long long int var_1 = 13092968511805669736ULL;
unsigned char var_3 = (unsigned char)81;
unsigned int var_4 = 609018240U;
unsigned char var_13 = (unsigned char)137;
int zero = 0;
unsigned int var_17 = 204022483U;
unsigned char var_18 = (unsigned char)158;
unsigned int var_19 = 1695125915U;
unsigned long long int var_20 = 1529218085342067548ULL;
unsigned long long int var_21 = 18128240327287408356ULL;
unsigned long long int var_22 = 14605103365557807109ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
