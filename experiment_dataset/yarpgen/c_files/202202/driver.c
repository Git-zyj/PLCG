#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11254074944736470929ULL;
unsigned char var_5 = (unsigned char)148;
signed char var_6 = (signed char)-105;
int var_8 = 474441046;
short var_10 = (short)-24958;
long long int var_15 = -3173172827739344771LL;
int zero = 0;
unsigned char var_16 = (unsigned char)63;
signed char var_17 = (signed char)-52;
int var_18 = -219281010;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
