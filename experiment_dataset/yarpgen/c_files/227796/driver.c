#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6356824158546231233LL;
int var_16 = -1955224479;
unsigned short var_17 = (unsigned short)59167;
int zero = 0;
short var_18 = (short)28417;
unsigned long long int var_19 = 1242136375214513729ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
