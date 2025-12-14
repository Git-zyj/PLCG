#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54470;
unsigned long long int var_1 = 8839044967827173417ULL;
unsigned int var_7 = 881898128U;
unsigned long long int var_11 = 8737039228797251028ULL;
int zero = 0;
unsigned int var_12 = 4210183339U;
unsigned long long int var_13 = 16959470367724162349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
