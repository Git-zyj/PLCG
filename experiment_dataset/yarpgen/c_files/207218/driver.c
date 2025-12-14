#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9088;
unsigned int var_1 = 276767424U;
signed char var_2 = (signed char)11;
unsigned long long int var_4 = 6129008470197529474ULL;
int var_6 = -340290612;
short var_8 = (short)-25907;
unsigned short var_9 = (unsigned short)26840;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
unsigned long long int var_15 = 17650160506484081184ULL;
unsigned long long int var_16 = 12300509332211399272ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
