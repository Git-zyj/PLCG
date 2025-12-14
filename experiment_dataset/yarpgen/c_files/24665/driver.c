#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2099980774;
unsigned int var_4 = 2994145574U;
unsigned long long int var_7 = 15555578056581395608ULL;
unsigned long long int var_9 = 4147942768060692550ULL;
short var_15 = (short)18775;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 5353730322485412081LL;
short var_21 = (short)-17404;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
