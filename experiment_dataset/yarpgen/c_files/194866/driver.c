#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3594827792856197569LL;
unsigned long long int var_8 = 5028634232131369758ULL;
unsigned int var_15 = 826204970U;
int zero = 0;
unsigned short var_19 = (unsigned short)2995;
unsigned long long int var_20 = 7362766765397666625ULL;
int var_21 = 835561332;
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
