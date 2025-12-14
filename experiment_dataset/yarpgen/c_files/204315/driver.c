#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12513;
short var_3 = (short)31389;
signed char var_4 = (signed char)-102;
unsigned short var_5 = (unsigned short)54628;
unsigned char var_8 = (unsigned char)111;
signed char var_13 = (signed char)-107;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)35706;
short var_16 = (short)-18471;
unsigned char var_17 = (unsigned char)171;
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
