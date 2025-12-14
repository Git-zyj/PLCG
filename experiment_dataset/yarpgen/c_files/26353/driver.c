#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7147;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)147;
unsigned short var_6 = (unsigned short)38830;
unsigned int var_10 = 2103246398U;
_Bool var_11 = (_Bool)1;
long long int var_13 = -7729731531520506058LL;
int zero = 0;
signed char var_15 = (signed char)-102;
unsigned int var_16 = 3517127863U;
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
