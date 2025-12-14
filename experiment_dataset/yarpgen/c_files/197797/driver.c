#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
signed char var_2 = (signed char)-24;
unsigned char var_3 = (unsigned char)58;
signed char var_4 = (signed char)-2;
unsigned char var_5 = (unsigned char)17;
unsigned char var_8 = (unsigned char)162;
unsigned char var_10 = (unsigned char)179;
unsigned char var_13 = (unsigned char)135;
unsigned char var_14 = (unsigned char)123;
signed char var_16 = (signed char)21;
int zero = 0;
signed char var_18 = (signed char)9;
signed char var_19 = (signed char)-43;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)130;
signed char var_22 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
