#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2477320672U;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-83;
long long int var_12 = 5534816646092423344LL;
unsigned char var_15 = (unsigned char)159;
long long int var_16 = 4918452337298695150LL;
int zero = 0;
unsigned char var_20 = (unsigned char)84;
unsigned short var_21 = (unsigned short)52136;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3063488553U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
