#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39386;
unsigned char var_7 = (unsigned char)2;
unsigned int var_9 = 162252135U;
unsigned short var_10 = (unsigned short)20934;
unsigned short var_11 = (unsigned short)30561;
unsigned int var_13 = 2366563904U;
int zero = 0;
unsigned int var_19 = 2250500635U;
unsigned short var_20 = (unsigned short)63255;
unsigned int var_21 = 1900096022U;
short var_22 = (short)-16637;
void init() {
}

void checksum() {
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
