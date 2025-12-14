#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1868683847373675059ULL;
long long int var_4 = 6836183490606175763LL;
unsigned short var_5 = (unsigned short)23744;
unsigned int var_7 = 3545426383U;
int zero = 0;
unsigned short var_11 = (unsigned short)31494;
int var_12 = 1183525986;
unsigned long long int var_13 = 6260281469291845640ULL;
unsigned char var_14 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
