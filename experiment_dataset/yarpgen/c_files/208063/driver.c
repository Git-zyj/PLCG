#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
_Bool var_2 = (_Bool)1;
long long int var_4 = -733467236255179792LL;
short var_6 = (short)14504;
unsigned long long int var_7 = 12313611432577007671ULL;
unsigned int var_8 = 3205229384U;
unsigned char var_9 = (unsigned char)115;
long long int var_10 = 7306491470716779090LL;
int zero = 0;
unsigned long long int var_11 = 6722749331861831880ULL;
short var_12 = (short)14748;
long long int var_13 = -646995898029099592LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
