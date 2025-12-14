#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7108115303487366489LL;
unsigned char var_6 = (unsigned char)217;
unsigned short var_12 = (unsigned short)62532;
int zero = 0;
short var_20 = (short)17285;
unsigned short var_21 = (unsigned short)31739;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int var_24 = 1486899827147557455LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
