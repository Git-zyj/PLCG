#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7194138848696740566LL;
int var_1 = 861289443;
unsigned char var_4 = (unsigned char)148;
unsigned char var_6 = (unsigned char)212;
int var_7 = -1558027426;
unsigned short var_10 = (unsigned short)50790;
unsigned short var_11 = (unsigned short)29971;
int zero = 0;
signed char var_12 = (signed char)-94;
long long int var_13 = 8675069915437378932LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
