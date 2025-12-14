#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2661236611307084692ULL;
unsigned char var_3 = (unsigned char)251;
unsigned int var_4 = 1576291891U;
int var_10 = -1175600480;
long long int var_14 = 5849046569486426523LL;
long long int var_16 = 5701924587793006256LL;
unsigned int var_17 = 1328065044U;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1554560018;
unsigned int var_21 = 3656007170U;
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
