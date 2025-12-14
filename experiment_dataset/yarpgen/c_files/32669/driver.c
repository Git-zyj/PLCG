#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)196;
signed char var_5 = (signed char)112;
short var_6 = (short)22188;
unsigned long long int var_8 = 3469300752903076890ULL;
short var_9 = (short)1165;
int zero = 0;
unsigned char var_14 = (unsigned char)118;
long long int var_15 = 3913988843375618245LL;
void init() {
}

void checksum() {
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
