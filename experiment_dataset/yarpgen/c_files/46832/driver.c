#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3170404461725216242ULL;
unsigned long long int var_6 = 10725292840942020061ULL;
unsigned long long int var_8 = 1167852906464356898ULL;
int zero = 0;
unsigned long long int var_14 = 4204150187182514869ULL;
unsigned long long int var_15 = 2302726300836022001ULL;
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
