#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47559;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)55801;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)235;
unsigned short var_5 = (unsigned short)61436;
unsigned short var_6 = (unsigned short)60599;
long long int var_7 = -3823480724647267709LL;
unsigned long long int var_8 = 9732073784376709549ULL;
int var_9 = 1122039806;
int zero = 0;
short var_12 = (short)-5484;
unsigned long long int var_13 = 6874007671176375487ULL;
signed char var_14 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
