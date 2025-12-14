#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2484153555863515678LL;
unsigned char var_10 = (unsigned char)21;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)175;
int var_13 = -395780483;
unsigned short var_14 = (unsigned short)3723;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
