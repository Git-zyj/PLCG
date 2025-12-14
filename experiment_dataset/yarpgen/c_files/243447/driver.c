#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9504848208063398896ULL;
unsigned long long int var_10 = 7155641480620857766ULL;
int zero = 0;
short var_11 = (short)4931;
unsigned long long int var_12 = 13717785762208867372ULL;
unsigned char var_13 = (unsigned char)204;
unsigned long long int var_14 = 12574103880806664832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
