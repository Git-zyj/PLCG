#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1724541494;
_Bool var_8 = (_Bool)1;
long long int var_10 = 9023595605628881671LL;
unsigned long long int var_12 = 1217368967602034152ULL;
unsigned int var_15 = 851413719U;
int zero = 0;
unsigned long long int var_17 = 16573029091477557442ULL;
unsigned short var_18 = (unsigned short)17104;
unsigned int var_19 = 1546626934U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
