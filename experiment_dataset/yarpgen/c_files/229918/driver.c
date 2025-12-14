#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1035522309U;
unsigned char var_3 = (unsigned char)231;
int var_6 = 861425289;
int zero = 0;
unsigned int var_12 = 174126572U;
long long int var_13 = 3172530026322060237LL;
unsigned int var_14 = 2163273230U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
