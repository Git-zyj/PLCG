#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5187800427176548763LL;
unsigned char var_6 = (unsigned char)97;
unsigned char var_9 = (unsigned char)70;
long long int var_10 = 2087204714421895067LL;
unsigned char var_11 = (unsigned char)96;
int zero = 0;
unsigned char var_12 = (unsigned char)7;
long long int var_13 = -2140826088699279633LL;
long long int var_14 = -1817958023311562849LL;
unsigned char var_15 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
