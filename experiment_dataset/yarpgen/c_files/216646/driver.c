#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5622217675675685907LL;
short var_1 = (short)-7338;
short var_2 = (short)-9607;
unsigned short var_3 = (unsigned short)55975;
unsigned int var_9 = 1553310764U;
int var_11 = 1124218900;
short var_14 = (short)-25061;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -2005171687477140670LL;
unsigned int var_21 = 4216533062U;
int var_22 = -813763609;
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
