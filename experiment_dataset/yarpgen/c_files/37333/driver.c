#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17761196048070420287ULL;
unsigned char var_3 = (unsigned char)13;
unsigned int var_5 = 1350961872U;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_12 = -1070306473457295341LL;
unsigned short var_13 = (unsigned short)53178;
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
