#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-10818;
unsigned int var_14 = 3784596867U;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 7052969125176809042LL;
unsigned char var_21 = (unsigned char)121;
unsigned int var_22 = 1738268762U;
int var_23 = 900391842;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
