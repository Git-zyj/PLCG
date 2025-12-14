#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 596005203154173325ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 10856462660142533311ULL;
signed char var_21 = (signed char)101;
unsigned short var_22 = (unsigned short)11726;
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
