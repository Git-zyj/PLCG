#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1427609337328304123LL;
int var_9 = -622878387;
int var_13 = -1574450477;
unsigned long long int var_14 = 16057593304665852569ULL;
unsigned long long int var_15 = 11201780442829113949ULL;
int zero = 0;
long long int var_16 = 4418104417796552960LL;
long long int var_17 = -3312802744848941288LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
