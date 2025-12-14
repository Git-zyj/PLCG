#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
short var_2 = (short)-10527;
unsigned char var_3 = (unsigned char)172;
signed char var_7 = (signed char)68;
long long int var_10 = 4519509797502300734LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)27349;
int zero = 0;
unsigned short var_15 = (unsigned short)22378;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-15262;
unsigned char var_18 = (unsigned char)174;
unsigned char var_19 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
