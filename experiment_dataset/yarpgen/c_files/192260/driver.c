#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-37;
unsigned long long int var_3 = 15538835872376192321ULL;
unsigned int var_6 = 1408860427U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_14 = 4465864943356478637ULL;
int zero = 0;
long long int var_19 = 7677846059555076770LL;
unsigned long long int var_20 = 16856314710956476425ULL;
signed char var_21 = (signed char)8;
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
