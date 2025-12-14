#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4581990762037304810LL;
signed char var_1 = (signed char)-45;
long long int var_3 = -8015361695155992789LL;
int zero = 0;
unsigned short var_15 = (unsigned short)16404;
signed char var_16 = (signed char)89;
short var_17 = (short)19587;
unsigned short var_18 = (unsigned short)57462;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
