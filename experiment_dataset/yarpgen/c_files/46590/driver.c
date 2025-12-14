#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned int var_8 = 3108294919U;
long long int var_10 = 8193307042059018643LL;
int zero = 0;
int var_12 = 1839586760;
signed char var_13 = (signed char)-93;
long long int var_14 = -5464058891556997596LL;
long long int var_15 = -8959839177970634581LL;
long long int var_16 = 5320519623514295948LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
