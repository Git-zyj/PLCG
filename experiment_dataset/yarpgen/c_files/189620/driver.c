#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 251028997;
unsigned int var_1 = 195330503U;
unsigned int var_2 = 1964268915U;
unsigned int var_3 = 370319985U;
unsigned char var_7 = (unsigned char)11;
signed char var_8 = (signed char)-82;
long long int var_12 = 9072195635457357354LL;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)57884;
int zero = 0;
unsigned int var_19 = 2844889810U;
signed char var_20 = (signed char)92;
long long int var_21 = 324354648101561907LL;
unsigned long long int var_22 = 2590316318043291010ULL;
unsigned long long int var_23 = 12926145297566796208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
