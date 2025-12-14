#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11940;
long long int var_1 = 4591950965935771358LL;
long long int var_6 = 5454326836887417769LL;
unsigned short var_8 = (unsigned short)30653;
int zero = 0;
unsigned long long int var_13 = 13639854314365406757ULL;
int var_14 = -2122149429;
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
