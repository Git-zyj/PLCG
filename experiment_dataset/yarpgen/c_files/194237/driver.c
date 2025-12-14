#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)241;
unsigned int var_5 = 929113968U;
_Bool var_9 = (_Bool)1;
unsigned char var_15 = (unsigned char)164;
signed char var_16 = (signed char)-124;
int var_17 = -955902033;
int zero = 0;
unsigned short var_20 = (unsigned short)32213;
unsigned int var_21 = 2914503271U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3425169239470084164LL;
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
