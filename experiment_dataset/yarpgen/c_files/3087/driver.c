#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1103750288;
unsigned short var_2 = (unsigned short)35679;
signed char var_4 = (signed char)40;
short var_5 = (short)29042;
unsigned int var_7 = 3441838790U;
long long int var_8 = 225940485922621481LL;
long long int var_9 = 8578272274356498820LL;
int zero = 0;
signed char var_10 = (signed char)-33;
unsigned short var_11 = (unsigned short)37877;
unsigned short var_12 = (unsigned short)50410;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
