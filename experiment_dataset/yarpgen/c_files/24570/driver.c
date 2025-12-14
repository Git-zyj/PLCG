#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned int var_1 = 3323145782U;
unsigned int var_2 = 568778478U;
signed char var_3 = (signed char)99;
signed char var_4 = (signed char)94;
signed char var_5 = (signed char)-98;
long long int var_6 = 8392703474469592022LL;
unsigned int var_8 = 468629601U;
int var_9 = 1901865023;
long long int var_10 = -2882955421130555655LL;
long long int var_12 = 1728598768049824552LL;
int zero = 0;
unsigned long long int var_13 = 7750958534322408822ULL;
unsigned int var_14 = 2858389863U;
short var_15 = (short)25055;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
