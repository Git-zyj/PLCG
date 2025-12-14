#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)10;
unsigned int var_11 = 2838251975U;
long long int var_13 = -5392903114557743245LL;
int zero = 0;
signed char var_15 = (signed char)6;
_Bool var_16 = (_Bool)0;
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
