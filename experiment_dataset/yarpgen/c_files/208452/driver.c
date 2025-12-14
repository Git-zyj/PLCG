#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13256286867219965685ULL;
unsigned long long int var_2 = 1785861906921308573ULL;
unsigned short var_6 = (unsigned short)44505;
short var_12 = (short)-11046;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)19418;
unsigned long long int var_19 = 2124387952393975588ULL;
long long int var_20 = -5666977252293273218LL;
long long int var_21 = -6441353990483362703LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
