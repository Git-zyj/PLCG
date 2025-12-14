#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52258;
unsigned char var_1 = (unsigned char)211;
long long int var_4 = 1466495634749902178LL;
_Bool var_5 = (_Bool)0;
int var_6 = -1189839292;
int var_10 = -2079121926;
int zero = 0;
long long int var_11 = -7495055994081691254LL;
unsigned short var_12 = (unsigned short)61881;
long long int var_13 = 2652683834667122340LL;
unsigned long long int var_14 = 16849280854178009056ULL;
long long int var_15 = -255810076457036848LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
