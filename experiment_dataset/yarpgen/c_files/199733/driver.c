#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4611365613952199827ULL;
unsigned short var_8 = (unsigned short)22534;
unsigned long long int var_10 = 6450974990462836431ULL;
unsigned long long int var_11 = 7846493547624801893ULL;
int zero = 0;
int var_16 = -2021288025;
unsigned short var_17 = (unsigned short)50308;
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
