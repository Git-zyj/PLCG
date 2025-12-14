#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
unsigned short var_10 = (unsigned short)63180;
int zero = 0;
unsigned long long int var_12 = 6033764311918646717ULL;
unsigned long long int var_13 = 18445497307308000003ULL;
unsigned short var_14 = (unsigned short)57188;
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
