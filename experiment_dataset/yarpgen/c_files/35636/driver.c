#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57946;
unsigned int var_1 = 1942029004U;
unsigned short var_2 = (unsigned short)10270;
long long int var_3 = 7850732994774308147LL;
short var_4 = (short)13557;
unsigned int var_5 = 3274021148U;
short var_6 = (short)23543;
unsigned char var_7 = (unsigned char)44;
unsigned int var_8 = 3592621632U;
long long int var_10 = -6872560282719454274LL;
signed char var_11 = (signed char)-92;
unsigned char var_13 = (unsigned char)61;
int zero = 0;
unsigned char var_14 = (unsigned char)9;
short var_15 = (short)26666;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
