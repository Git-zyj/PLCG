#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3172706950U;
unsigned int var_2 = 1472489540U;
int var_4 = 1069371849;
unsigned short var_9 = (unsigned short)34932;
int zero = 0;
unsigned char var_10 = (unsigned char)230;
int var_11 = 1866423187;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
