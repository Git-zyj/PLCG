#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned short var_1 = (unsigned short)40751;
signed char var_4 = (signed char)4;
unsigned char var_5 = (unsigned char)20;
unsigned short var_6 = (unsigned short)11495;
unsigned short var_7 = (unsigned short)28755;
unsigned char var_8 = (unsigned char)98;
signed char var_9 = (signed char)49;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)20;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-94;
unsigned char var_15 = (unsigned char)32;
unsigned char var_16 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
