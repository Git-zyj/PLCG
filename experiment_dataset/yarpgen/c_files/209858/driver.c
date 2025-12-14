#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1952752259;
unsigned int var_3 = 558665264U;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)138;
int var_7 = 1858151835;
unsigned int var_8 = 3499355782U;
unsigned long long int var_9 = 15073856953994516821ULL;
unsigned short var_10 = (unsigned short)57725;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)6;
unsigned short var_14 = (unsigned short)55077;
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
