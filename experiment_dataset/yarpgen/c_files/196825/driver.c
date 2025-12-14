#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27413;
unsigned long long int var_4 = 10161522954230876986ULL;
unsigned int var_6 = 3752178642U;
signed char var_11 = (signed char)113;
unsigned long long int var_12 = 8089666272117829836ULL;
long long int var_16 = -8744246490017970721LL;
unsigned long long int var_18 = 847922560780516459ULL;
int zero = 0;
short var_19 = (short)-22976;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4009731439U;
int var_22 = -1987447699;
void init() {
}

void checksum() {
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
