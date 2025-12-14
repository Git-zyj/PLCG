#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4610569935301768754LL;
int var_10 = -11918847;
unsigned char var_13 = (unsigned char)98;
unsigned short var_14 = (unsigned short)42430;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-576;
void init() {
}

void checksum() {
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
