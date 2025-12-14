#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3445585664942544309ULL;
unsigned long long int var_6 = 3155919654332975653ULL;
unsigned long long int var_9 = 8320485312950287565ULL;
unsigned long long int var_14 = 16633097736093160891ULL;
int zero = 0;
unsigned long long int var_15 = 10063901720231127776ULL;
unsigned long long int var_16 = 15579027066021142302ULL;
unsigned long long int var_17 = 17000865656540057734ULL;
unsigned long long int var_18 = 13414968306296349074ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
