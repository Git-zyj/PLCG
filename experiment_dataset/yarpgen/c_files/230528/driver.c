#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64007;
unsigned long long int var_8 = 18444166576217035489ULL;
unsigned long long int var_9 = 3339870660800934689ULL;
int zero = 0;
unsigned long long int var_13 = 2767179755036382117ULL;
int var_14 = 80616083;
void init() {
}

void checksum() {
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
