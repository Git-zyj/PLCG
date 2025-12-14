#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1652505016024940641ULL;
unsigned char var_7 = (unsigned char)70;
signed char var_9 = (signed char)63;
int var_10 = -1436635214;
short var_12 = (short)-19004;
short var_15 = (short)-27987;
int zero = 0;
unsigned char var_17 = (unsigned char)216;
short var_18 = (short)5386;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
