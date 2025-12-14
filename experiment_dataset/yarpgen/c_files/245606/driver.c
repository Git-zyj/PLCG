#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
unsigned int var_2 = 613989745U;
long long int var_3 = -8083179761129150770LL;
signed char var_6 = (signed char)32;
unsigned short var_7 = (unsigned short)12832;
long long int var_8 = 5041689151597311589LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_12 = (short)24801;
unsigned long long int var_13 = 16645525482840229258ULL;
int zero = 0;
signed char var_14 = (signed char)75;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)102;
long long int var_17 = 6539530125176415213LL;
unsigned long long int var_18 = 3259319088055181246ULL;
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
