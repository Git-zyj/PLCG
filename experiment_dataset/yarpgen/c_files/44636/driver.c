#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51469;
signed char var_4 = (signed char)-31;
unsigned char var_15 = (unsigned char)12;
int zero = 0;
unsigned int var_16 = 3195978029U;
unsigned long long int var_17 = 3061168321063010173ULL;
void init() {
}

void checksum() {
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
