#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1703986975;
unsigned char var_1 = (unsigned char)24;
long long int var_2 = -752469418173024604LL;
_Bool var_3 = (_Bool)0;
int var_4 = -686527259;
long long int var_6 = 257077495744025295LL;
unsigned long long int var_9 = 6563328727271490302ULL;
unsigned long long int var_10 = 7596309549122076013ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -5809760673104414852LL;
unsigned int var_15 = 1320431070U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
