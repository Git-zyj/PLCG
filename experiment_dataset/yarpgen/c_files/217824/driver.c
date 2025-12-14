#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)20327;
unsigned long long int var_11 = 15587050805056635636ULL;
unsigned short var_17 = (unsigned short)47582;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 7280559870729568483LL;
signed char var_21 = (signed char)40;
unsigned long long int var_22 = 8567942985579417209ULL;
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
