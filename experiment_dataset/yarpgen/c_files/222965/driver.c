#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 127443359U;
long long int var_1 = -3441493722557532579LL;
short var_3 = (short)31274;
unsigned int var_4 = 4114488818U;
int var_6 = -1978588506;
unsigned int var_7 = 3351532685U;
unsigned long long int var_8 = 12958045167642047083ULL;
int var_10 = 1879055333;
int zero = 0;
unsigned long long int var_11 = 14625080206968208254ULL;
long long int var_12 = 7522728127937213002LL;
signed char var_13 = (signed char)96;
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
