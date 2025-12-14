#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1202377487U;
unsigned int var_1 = 2329912775U;
int var_2 = -580362345;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_11 = -1851632577;
unsigned int var_12 = 978639887U;
int zero = 0;
int var_13 = -579263532;
unsigned int var_14 = 2029263865U;
unsigned int var_15 = 729414507U;
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
