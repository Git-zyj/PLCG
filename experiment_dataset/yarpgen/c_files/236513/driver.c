#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1996198245184633126LL;
unsigned int var_6 = 3363106390U;
unsigned long long int var_13 = 4233912738597043459ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)38907;
unsigned short var_19 = (unsigned short)39944;
void init() {
}

void checksum() {
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
