#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2028682090051358264ULL;
unsigned int var_4 = 3826892528U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 1995094719987333710ULL;
signed char var_10 = (signed char)102;
int zero = 0;
unsigned char var_11 = (unsigned char)184;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
