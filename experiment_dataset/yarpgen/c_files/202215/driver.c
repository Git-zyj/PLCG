#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)189;
unsigned short var_17 = (unsigned short)13304;
unsigned long long int var_19 = 7792833658035856971ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)54;
_Bool var_21 = (_Bool)1;
short var_22 = (short)10898;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
