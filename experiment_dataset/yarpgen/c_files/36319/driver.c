#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3837873007434208986LL;
int var_4 = -243897399;
signed char var_5 = (signed char)31;
long long int var_10 = -5852289424987103221LL;
int zero = 0;
unsigned long long int var_11 = 4659394337429877064ULL;
long long int var_12 = -4137039767560553332LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
