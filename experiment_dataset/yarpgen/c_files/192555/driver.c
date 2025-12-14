#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_8 = (short)18225;
unsigned char var_11 = (unsigned char)180;
signed char var_12 = (signed char)-82;
unsigned char var_13 = (unsigned char)149;
int zero = 0;
unsigned char var_14 = (unsigned char)137;
unsigned char var_15 = (unsigned char)74;
long long int var_16 = -2271507885193241891LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)118;
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
