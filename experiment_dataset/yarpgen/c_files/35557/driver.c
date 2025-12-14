#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4031264215U;
long long int var_3 = -5599663505757182226LL;
long long int var_4 = 737538737940282596LL;
unsigned char var_8 = (unsigned char)156;
long long int var_12 = -9153001722396408690LL;
unsigned long long int var_13 = 14355068469557785149ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2793921794U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
