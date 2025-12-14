#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2560481778U;
short var_1 = (short)-20189;
unsigned int var_5 = 433203321U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)2;
signed char var_9 = (signed char)-96;
short var_12 = (short)16377;
unsigned char var_14 = (unsigned char)177;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)208;
int zero = 0;
unsigned int var_20 = 1315873236U;
long long int var_21 = 8710105728170552683LL;
int var_22 = -1768732467;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
