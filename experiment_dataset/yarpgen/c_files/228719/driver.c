#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 429365470;
signed char var_1 = (signed char)-86;
unsigned int var_2 = 3918678921U;
unsigned long long int var_3 = 13788251404582095120ULL;
int var_4 = 863897672;
unsigned int var_5 = 3045788819U;
unsigned int var_6 = 725180277U;
unsigned int var_7 = 2414718407U;
unsigned char var_8 = (unsigned char)249;
unsigned char var_9 = (unsigned char)169;
unsigned int var_10 = 522595974U;
long long int var_11 = -8315288734460831160LL;
int var_12 = 1813879952;
unsigned char var_13 = (unsigned char)130;
unsigned long long int var_14 = 13077845810514841536ULL;
unsigned char var_15 = (unsigned char)165;
int zero = 0;
unsigned int var_16 = 2185793614U;
unsigned char var_17 = (unsigned char)62;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8008764209949074464ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
