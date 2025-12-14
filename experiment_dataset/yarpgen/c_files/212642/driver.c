#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5454548104394512408LL;
signed char var_2 = (signed char)-13;
unsigned char var_3 = (unsigned char)224;
unsigned char var_4 = (unsigned char)62;
short var_7 = (short)-20894;
_Bool var_8 = (_Bool)1;
long long int var_12 = -2106847787306815295LL;
long long int var_14 = 8624198529320264861LL;
int zero = 0;
unsigned short var_15 = (unsigned short)64772;
signed char var_16 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
