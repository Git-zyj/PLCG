#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)52872;
long long int var_8 = 4136043908234844461LL;
unsigned char var_9 = (unsigned char)16;
unsigned int var_11 = 898186846U;
int zero = 0;
unsigned long long int var_17 = 14530770353259298063ULL;
unsigned int var_18 = 1908319315U;
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
