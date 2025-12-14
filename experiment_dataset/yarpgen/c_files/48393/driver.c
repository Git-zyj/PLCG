#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-31846;
unsigned int var_6 = 342015734U;
short var_7 = (short)5075;
short var_9 = (short)14077;
unsigned long long int var_10 = 8287896881440874971ULL;
short var_15 = (short)-3455;
short var_17 = (short)-26684;
unsigned char var_18 = (unsigned char)226;
unsigned int var_19 = 353655217U;
int zero = 0;
long long int var_20 = -5334378981337325806LL;
unsigned short var_21 = (unsigned short)54835;
unsigned short var_22 = (unsigned short)35706;
unsigned short var_23 = (unsigned short)60379;
unsigned char var_24 = (unsigned char)54;
void init() {
}

void checksum() {
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
