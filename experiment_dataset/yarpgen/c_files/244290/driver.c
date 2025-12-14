#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 14370691014549464670ULL;
short var_18 = (short)2844;
long long int var_19 = 7241361367705770404LL;
int zero = 0;
unsigned int var_20 = 2318601903U;
long long int var_21 = 1609673014361920691LL;
int var_22 = 341036810;
void init() {
}

void checksum() {
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
