#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5743510396011563538ULL;
short var_2 = (short)15000;
signed char var_3 = (signed char)40;
unsigned char var_4 = (unsigned char)122;
unsigned char var_5 = (unsigned char)190;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)62609;
signed char var_13 = (signed char)16;
int zero = 0;
unsigned short var_14 = (unsigned short)41088;
unsigned char var_15 = (unsigned char)37;
unsigned char var_16 = (unsigned char)180;
signed char var_17 = (signed char)-6;
unsigned char var_18 = (unsigned char)163;
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
