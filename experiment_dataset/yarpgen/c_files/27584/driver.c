#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)202;
unsigned int var_7 = 4071585078U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)1;
long long int var_19 = -1893221005194106712LL;
unsigned char var_20 = (unsigned char)212;
long long int var_21 = -6058870044123124504LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
