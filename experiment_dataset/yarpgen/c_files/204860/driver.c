#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
short var_2 = (short)-801;
unsigned long long int var_3 = 9448480181316465839ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)1991;
signed char var_10 = (signed char)62;
unsigned char var_13 = (unsigned char)252;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-105;
long long int var_19 = 780375087666712521LL;
unsigned char var_20 = (unsigned char)147;
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
