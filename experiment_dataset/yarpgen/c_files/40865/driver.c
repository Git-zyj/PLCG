#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned char var_2 = (unsigned char)170;
unsigned int var_3 = 768730772U;
signed char var_8 = (signed char)-73;
unsigned short var_10 = (unsigned short)41727;
unsigned int var_11 = 4081211630U;
unsigned int var_12 = 1057804561U;
unsigned char var_13 = (unsigned char)174;
int zero = 0;
short var_14 = (short)4857;
long long int var_15 = -5291024380896023115LL;
unsigned char var_16 = (unsigned char)52;
void init() {
}

void checksum() {
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
