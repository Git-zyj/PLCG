#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1735044415691557316LL;
_Bool var_6 = (_Bool)1;
int var_10 = -294127295;
unsigned long long int var_14 = 2470222710489759368ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)34437;
int var_20 = -394631250;
signed char var_21 = (signed char)-24;
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
