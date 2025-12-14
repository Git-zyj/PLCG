#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16894434551154936170ULL;
unsigned int var_5 = 71653495U;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_18 = (short)-10489;
int var_19 = -1685856186;
unsigned short var_20 = (unsigned short)50709;
unsigned long long int var_21 = 9866932701763761019ULL;
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
