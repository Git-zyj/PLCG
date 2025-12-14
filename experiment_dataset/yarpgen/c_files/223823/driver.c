#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned char var_2 = (unsigned char)21;
long long int var_3 = 3185304602613400784LL;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)60245;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 6692800701890115139LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
