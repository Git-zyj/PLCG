#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1926106205;
long long int var_1 = 7899869564205391284LL;
int var_2 = -226283973;
short var_3 = (short)-20953;
short var_4 = (short)-1676;
short var_7 = (short)-24929;
long long int var_11 = -5778643575732734701LL;
int zero = 0;
unsigned short var_12 = (unsigned short)1624;
unsigned short var_13 = (unsigned short)61147;
short var_14 = (short)1726;
void init() {
}

void checksum() {
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
