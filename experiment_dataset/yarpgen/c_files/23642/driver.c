#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59023;
long long int var_4 = -1718082350682056443LL;
unsigned char var_10 = (unsigned char)1;
_Bool var_11 = (_Bool)1;
unsigned short var_18 = (unsigned short)30872;
int zero = 0;
int var_19 = 645262418;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
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
