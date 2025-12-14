#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
signed char var_7 = (signed char)-78;
long long int var_9 = -8150187234935767463LL;
unsigned int var_11 = 4207862477U;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 4757832940235427594LL;
signed char var_14 = (signed char)-110;
unsigned short var_15 = (unsigned short)13140;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
