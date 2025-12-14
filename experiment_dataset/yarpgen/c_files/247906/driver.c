#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
int var_2 = -1052928206;
signed char var_7 = (signed char)78;
unsigned short var_13 = (unsigned short)38331;
int zero = 0;
signed char var_14 = (signed char)-70;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-19;
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
