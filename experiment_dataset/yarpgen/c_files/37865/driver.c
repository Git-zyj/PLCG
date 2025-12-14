#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1352261984U;
unsigned long long int var_3 = 16403682829869033249ULL;
unsigned short var_4 = (unsigned short)4482;
unsigned int var_7 = 1692279050U;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)175;
unsigned short var_12 = (unsigned short)58977;
signed char var_13 = (signed char)122;
unsigned long long int var_16 = 2287197503951685381ULL;
int var_17 = 39642122;
int zero = 0;
short var_18 = (short)6083;
long long int var_19 = -4185441354910653006LL;
long long int var_20 = -8044671807750345884LL;
long long int var_21 = -1009229379888465422LL;
unsigned long long int var_22 = 13264270032347100718ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
