#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1718852608U;
long long int var_5 = 1133148641941087858LL;
long long int var_6 = 3442022097422649238LL;
unsigned long long int var_8 = 16524816010825497962ULL;
signed char var_9 = (signed char)21;
unsigned long long int var_10 = 18256493359163553098ULL;
int zero = 0;
signed char var_11 = (signed char)57;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)16817;
short var_14 = (short)21716;
void init() {
}

void checksum() {
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
