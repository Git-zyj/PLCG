#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 62233633132888261ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)33518;
unsigned int var_8 = 1321688064U;
unsigned long long int var_10 = 10649855613259019716ULL;
long long int var_11 = -1897943379676783439LL;
int zero = 0;
unsigned short var_12 = (unsigned short)43856;
unsigned char var_13 = (unsigned char)141;
unsigned short var_14 = (unsigned short)56947;
long long int var_15 = -1543232469058133927LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
