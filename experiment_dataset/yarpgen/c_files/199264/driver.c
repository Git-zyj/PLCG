#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1521146222095998483ULL;
long long int var_2 = 334349974123596016LL;
unsigned long long int var_6 = 13727548898157764308ULL;
_Bool var_10 = (_Bool)0;
int var_11 = 202805375;
signed char var_12 = (signed char)-15;
unsigned char var_17 = (unsigned char)177;
int zero = 0;
unsigned char var_19 = (unsigned char)161;
short var_20 = (short)-24681;
unsigned char var_21 = (unsigned char)73;
long long int var_22 = -718841933462567442LL;
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
