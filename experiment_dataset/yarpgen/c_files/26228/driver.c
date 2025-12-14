#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27482;
unsigned long long int var_5 = 3118064024889943196ULL;
unsigned long long int var_9 = 10251222958667507011ULL;
short var_10 = (short)-31099;
short var_11 = (short)-9012;
unsigned long long int var_12 = 13076638635005982705ULL;
int zero = 0;
unsigned long long int var_13 = 9518156544593815954ULL;
short var_14 = (short)32729;
void init() {
}

void checksum() {
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
