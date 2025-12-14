#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1777472743;
int var_4 = 910121992;
long long int var_5 = -2962806260643598021LL;
int var_8 = 1415213781;
unsigned long long int var_9 = 16107872280863979648ULL;
unsigned short var_10 = (unsigned short)59281;
signed char var_11 = (signed char)11;
int zero = 0;
long long int var_14 = -2686491258309668750LL;
int var_15 = 1924476729;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
