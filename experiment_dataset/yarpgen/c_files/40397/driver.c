#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)67;
signed char var_5 = (signed char)114;
unsigned int var_6 = 2144930324U;
short var_7 = (short)17312;
short var_8 = (short)-26385;
signed char var_9 = (signed char)-96;
unsigned int var_10 = 3346528742U;
signed char var_12 = (signed char)51;
signed char var_14 = (signed char)-60;
long long int var_18 = 2867744892273915096LL;
int zero = 0;
unsigned char var_20 = (unsigned char)85;
unsigned char var_21 = (unsigned char)1;
unsigned short var_22 = (unsigned short)34072;
unsigned short var_23 = (unsigned short)11527;
long long int var_24 = 2452542262452772107LL;
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
