#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
unsigned long long int var_4 = 16402552562094841011ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)17319;
int zero = 0;
unsigned long long int var_12 = 2526615679715401684ULL;
long long int var_13 = 7517869512680446147LL;
unsigned long long int var_14 = 1504792840721084010ULL;
void init() {
}

void checksum() {
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
