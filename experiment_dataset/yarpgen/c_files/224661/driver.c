#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8573780874421637971LL;
unsigned long long int var_6 = 11742293495844985192ULL;
int var_7 = 1633628380;
int zero = 0;
unsigned short var_15 = (unsigned short)15750;
unsigned short var_16 = (unsigned short)1793;
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
