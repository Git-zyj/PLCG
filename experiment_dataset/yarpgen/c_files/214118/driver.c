#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15295934562953178363ULL;
unsigned long long int var_1 = 12283675732997449681ULL;
unsigned long long int var_4 = 3885711797614253209ULL;
unsigned long long int var_5 = 12092144772031953811ULL;
unsigned short var_7 = (unsigned short)51782;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 8077740156952649548ULL;
short var_12 = (short)6948;
_Bool var_14 = (_Bool)0;
short var_15 = (short)5993;
unsigned short var_18 = (unsigned short)27285;
int zero = 0;
int var_19 = 259010398;
short var_20 = (short)-31164;
unsigned char var_21 = (unsigned char)71;
void init() {
}

void checksum() {
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
