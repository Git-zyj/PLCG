#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
unsigned long long int var_3 = 5004403393760172371ULL;
short var_4 = (short)26109;
long long int var_9 = -8827118460433862842LL;
int zero = 0;
short var_10 = (short)18609;
unsigned long long int var_11 = 6705939230342845723ULL;
unsigned long long int var_12 = 7852090078400365839ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
