#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -807418555;
short var_9 = (short)7505;
int zero = 0;
long long int var_19 = -6537446607916257507LL;
short var_20 = (short)17595;
unsigned long long int var_21 = 8127005341502644575ULL;
unsigned short var_22 = (unsigned short)60758;
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
