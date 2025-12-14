#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
unsigned int var_1 = 750759649U;
int var_3 = 1940757291;
unsigned char var_11 = (unsigned char)147;
long long int var_13 = 9113582028031447583LL;
int var_16 = 900938425;
unsigned short var_19 = (unsigned short)16286;
int zero = 0;
unsigned char var_20 = (unsigned char)127;
long long int var_21 = -7412079770841777358LL;
unsigned int var_22 = 2008888189U;
short var_23 = (short)17301;
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
