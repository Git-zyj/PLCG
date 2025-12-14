#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1956829766;
unsigned long long int var_3 = 14671224862586060527ULL;
short var_4 = (short)19782;
int var_5 = 390768961;
short var_6 = (short)28835;
unsigned char var_7 = (unsigned char)187;
unsigned int var_8 = 124395240U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)72;
unsigned int var_17 = 4037512739U;
int zero = 0;
long long int var_19 = 4424192846872557307LL;
unsigned int var_20 = 2021979212U;
unsigned short var_21 = (unsigned short)31006;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
