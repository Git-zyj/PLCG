#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18552;
unsigned int var_4 = 2388659924U;
unsigned long long int var_8 = 3581295933940793866ULL;
unsigned long long int var_9 = 8401718016547790413ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)62;
long long int var_11 = -2166196739132075155LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
