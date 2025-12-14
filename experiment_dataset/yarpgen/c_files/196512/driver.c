#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5491571008478343829LL;
_Bool var_1 = (_Bool)1;
int var_3 = -1384568832;
int var_4 = 916011505;
int var_6 = 917705990;
int var_8 = -19848933;
long long int var_10 = -6814011766450323034LL;
long long int var_11 = 7387739830019899942LL;
int zero = 0;
long long int var_12 = 1913564776880929265LL;
long long int var_13 = 2718374381187618544LL;
long long int var_14 = -7209422135267485565LL;
long long int var_15 = 5174540219932724668LL;
void init() {
}

void checksum() {
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
