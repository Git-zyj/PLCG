#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 917169760508822478LL;
unsigned int var_9 = 1184817710U;
signed char var_10 = (signed char)29;
unsigned long long int var_14 = 2706065737031295953ULL;
int zero = 0;
long long int var_19 = -581668152935959731LL;
signed char var_20 = (signed char)-28;
signed char var_21 = (signed char)27;
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
