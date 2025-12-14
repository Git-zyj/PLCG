#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51592;
unsigned short var_3 = (unsigned short)35792;
unsigned char var_4 = (unsigned char)243;
int zero = 0;
unsigned long long int var_11 = 6796581317214814919ULL;
unsigned short var_12 = (unsigned short)29001;
int var_13 = 1224376254;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
