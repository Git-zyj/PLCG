#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-30;
long long int var_11 = -8286472126946557654LL;
int zero = 0;
unsigned int var_20 = 3273422950U;
signed char var_21 = (signed char)-5;
signed char var_22 = (signed char)-117;
unsigned int var_23 = 2039032865U;
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
