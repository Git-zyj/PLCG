#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1327888985;
signed char var_3 = (signed char)-24;
int var_4 = 270522168;
unsigned short var_11 = (unsigned short)56668;
int zero = 0;
signed char var_17 = (signed char)-105;
unsigned short var_18 = (unsigned short)43835;
void init() {
}

void checksum() {
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
