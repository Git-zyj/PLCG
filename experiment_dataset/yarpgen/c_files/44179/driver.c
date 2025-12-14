#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3465536574U;
int var_3 = 1344638091;
unsigned char var_6 = (unsigned char)95;
unsigned char var_7 = (unsigned char)209;
unsigned short var_9 = (unsigned short)45273;
int zero = 0;
long long int var_11 = -4806458165261733043LL;
unsigned int var_12 = 2921750723U;
unsigned short var_13 = (unsigned short)22150;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
