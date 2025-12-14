#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 12101312925246024612ULL;
signed char var_9 = (signed char)37;
unsigned long long int var_10 = 5516939075096963500ULL;
signed char var_11 = (signed char)115;
int zero = 0;
long long int var_19 = -6322177723992811092LL;
unsigned int var_20 = 2762586469U;
int var_21 = 196385800;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
