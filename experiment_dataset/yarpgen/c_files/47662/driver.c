#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
unsigned long long int var_5 = 8835490263654705852ULL;
int var_11 = 488396874;
int zero = 0;
unsigned char var_17 = (unsigned char)172;
unsigned long long int var_18 = 2733588629580586061ULL;
unsigned long long int var_19 = 16523280394285931944ULL;
void init() {
}

void checksum() {
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
