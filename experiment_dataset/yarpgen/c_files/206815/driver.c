#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3122167518600598313LL;
unsigned long long int var_2 = 2604697268835555163ULL;
long long int var_3 = -4049125339362723816LL;
long long int var_5 = -5271654537984428346LL;
unsigned short var_7 = (unsigned short)24511;
int var_8 = -1378677908;
int zero = 0;
int var_16 = -1960136397;
signed char var_17 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
