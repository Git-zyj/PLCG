#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16138;
signed char var_2 = (signed char)-35;
unsigned char var_3 = (unsigned char)26;
unsigned int var_5 = 1303305654U;
unsigned short var_6 = (unsigned short)49144;
long long int var_9 = -4877549369085296600LL;
int zero = 0;
unsigned char var_12 = (unsigned char)171;
int var_13 = -1819018651;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
