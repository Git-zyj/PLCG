#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)60395;
unsigned char var_5 = (unsigned char)189;
unsigned char var_7 = (unsigned char)169;
int zero = 0;
long long int var_12 = -1774624777303725235LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)160;
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
