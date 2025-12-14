#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 717615689U;
unsigned short var_13 = (unsigned short)45835;
int var_14 = 148476806;
int zero = 0;
unsigned long long int var_20 = 240435718307813013ULL;
unsigned long long int var_21 = 13098299642412118959ULL;
void init() {
}

void checksum() {
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
