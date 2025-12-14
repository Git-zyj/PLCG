#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 582675698U;
int var_5 = -2089369464;
signed char var_10 = (signed char)-95;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_19 = -1005796053;
short var_20 = (short)-27004;
unsigned short var_21 = (unsigned short)11731;
unsigned char var_22 = (unsigned char)241;
unsigned int var_23 = 3855374295U;
short var_24 = (short)20042;
int var_25 = 990164581;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
