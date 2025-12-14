#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-93;
short var_7 = (short)31429;
long long int var_9 = 2311135226328465411LL;
unsigned int var_16 = 3099455606U;
int zero = 0;
short var_19 = (short)-17519;
unsigned short var_20 = (unsigned short)9543;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
