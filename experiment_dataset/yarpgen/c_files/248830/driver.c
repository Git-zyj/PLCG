#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -9164775835356013167LL;
int var_5 = -1880105583;
unsigned char var_11 = (unsigned char)119;
int zero = 0;
unsigned long long int var_12 = 3143301218393330816ULL;
unsigned int var_13 = 1028196684U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
