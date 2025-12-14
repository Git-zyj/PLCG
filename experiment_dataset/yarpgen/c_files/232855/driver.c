#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 17476336402064573619ULL;
unsigned short var_3 = (unsigned short)59686;
unsigned short var_6 = (unsigned short)11451;
int zero = 0;
unsigned long long int var_10 = 4232597869625824391ULL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)15205;
unsigned short var_14 = (unsigned short)22091;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
