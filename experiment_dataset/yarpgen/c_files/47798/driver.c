#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3346366854532184453ULL;
long long int var_3 = -6445585919405578293LL;
unsigned short var_6 = (unsigned short)6336;
long long int var_10 = -8620207108241753722LL;
unsigned char var_12 = (unsigned char)24;
int var_13 = 913694148;
unsigned int var_15 = 549082959U;
_Bool var_17 = (_Bool)0;
int var_19 = 697211459;
int zero = 0;
unsigned short var_20 = (unsigned short)51128;
unsigned char var_21 = (unsigned char)195;
signed char var_22 = (signed char)87;
unsigned short var_23 = (unsigned short)2613;
long long int var_24 = -8514131948073939382LL;
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
