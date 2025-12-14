#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned char var_3 = (unsigned char)246;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-119;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-74;
int zero = 0;
unsigned char var_13 = (unsigned char)186;
unsigned short var_14 = (unsigned short)20779;
signed char var_15 = (signed char)114;
unsigned char var_16 = (unsigned char)28;
unsigned short var_17 = (unsigned short)59161;
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
