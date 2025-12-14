#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5633771085158937759ULL;
unsigned int var_2 = 418084144U;
long long int var_3 = -5089285631539094863LL;
unsigned int var_4 = 3410698425U;
unsigned char var_8 = (unsigned char)120;
unsigned int var_9 = 3343586462U;
int var_11 = -1699887738;
int zero = 0;
short var_15 = (short)18586;
unsigned long long int var_16 = 13757320639565566750ULL;
void init() {
}

void checksum() {
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
