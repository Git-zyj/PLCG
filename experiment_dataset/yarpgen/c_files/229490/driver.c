#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1792126305;
int var_1 = 242033476;
int var_6 = -481500394;
unsigned int var_8 = 3542167153U;
int zero = 0;
unsigned short var_10 = (unsigned short)60001;
unsigned char var_11 = (unsigned char)98;
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
