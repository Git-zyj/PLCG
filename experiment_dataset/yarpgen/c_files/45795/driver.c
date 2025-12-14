#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1325180639U;
int var_6 = -976423731;
int var_10 = -1456669784;
unsigned long long int var_12 = 12442391306421197902ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-73;
signed char var_17 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
