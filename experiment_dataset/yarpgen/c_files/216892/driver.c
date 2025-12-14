#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3838842535581645823LL;
long long int var_4 = -4271040661435995912LL;
unsigned char var_6 = (unsigned char)125;
int var_7 = 1495870808;
long long int var_8 = 1470792673225574337LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)8454;
long long int var_14 = -527606404969369683LL;
unsigned int var_16 = 3156352271U;
unsigned long long int var_18 = 3932653603141222581ULL;
short var_19 = (short)22427;
int zero = 0;
unsigned short var_20 = (unsigned short)51343;
long long int var_21 = -3676108350487206725LL;
int var_22 = -1522841362;
int var_23 = 2020557240;
_Bool var_24 = (_Bool)1;
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
