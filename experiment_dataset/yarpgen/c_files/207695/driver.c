#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1218;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)34;
signed char var_11 = (signed char)-28;
int var_12 = -1562499156;
short var_13 = (short)-11382;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6958601941601113239LL;
void init() {
}

void checksum() {
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
