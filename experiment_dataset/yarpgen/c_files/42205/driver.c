#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned long long int var_3 = 3312598555081175394ULL;
unsigned int var_5 = 3162027069U;
unsigned long long int var_9 = 7917254124784227560ULL;
unsigned short var_13 = (unsigned short)37585;
int zero = 0;
signed char var_14 = (signed char)-10;
long long int var_15 = -5269927829880198244LL;
long long int var_16 = 6440321722642214383LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
