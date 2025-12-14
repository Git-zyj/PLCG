#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25545;
unsigned long long int var_6 = 9482520606119003954ULL;
unsigned short var_7 = (unsigned short)6381;
signed char var_9 = (signed char)80;
unsigned short var_11 = (unsigned short)5337;
unsigned short var_14 = (unsigned short)64731;
unsigned long long int var_19 = 7313823965498145839ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)60098;
signed char var_21 = (signed char)106;
unsigned long long int var_22 = 7876077866370691176ULL;
unsigned short var_23 = (unsigned short)31697;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
