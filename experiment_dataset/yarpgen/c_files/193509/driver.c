#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5804011290954550448LL;
unsigned long long int var_2 = 6482760021023022468ULL;
long long int var_5 = -8477052179648567104LL;
int zero = 0;
short var_11 = (short)-17708;
unsigned long long int var_12 = 7293191544719174739ULL;
int var_13 = -1020057935;
unsigned short var_14 = (unsigned short)34547;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
