#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14752;
signed char var_2 = (signed char)93;
int var_3 = 1769411043;
unsigned short var_4 = (unsigned short)28780;
long long int var_6 = 1668244581346839699LL;
long long int var_11 = -6144122893972737037LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)174;
unsigned char var_16 = (unsigned char)81;
int zero = 0;
int var_17 = -1069471300;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
