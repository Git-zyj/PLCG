#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10745761930533634767ULL;
unsigned long long int var_6 = 6957453183213067674ULL;
unsigned char var_7 = (unsigned char)114;
int zero = 0;
unsigned char var_13 = (unsigned char)51;
unsigned char var_14 = (unsigned char)72;
unsigned long long int var_15 = 4012018471422579454ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
