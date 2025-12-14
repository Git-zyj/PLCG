#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
signed char var_2 = (signed char)-119;
unsigned char var_4 = (unsigned char)110;
short var_5 = (short)9899;
unsigned short var_9 = (unsigned short)27829;
int zero = 0;
unsigned long long int var_14 = 429826079170468551ULL;
signed char var_15 = (signed char)1;
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
