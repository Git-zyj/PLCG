#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18096;
short var_10 = (short)-20391;
unsigned int var_13 = 2434787113U;
unsigned short var_16 = (unsigned short)36021;
int zero = 0;
unsigned char var_18 = (unsigned char)217;
signed char var_19 = (signed char)-31;
long long int var_20 = 1895219435502511201LL;
unsigned int var_21 = 383375097U;
long long int var_22 = -5154939260957205191LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
