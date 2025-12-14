#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3888503025U;
signed char var_2 = (signed char)99;
unsigned long long int var_3 = 1743868273355285131ULL;
long long int var_4 = 4078606310001978213LL;
unsigned int var_8 = 1070208966U;
long long int var_9 = 667336172575186541LL;
int zero = 0;
unsigned char var_10 = (unsigned char)63;
long long int var_11 = -8805533808212322976LL;
unsigned char var_12 = (unsigned char)231;
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
