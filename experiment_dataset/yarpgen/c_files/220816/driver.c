#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39865;
long long int var_4 = -7322379241659133551LL;
int var_5 = 1393638616;
unsigned char var_13 = (unsigned char)84;
signed char var_14 = (signed char)66;
short var_15 = (short)31725;
unsigned char var_16 = (unsigned char)90;
short var_17 = (short)15569;
unsigned long long int var_18 = 17083628445328213891ULL;
int zero = 0;
short var_20 = (short)-25908;
int var_21 = -843289653;
long long int var_22 = 1829183024275765669LL;
unsigned long long int var_23 = 7234380189605227458ULL;
void init() {
}

void checksum() {
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
