#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned long long int var_1 = 9435453945273929579ULL;
signed char var_6 = (signed char)36;
unsigned int var_7 = 2994336656U;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1847923024;
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
