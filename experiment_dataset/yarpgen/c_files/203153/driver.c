#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1537447490;
signed char var_9 = (signed char)6;
unsigned long long int var_10 = 7743109228282537476ULL;
unsigned short var_11 = (unsigned short)25131;
int zero = 0;
unsigned long long int var_14 = 7278945780546082343ULL;
unsigned long long int var_15 = 7717531897953538740ULL;
unsigned short var_16 = (unsigned short)3283;
unsigned short var_17 = (unsigned short)15673;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
