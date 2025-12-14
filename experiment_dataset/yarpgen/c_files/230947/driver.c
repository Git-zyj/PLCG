#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4714;
signed char var_5 = (signed char)-16;
unsigned short var_7 = (unsigned short)34468;
unsigned long long int var_8 = 17208485083770223458ULL;
int zero = 0;
long long int var_17 = -6980297604359055010LL;
unsigned int var_18 = 3780639546U;
unsigned short var_19 = (unsigned short)414;
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
