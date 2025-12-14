#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4487095700512386469LL;
unsigned int var_3 = 3646893612U;
unsigned short var_5 = (unsigned short)23580;
unsigned short var_7 = (unsigned short)21579;
signed char var_8 = (signed char)-102;
int zero = 0;
unsigned long long int var_10 = 9549802200638935051ULL;
short var_11 = (short)-23022;
unsigned long long int var_12 = 11504047729224581967ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
