#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 153689474;
unsigned char var_7 = (unsigned char)47;
unsigned int var_10 = 84572290U;
long long int var_11 = 3809794917930302855LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)7;
unsigned short var_14 = (unsigned short)46828;
unsigned short var_15 = (unsigned short)55833;
signed char var_16 = (signed char)-59;
long long int var_17 = -6704607944548416459LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
