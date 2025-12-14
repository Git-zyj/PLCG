#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2238577400U;
unsigned long long int var_4 = 11943900013529098085ULL;
signed char var_8 = (signed char)63;
signed char var_14 = (signed char)-98;
int zero = 0;
unsigned int var_15 = 3014255465U;
unsigned short var_16 = (unsigned short)6262;
unsigned short var_17 = (unsigned short)53900;
void init() {
}

void checksum() {
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
