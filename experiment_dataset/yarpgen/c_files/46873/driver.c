#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8430877023434911776ULL;
unsigned char var_8 = (unsigned char)68;
long long int var_9 = -7575952518466363603LL;
signed char var_10 = (signed char)96;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)0;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
long long int var_19 = 7697750518903003672LL;
signed char var_20 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
