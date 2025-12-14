#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 384879857U;
long long int var_5 = -908375480473774751LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 538115184336808758LL;
int zero = 0;
signed char var_11 = (signed char)119;
long long int var_12 = -8492463301304002190LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
