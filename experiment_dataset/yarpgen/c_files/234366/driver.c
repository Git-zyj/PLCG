#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)185;
unsigned char var_5 = (unsigned char)105;
unsigned long long int var_6 = 10504519972024093527ULL;
unsigned char var_9 = (unsigned char)11;
int zero = 0;
unsigned int var_10 = 2322071076U;
unsigned long long int var_11 = 1054790569600919311ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
