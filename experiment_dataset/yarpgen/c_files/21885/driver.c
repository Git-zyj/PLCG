#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2716948543U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_16 = -1666421209;
int var_18 = 74399999;
int zero = 0;
short var_19 = (short)17675;
short var_20 = (short)-5671;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
