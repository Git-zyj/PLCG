#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18076022223761303943ULL;
long long int var_3 = 7904951965703719171LL;
short var_7 = (short)12535;
signed char var_10 = (signed char)40;
unsigned char var_14 = (unsigned char)204;
unsigned int var_16 = 683517177U;
int zero = 0;
unsigned int var_17 = 34667467U;
unsigned int var_18 = 3437562216U;
unsigned char var_19 = (unsigned char)253;
signed char var_20 = (signed char)-104;
unsigned short var_21 = (unsigned short)51344;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
