#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 691555703493902456ULL;
unsigned char var_1 = (unsigned char)213;
unsigned char var_2 = (unsigned char)95;
unsigned long long int var_6 = 1622346062883460213ULL;
int var_10 = -917841935;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -220448407;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
