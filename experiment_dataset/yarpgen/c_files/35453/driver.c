#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 465902531;
unsigned short var_4 = (unsigned short)59927;
signed char var_5 = (signed char)70;
unsigned short var_6 = (unsigned short)29528;
unsigned long long int var_7 = 16997006146333895097ULL;
unsigned int var_8 = 1376302133U;
int var_9 = 107974973;
unsigned short var_10 = (unsigned short)10987;
signed char var_11 = (signed char)-120;
int zero = 0;
short var_12 = (short)27670;
int var_13 = -74119934;
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
