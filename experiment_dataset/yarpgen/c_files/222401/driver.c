#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
signed char var_3 = (signed char)43;
unsigned int var_4 = 402822501U;
signed char var_5 = (signed char)-85;
long long int var_6 = 1938789282296223154LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)149;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)98;
unsigned int var_13 = 2458149141U;
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
