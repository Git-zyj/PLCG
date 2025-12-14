#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1126000038U;
long long int var_2 = -451388025089776483LL;
int var_3 = 903478395;
int var_7 = -1715761054;
short var_8 = (short)19190;
short var_10 = (short)1008;
int var_12 = 1093474932;
int var_13 = 1315156637;
int zero = 0;
int var_19 = -360016175;
unsigned long long int var_20 = 6532460683731415824ULL;
unsigned int var_21 = 90005157U;
short var_22 = (short)13725;
short var_23 = (short)29970;
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
