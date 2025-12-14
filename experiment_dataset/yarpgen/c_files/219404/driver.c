#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7265558043598520452LL;
unsigned int var_8 = 1999960792U;
unsigned int var_9 = 1102792017U;
unsigned short var_16 = (unsigned short)53447;
int zero = 0;
unsigned int var_17 = 2429070470U;
unsigned short var_18 = (unsigned short)11396;
long long int var_19 = -4451522310770898632LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
