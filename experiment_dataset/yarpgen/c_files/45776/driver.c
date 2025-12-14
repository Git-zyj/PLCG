#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2193244186U;
unsigned int var_3 = 1233030847U;
long long int var_4 = 817065578319547732LL;
unsigned short var_9 = (unsigned short)26276;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)42789;
unsigned int var_18 = 524606498U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
