#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 910002739;
long long int var_5 = -8913620237552234811LL;
unsigned long long int var_8 = 10280401840930622223ULL;
long long int var_13 = 895644564311832428LL;
int zero = 0;
int var_14 = 1210231159;
unsigned char var_15 = (unsigned char)93;
long long int var_16 = -3561232202832193167LL;
signed char var_17 = (signed char)12;
int var_18 = -149656581;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
