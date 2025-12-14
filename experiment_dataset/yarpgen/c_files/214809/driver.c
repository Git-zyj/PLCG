#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20070;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)176;
signed char var_16 = (signed char)-32;
short var_18 = (short)-4698;
int zero = 0;
long long int var_20 = -8732057400455381592LL;
unsigned int var_21 = 1845041816U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
