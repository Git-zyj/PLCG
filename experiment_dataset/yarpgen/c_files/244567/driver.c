#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1118074625;
unsigned short var_4 = (unsigned short)3099;
int var_8 = -1809142536;
short var_11 = (short)-21057;
signed char var_13 = (signed char)34;
signed char var_14 = (signed char)42;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 1924830723;
unsigned short var_20 = (unsigned short)60343;
unsigned long long int var_21 = 743882980525664366ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
