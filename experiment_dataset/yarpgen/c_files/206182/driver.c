#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4176902642U;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-24150;
unsigned long long int var_14 = 334923363308607625ULL;
int zero = 0;
long long int var_20 = -1767069017714069160LL;
unsigned char var_21 = (unsigned char)27;
unsigned long long int var_22 = 3405535441519519796ULL;
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
