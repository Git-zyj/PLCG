#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 583435729226675776LL;
unsigned long long int var_5 = 17219516934059328011ULL;
int var_11 = 104846510;
unsigned long long int var_12 = 7564445337019947288ULL;
int zero = 0;
short var_13 = (short)13027;
short var_14 = (short)26856;
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
