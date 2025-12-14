#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -527175513140954825LL;
unsigned long long int var_9 = 15782316888305788674ULL;
int zero = 0;
long long int var_19 = -7347360493117604033LL;
unsigned long long int var_20 = 16332260727917157925ULL;
int var_21 = -1117985694;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
