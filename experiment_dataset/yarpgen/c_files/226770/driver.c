#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1126334176;
unsigned short var_2 = (unsigned short)53604;
_Bool var_10 = (_Bool)1;
unsigned short var_14 = (unsigned short)42689;
int zero = 0;
int var_17 = -1783184199;
int var_18 = -1418854127;
unsigned short var_19 = (unsigned short)10015;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
