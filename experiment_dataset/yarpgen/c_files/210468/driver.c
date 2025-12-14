#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -215178048516849749LL;
unsigned char var_1 = (unsigned char)234;
unsigned long long int var_4 = 13912571295097823967ULL;
unsigned long long int var_7 = 17678249738504305910ULL;
unsigned long long int var_8 = 5216354362029110456ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)71;
unsigned long long int var_14 = 18329052916862072537ULL;
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
