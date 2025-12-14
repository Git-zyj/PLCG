#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)211;
signed char var_5 = (signed char)119;
unsigned short var_7 = (unsigned short)55020;
unsigned short var_8 = (unsigned short)36131;
unsigned short var_9 = (unsigned short)8726;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
unsigned char var_16 = (unsigned char)50;
unsigned short var_17 = (unsigned short)60267;
signed char var_18 = (signed char)-27;
signed char var_19 = (signed char)-14;
signed char var_20 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
