#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4264691122504467509LL;
signed char var_2 = (signed char)-64;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_12 = (short)21902;
long long int var_13 = -1785857393490023545LL;
long long int var_14 = -8451533327473130429LL;
long long int var_15 = -8749151175716017401LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
