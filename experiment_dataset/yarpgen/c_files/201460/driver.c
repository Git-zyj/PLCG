#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3870732817760850750ULL;
unsigned short var_2 = (unsigned short)38293;
unsigned int var_5 = 1869786659U;
unsigned int var_7 = 2650806689U;
int zero = 0;
long long int var_10 = 4159626646149385742LL;
unsigned long long int var_11 = 11555411045486709318ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
