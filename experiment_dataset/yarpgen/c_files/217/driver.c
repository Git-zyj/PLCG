#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31164;
int var_3 = 882798136;
long long int var_5 = -5869260427330767332LL;
unsigned char var_9 = (unsigned char)254;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-14827;
short var_14 = (short)-13286;
unsigned int var_19 = 2108345843U;
int zero = 0;
short var_20 = (short)9104;
int var_21 = 196016917;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-31;
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
