#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1963049648U;
signed char var_2 = (signed char)23;
unsigned char var_3 = (unsigned char)4;
unsigned short var_5 = (unsigned short)40652;
unsigned short var_8 = (unsigned short)44004;
int var_9 = -513540929;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)54;
long long int var_12 = 1479721323474604983LL;
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
