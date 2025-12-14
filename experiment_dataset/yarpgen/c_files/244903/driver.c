#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1258672643U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-74;
unsigned int var_6 = 1809576218U;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)22112;
int zero = 0;
short var_17 = (short)19039;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2177252749U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
