#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 653329196;
short var_5 = (short)11627;
unsigned char var_12 = (unsigned char)164;
unsigned char var_17 = (unsigned char)136;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 82309493145662687LL;
signed char var_22 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
