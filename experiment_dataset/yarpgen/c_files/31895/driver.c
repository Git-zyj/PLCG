#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6154989216238915115ULL;
int var_9 = -1747634265;
long long int var_10 = 4574525855840754598LL;
int zero = 0;
unsigned int var_20 = 1981252103U;
long long int var_21 = -2045703693143127799LL;
unsigned short var_22 = (unsigned short)62228;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
