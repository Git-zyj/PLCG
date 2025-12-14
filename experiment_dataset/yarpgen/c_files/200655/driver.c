#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1086138150;
short var_2 = (short)15932;
unsigned short var_3 = (unsigned short)57002;
unsigned long long int var_5 = 3660899411746004412ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)44668;
unsigned long long int var_12 = 7304238992029088356ULL;
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
