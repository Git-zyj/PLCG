#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15788287074175177804ULL;
short var_7 = (short)-21072;
unsigned long long int var_10 = 462403992853581623ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)129;
unsigned short var_20 = (unsigned short)38108;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
