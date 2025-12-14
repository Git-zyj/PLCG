#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
unsigned char var_4 = (unsigned char)113;
unsigned long long int var_10 = 6828411470618664197ULL;
int zero = 0;
unsigned long long int var_11 = 6458343165165523270ULL;
long long int var_12 = -1197222096160255922LL;
void init() {
}

void checksum() {
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
