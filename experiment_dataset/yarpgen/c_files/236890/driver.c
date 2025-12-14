#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
unsigned long long int var_2 = 3831167163318624228ULL;
unsigned long long int var_5 = 9912751560999403560ULL;
unsigned int var_7 = 340440923U;
unsigned short var_9 = (unsigned short)16121;
int zero = 0;
unsigned int var_13 = 3328176736U;
unsigned long long int var_14 = 3509530385230183274ULL;
unsigned long long int var_15 = 5092144212831369286ULL;
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
