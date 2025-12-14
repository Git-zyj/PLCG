#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32279;
unsigned short var_4 = (unsigned short)26826;
unsigned int var_9 = 4062589384U;
int zero = 0;
long long int var_16 = 2083060681490519401LL;
unsigned long long int var_17 = 8743757426006251141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
