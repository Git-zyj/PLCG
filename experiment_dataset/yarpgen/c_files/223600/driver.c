#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1852288853;
signed char var_3 = (signed char)17;
long long int var_4 = 4750817779452628311LL;
int zero = 0;
unsigned char var_10 = (unsigned char)216;
unsigned long long int var_11 = 15272322712349163462ULL;
unsigned int var_12 = 2388073245U;
int var_13 = 63864631;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
