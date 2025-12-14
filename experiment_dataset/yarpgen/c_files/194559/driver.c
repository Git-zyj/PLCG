#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned int var_6 = 2865209375U;
unsigned long long int var_7 = 18253518893398842229ULL;
unsigned short var_10 = (unsigned short)38897;
unsigned char var_11 = (unsigned char)187;
int zero = 0;
unsigned short var_15 = (unsigned short)45553;
signed char var_16 = (signed char)70;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
