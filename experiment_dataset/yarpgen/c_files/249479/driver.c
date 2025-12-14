#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -214946470;
int var_6 = -2064681792;
long long int var_9 = 5380003564041750906LL;
long long int var_12 = -5156959649271339849LL;
int zero = 0;
unsigned int var_18 = 1386241279U;
signed char var_19 = (signed char)91;
unsigned long long int var_20 = 16181598079548687005ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
