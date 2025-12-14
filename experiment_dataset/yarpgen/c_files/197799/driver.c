#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 12235500003785613952ULL;
signed char var_14 = (signed char)63;
unsigned long long int var_15 = 11041150162813723341ULL;
unsigned long long int var_18 = 7680690342954341167ULL;
int zero = 0;
long long int var_19 = -6687216034024508866LL;
int var_20 = 1549045225;
long long int var_21 = 23313117408426876LL;
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
