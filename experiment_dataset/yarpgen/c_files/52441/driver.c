#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)8;
long long int var_8 = -323971363597840467LL;
signed char var_9 = (signed char)45;
unsigned long long int var_14 = 8030100880935410810ULL;
unsigned char var_15 = (unsigned char)7;
int zero = 0;
signed char var_17 = (signed char)-108;
signed char var_18 = (signed char)-80;
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
