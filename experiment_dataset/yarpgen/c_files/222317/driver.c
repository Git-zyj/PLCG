#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
long long int var_5 = 1541609792339901665LL;
long long int var_7 = 4521902110356022381LL;
signed char var_8 = (signed char)-49;
short var_9 = (short)-32658;
signed char var_12 = (signed char)61;
int zero = 0;
short var_13 = (short)14878;
unsigned short var_14 = (unsigned short)708;
unsigned char var_15 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
