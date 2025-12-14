#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -871618320;
unsigned char var_3 = (unsigned char)84;
unsigned char var_4 = (unsigned char)117;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)218;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)207;
void init() {
}

void checksum() {
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
