#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8044098595227735426LL;
unsigned char var_2 = (unsigned char)32;
int var_7 = -201320956;
signed char var_10 = (signed char)-9;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
int var_21 = 367384547;
unsigned short var_22 = (unsigned short)11333;
void init() {
}

void checksum() {
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
