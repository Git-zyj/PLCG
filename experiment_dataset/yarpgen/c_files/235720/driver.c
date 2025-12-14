#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
int var_2 = -1273036026;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 608715650U;
int var_7 = 246564176;
unsigned long long int var_8 = 13686086074563135858ULL;
int zero = 0;
long long int var_10 = 501482256111980263LL;
unsigned char var_11 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
