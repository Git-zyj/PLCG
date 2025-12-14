#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned int var_3 = 767760121U;
unsigned short var_4 = (unsigned short)10392;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_18 = -1893555131;
_Bool var_19 = (_Bool)1;
int var_20 = 729365459;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
