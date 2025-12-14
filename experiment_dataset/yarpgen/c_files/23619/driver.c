#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
unsigned int var_3 = 1216856587U;
unsigned long long int var_4 = 17632365741151616062ULL;
_Bool var_5 = (_Bool)0;
int var_7 = 505269215;
_Bool var_10 = (_Bool)0;
long long int var_11 = -4440940406938683961LL;
int zero = 0;
unsigned int var_14 = 1103201962U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
