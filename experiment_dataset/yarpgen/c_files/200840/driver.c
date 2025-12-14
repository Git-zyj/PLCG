#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63091;
short var_2 = (short)-18291;
unsigned short var_10 = (unsigned short)45614;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
long long int var_20 = -175044643834019018LL;
unsigned long long int var_21 = 9845738578286689209ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
