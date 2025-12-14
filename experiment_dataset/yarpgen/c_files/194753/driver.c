#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48117;
unsigned int var_3 = 1942569816U;
unsigned char var_4 = (unsigned char)60;
signed char var_5 = (signed char)120;
unsigned short var_6 = (unsigned short)35632;
unsigned long long int var_7 = 2652000054703859527ULL;
short var_8 = (short)19556;
unsigned int var_10 = 299422157U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8091586684182823466LL;
int zero = 0;
unsigned long long int var_14 = 1253118566243522493ULL;
unsigned int var_15 = 4162808566U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-11679;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
