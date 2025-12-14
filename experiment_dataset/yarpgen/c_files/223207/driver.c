#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -73789519470170406LL;
unsigned long long int var_13 = 13733395595706639708ULL;
signed char var_14 = (signed char)89;
long long int var_17 = 1273398129891087648LL;
int zero = 0;
unsigned int var_18 = 892353704U;
unsigned long long int var_19 = 10567891697894804203ULL;
signed char var_20 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
