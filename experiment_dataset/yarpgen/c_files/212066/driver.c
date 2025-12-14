#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 624183753632562825LL;
unsigned char var_1 = (unsigned char)218;
unsigned long long int var_2 = 5890727979187678238ULL;
unsigned char var_3 = (unsigned char)53;
unsigned short var_4 = (unsigned short)18591;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_10 = 2831486629861510950LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 691612599599473358ULL;
int zero = 0;
unsigned int var_19 = 3750508006U;
unsigned long long int var_20 = 11046430703212798931ULL;
unsigned long long int var_21 = 1273182209823021773ULL;
unsigned short var_22 = (unsigned short)58331;
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
