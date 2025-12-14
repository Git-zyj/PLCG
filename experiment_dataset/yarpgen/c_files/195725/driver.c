#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2671970904U;
signed char var_3 = (signed char)-86;
unsigned short var_5 = (unsigned short)26517;
int var_6 = -1532197537;
int var_9 = -731563316;
short var_10 = (short)-27213;
signed char var_12 = (signed char)77;
int zero = 0;
unsigned long long int var_14 = 1167801976348219397ULL;
unsigned long long int var_15 = 4238973143877823044ULL;
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
