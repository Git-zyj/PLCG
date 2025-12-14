#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12898801786634017510ULL;
unsigned int var_5 = 3202136574U;
unsigned short var_9 = (unsigned short)37440;
unsigned int var_11 = 1676593800U;
unsigned int var_14 = 4198138431U;
int zero = 0;
unsigned long long int var_16 = 12860988067248801979ULL;
long long int var_17 = 8612030572827008243LL;
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
