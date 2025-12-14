#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned int var_2 = 3828611583U;
unsigned short var_4 = (unsigned short)56066;
unsigned long long int var_5 = 9699978857163066883ULL;
int var_7 = 1984130454;
int zero = 0;
short var_10 = (short)14859;
int var_11 = 1471546262;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
