#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51143;
unsigned char var_6 = (unsigned char)48;
unsigned short var_8 = (unsigned short)14540;
signed char var_9 = (signed char)-90;
unsigned short var_10 = (unsigned short)49123;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-83;
int zero = 0;
unsigned short var_14 = (unsigned short)52818;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)5;
unsigned long long int var_17 = 16174944847062308002ULL;
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
