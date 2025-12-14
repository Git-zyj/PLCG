#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)148;
unsigned short var_6 = (unsigned short)37211;
unsigned char var_8 = (unsigned char)215;
unsigned char var_11 = (unsigned char)140;
signed char var_17 = (signed char)71;
int zero = 0;
int var_18 = 1413468635;
int var_19 = 1696883083;
signed char var_20 = (signed char)-23;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
