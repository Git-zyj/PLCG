#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned long long int var_2 = 5066445580998072943ULL;
unsigned short var_9 = (unsigned short)28434;
long long int var_11 = -1638215787968793816LL;
int zero = 0;
int var_14 = 1136915112;
unsigned long long int var_15 = 11110374296869580286ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
