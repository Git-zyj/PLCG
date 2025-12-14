#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2402954114716660157LL;
long long int var_9 = 341500597918213599LL;
long long int var_10 = 6883194388774588793LL;
signed char var_11 = (signed char)-103;
int zero = 0;
signed char var_17 = (signed char)100;
long long int var_18 = -4844824378864954404LL;
void init() {
}

void checksum() {
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
