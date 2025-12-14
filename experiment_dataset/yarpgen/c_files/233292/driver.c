#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 779368288594964979ULL;
unsigned char var_4 = (unsigned char)174;
unsigned long long int var_9 = 17120185717994166740ULL;
unsigned int var_15 = 2846836757U;
unsigned short var_17 = (unsigned short)4525;
int zero = 0;
unsigned long long int var_20 = 11954553226178621072ULL;
long long int var_21 = -1683534056056868713LL;
long long int var_22 = 1098556510617846605LL;
void init() {
}

void checksum() {
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
