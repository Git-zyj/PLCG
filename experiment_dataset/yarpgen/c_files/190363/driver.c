#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12605357655895702846ULL;
signed char var_5 = (signed char)-74;
signed char var_6 = (signed char)-76;
int zero = 0;
unsigned short var_11 = (unsigned short)44561;
signed char var_12 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
