#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2387203567588335567LL;
long long int var_9 = 6808375355986427596LL;
short var_15 = (short)25813;
int zero = 0;
int var_18 = 1985999367;
unsigned char var_19 = (unsigned char)10;
long long int var_20 = 7553010614843728407LL;
long long int var_21 = 7028173419292999057LL;
signed char var_22 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
