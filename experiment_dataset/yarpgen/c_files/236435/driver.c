#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned short var_2 = (unsigned short)34109;
signed char var_9 = (signed char)4;
int zero = 0;
unsigned long long int var_10 = 2417179236077846756ULL;
long long int var_11 = -3832873148659929462LL;
long long int var_12 = -426943427096371352LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
