#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23724;
unsigned short var_3 = (unsigned short)31525;
signed char var_4 = (signed char)73;
unsigned long long int var_11 = 15948546693367188108ULL;
int zero = 0;
int var_15 = -1846163123;
unsigned short var_16 = (unsigned short)22274;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
