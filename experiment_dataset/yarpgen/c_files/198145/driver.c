#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2332697672U;
unsigned int var_12 = 1308593716U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
unsigned int var_20 = 1738938300U;
int var_21 = 1410992998;
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
