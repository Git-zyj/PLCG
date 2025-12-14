#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-28240;
unsigned int var_3 = 595029246U;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)45654;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-18;
int var_13 = 767756289;
unsigned char var_14 = (unsigned char)70;
int zero = 0;
long long int var_18 = 8277092183795172465LL;
int var_19 = 505740751;
int var_20 = -1614839450;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
