#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1178336898436563925LL;
unsigned short var_4 = (unsigned short)13575;
short var_5 = (short)21979;
unsigned long long int var_7 = 16434399856382399602ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -75930483757025138LL;
unsigned char var_12 = (unsigned char)35;
unsigned int var_13 = 2987543707U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
