#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4330306930344289925LL;
unsigned short var_1 = (unsigned short)36090;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 4745061616094146279ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 15528245623587156729ULL;
int zero = 0;
long long int var_16 = -2100722884612755418LL;
long long int var_17 = 8770687300201390369LL;
long long int var_18 = 993212630348265049LL;
signed char var_19 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
