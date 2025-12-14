#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1887873493U;
unsigned long long int var_6 = 9155518078758250684ULL;
unsigned long long int var_9 = 15702569020276804676ULL;
unsigned short var_12 = (unsigned short)8111;
int zero = 0;
int var_14 = 1977020965;
signed char var_15 = (signed char)10;
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
