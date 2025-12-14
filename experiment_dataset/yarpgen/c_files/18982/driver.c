#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3773212530U;
long long int var_2 = -4538553443907541284LL;
signed char var_4 = (signed char)-74;
unsigned long long int var_8 = 3468251977462249151ULL;
long long int var_9 = 5326689478030618134LL;
unsigned int var_11 = 369736997U;
int zero = 0;
unsigned long long int var_14 = 1384765172601711778ULL;
unsigned long long int var_15 = 1739372879022227254ULL;
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
