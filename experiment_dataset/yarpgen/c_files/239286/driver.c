#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14195236551998875882ULL;
long long int var_9 = -6929664801469839984LL;
signed char var_10 = (signed char)58;
unsigned short var_16 = (unsigned short)27862;
int zero = 0;
unsigned long long int var_17 = 1402013741879091911ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-16993;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
