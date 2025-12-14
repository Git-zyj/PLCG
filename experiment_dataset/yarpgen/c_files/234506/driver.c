#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2602650748U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)23645;
long long int var_6 = 5807271706668920915LL;
unsigned short var_7 = (unsigned short)39728;
signed char var_11 = (signed char)79;
unsigned char var_14 = (unsigned char)32;
signed char var_16 = (signed char)-117;
int zero = 0;
unsigned char var_20 = (unsigned char)184;
unsigned short var_21 = (unsigned short)62844;
long long int var_22 = 6062243168457469857LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
