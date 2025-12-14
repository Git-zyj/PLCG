#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2984378373134449892LL;
long long int var_8 = 4495997419040733519LL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)3980;
unsigned char var_13 = (unsigned char)22;
unsigned short var_15 = (unsigned short)24071;
unsigned char var_16 = (unsigned char)225;
int zero = 0;
short var_19 = (short)17563;
short var_20 = (short)-31758;
_Bool var_21 = (_Bool)0;
long long int var_22 = -3536240801817226910LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
