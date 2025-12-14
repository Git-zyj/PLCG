#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7659556993201714199ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -2288787377863197464LL;
unsigned int var_6 = 2342523606U;
unsigned long long int var_7 = 6325680223012685413ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 1103048348172150492ULL;
int zero = 0;
long long int var_11 = -691483670943472428LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8498233891905506259LL;
_Bool var_14 = (_Bool)0;
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
