#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1035167984U;
short var_5 = (short)-14895;
signed char var_9 = (signed char)-20;
unsigned int var_10 = 2746946630U;
unsigned short var_11 = (unsigned short)62293;
long long int var_13 = -1991975380238744959LL;
int var_17 = 2100564628;
int zero = 0;
int var_18 = 1472747446;
unsigned int var_19 = 1889391322U;
int var_20 = -558508443;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
