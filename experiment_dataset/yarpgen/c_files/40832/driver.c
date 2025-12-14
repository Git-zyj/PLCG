#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
short var_4 = (short)13440;
signed char var_6 = (signed char)-114;
unsigned int var_7 = 21984254U;
signed char var_8 = (signed char)-25;
int zero = 0;
int var_11 = -868242841;
unsigned long long int var_12 = 12738853218004597236ULL;
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
