#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7878759865323160054LL;
unsigned char var_3 = (unsigned char)199;
unsigned int var_5 = 2029996566U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)37;
long long int var_14 = -6748547427115974422LL;
unsigned int var_15 = 3522985730U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
