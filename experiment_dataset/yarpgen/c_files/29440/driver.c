#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2138747597;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-81;
unsigned long long int var_14 = 7234915946004572363ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
int var_18 = -475461733;
void init() {
}

void checksum() {
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
