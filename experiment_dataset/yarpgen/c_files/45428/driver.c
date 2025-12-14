#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
long long int var_2 = -7601242639759422709LL;
short var_5 = (short)12091;
signed char var_6 = (signed char)84;
signed char var_10 = (signed char)-98;
unsigned int var_16 = 3124296400U;
unsigned char var_18 = (unsigned char)223;
int zero = 0;
unsigned char var_19 = (unsigned char)153;
int var_20 = -802385766;
short var_21 = (short)26052;
long long int var_22 = 5060487912132116695LL;
int var_23 = -109685902;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
