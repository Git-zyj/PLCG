#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2793193386U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2363949957U;
int var_9 = -1585995260;
int var_10 = 1361212017;
int zero = 0;
int var_14 = -767770228;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = 785429381;
unsigned int var_18 = 1528987263U;
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
