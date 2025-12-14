#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
int var_2 = 652075095;
long long int var_3 = 4569929958876935945LL;
unsigned short var_6 = (unsigned short)55806;
unsigned long long int var_8 = 13196685314701070135ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 15389857588702319387ULL;
short var_13 = (short)29104;
void init() {
}

void checksum() {
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
