#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)59568;
unsigned long long int var_14 = 10908950645147202988ULL;
unsigned long long int var_16 = 3363837828599273726ULL;
int var_18 = 172169211;
int zero = 0;
unsigned short var_19 = (unsigned short)54467;
long long int var_20 = 714625973369497669LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
