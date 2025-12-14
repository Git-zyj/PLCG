#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1589176830952873627ULL;
unsigned short var_13 = (unsigned short)23329;
int zero = 0;
unsigned long long int var_14 = 7589196399458274265ULL;
unsigned long long int var_15 = 6975896038734823847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
