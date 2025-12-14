#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -282959634;
signed char var_3 = (signed char)-85;
int zero = 0;
unsigned char var_10 = (unsigned char)63;
unsigned long long int var_11 = 245092400674445153ULL;
unsigned short var_12 = (unsigned short)44591;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
