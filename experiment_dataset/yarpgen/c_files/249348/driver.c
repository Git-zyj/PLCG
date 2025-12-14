#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)81;
unsigned short var_6 = (unsigned short)58248;
unsigned short var_8 = (unsigned short)34417;
signed char var_9 = (signed char)-32;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 2390606350986204299LL;
unsigned short var_12 = (unsigned short)1348;
unsigned char var_13 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
