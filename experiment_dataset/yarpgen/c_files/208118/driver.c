#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2063;
signed char var_6 = (signed char)-110;
short var_8 = (short)11779;
unsigned char var_10 = (unsigned char)150;
short var_12 = (short)-30440;
int var_13 = 1696120662;
signed char var_14 = (signed char)104;
unsigned char var_18 = (unsigned char)41;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)231;
short var_22 = (short)27475;
unsigned char var_23 = (unsigned char)46;
unsigned short var_24 = (unsigned short)53176;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
