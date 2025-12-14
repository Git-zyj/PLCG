#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -906766561841363146LL;
long long int var_9 = 4365116004689848204LL;
unsigned char var_13 = (unsigned char)48;
int zero = 0;
unsigned long long int var_16 = 15215564968178687217ULL;
signed char var_17 = (signed char)-111;
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
