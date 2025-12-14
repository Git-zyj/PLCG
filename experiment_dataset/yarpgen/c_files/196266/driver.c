#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8858910769030481828ULL;
int var_3 = -335919762;
long long int var_4 = 6678053293797916619LL;
unsigned long long int var_8 = 4061730449858033156ULL;
int var_11 = 1448573642;
signed char var_15 = (signed char)-63;
int zero = 0;
signed char var_18 = (signed char)28;
unsigned long long int var_19 = 807649776224292752ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
