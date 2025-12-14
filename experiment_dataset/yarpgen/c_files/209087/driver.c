#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2892286243319261560LL;
unsigned short var_2 = (unsigned short)42653;
unsigned char var_6 = (unsigned char)1;
int zero = 0;
short var_10 = (short)14409;
_Bool var_11 = (_Bool)0;
long long int var_12 = -939300152281229995LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
