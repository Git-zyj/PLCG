#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5819514778475350059ULL;
unsigned long long int var_2 = 2636781091361376560ULL;
unsigned long long int var_5 = 9869396300624873258ULL;
long long int var_6 = -8218240757068652045LL;
long long int var_9 = -5281816706678952829LL;
int zero = 0;
short var_12 = (short)-9863;
unsigned long long int var_13 = 12942298579955339038ULL;
unsigned long long int var_14 = 841122566750901053ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
