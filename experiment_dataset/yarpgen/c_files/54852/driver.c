#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15454;
unsigned long long int var_5 = 4758155232373499483ULL;
long long int var_6 = -5842475425185610566LL;
long long int var_10 = 4529932575354704760LL;
unsigned int var_15 = 1431029571U;
int zero = 0;
unsigned int var_19 = 2847981515U;
unsigned short var_20 = (unsigned short)10967;
void init() {
}

void checksum() {
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
