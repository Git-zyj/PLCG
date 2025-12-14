#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5336056205918452068LL;
unsigned short var_4 = (unsigned short)3208;
long long int var_6 = 4092066154040286934LL;
int var_7 = 1990845250;
short var_9 = (short)-1379;
unsigned char var_10 = (unsigned char)163;
int zero = 0;
unsigned long long int var_11 = 17111960682110917719ULL;
unsigned short var_12 = (unsigned short)54154;
signed char var_13 = (signed char)39;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
