#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5143084799037871096ULL;
long long int var_14 = -9197637820727457075LL;
long long int var_17 = -5527114759416013300LL;
unsigned short var_18 = (unsigned short)22778;
int zero = 0;
unsigned short var_20 = (unsigned short)43730;
long long int var_21 = 3960946861430453311LL;
void init() {
}

void checksum() {
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
