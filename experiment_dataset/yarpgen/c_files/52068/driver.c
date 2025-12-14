#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 578448570U;
unsigned long long int var_4 = 14457671651594511721ULL;
unsigned long long int var_5 = 8921869197354598135ULL;
int var_10 = 1691246876;
signed char var_16 = (signed char)123;
signed char var_18 = (signed char)28;
int zero = 0;
unsigned char var_20 = (unsigned char)109;
unsigned long long int var_21 = 11345497773388078404ULL;
long long int var_22 = 8608485661405868030LL;
int var_23 = -928272111;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
