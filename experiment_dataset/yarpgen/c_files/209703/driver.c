#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1488192761817683735LL;
unsigned short var_2 = (unsigned short)54131;
int var_4 = -141476558;
unsigned long long int var_6 = 13177871918240553930ULL;
long long int var_9 = -5960176079245475608LL;
int zero = 0;
unsigned long long int var_13 = 14876576165802347913ULL;
unsigned int var_14 = 2687704176U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
