#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1567394675846973247LL;
long long int var_1 = 2525449424435664684LL;
signed char var_4 = (signed char)119;
unsigned short var_8 = (unsigned short)55081;
unsigned int var_9 = 221486892U;
long long int var_10 = 2477770415415413000LL;
unsigned int var_14 = 2848616515U;
signed char var_16 = (signed char)25;
long long int var_17 = -3389202339355137149LL;
int zero = 0;
signed char var_18 = (signed char)89;
int var_19 = 2048032663;
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
