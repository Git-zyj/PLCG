#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2962992652U;
long long int var_5 = -3862084203041224456LL;
unsigned short var_9 = (unsigned short)41879;
signed char var_11 = (signed char)-11;
short var_12 = (short)-31061;
unsigned long long int var_13 = 2291778909380129144ULL;
long long int var_18 = 1740424899937758670LL;
int zero = 0;
long long int var_19 = 7173545319079632971LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
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
