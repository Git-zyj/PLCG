#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34879;
signed char var_1 = (signed char)65;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)39;
unsigned int var_4 = 2425257340U;
short var_5 = (short)20029;
unsigned char var_6 = (unsigned char)105;
short var_7 = (short)7635;
_Bool var_8 = (_Bool)1;
int var_10 = 272441035;
unsigned short var_13 = (unsigned short)30377;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
int var_16 = -1985382106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
