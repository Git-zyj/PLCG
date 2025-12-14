#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11449;
unsigned short var_4 = (unsigned short)12602;
unsigned char var_7 = (unsigned char)64;
int var_9 = 204043289;
unsigned int var_14 = 341400088U;
int zero = 0;
unsigned char var_18 = (unsigned char)110;
long long int var_19 = 6262880131727697183LL;
long long int var_20 = 8733983444331416274LL;
void init() {
}

void checksum() {
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
