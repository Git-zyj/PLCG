#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1034316539U;
unsigned long long int var_5 = 8681272026996375390ULL;
long long int var_6 = -6624997380383978168LL;
signed char var_7 = (signed char)-25;
int zero = 0;
unsigned long long int var_20 = 8791828930418962051ULL;
long long int var_21 = -9207641849305421786LL;
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
