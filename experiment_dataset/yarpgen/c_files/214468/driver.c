#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2452694435814722096LL;
short var_2 = (short)24143;
short var_3 = (short)9135;
short var_6 = (short)-10574;
unsigned int var_7 = 1149048801U;
signed char var_8 = (signed char)14;
signed char var_9 = (signed char)68;
unsigned char var_10 = (unsigned char)88;
int var_11 = 2020760068;
int zero = 0;
unsigned short var_12 = (unsigned short)58193;
short var_13 = (short)26318;
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
