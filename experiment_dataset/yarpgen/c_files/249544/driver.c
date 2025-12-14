#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56372;
unsigned long long int var_2 = 6138631250159485785ULL;
long long int var_4 = 5566552839579050809LL;
short var_6 = (short)-11084;
unsigned int var_7 = 788879915U;
unsigned char var_10 = (unsigned char)109;
signed char var_12 = (signed char)39;
int zero = 0;
unsigned char var_18 = (unsigned char)130;
unsigned int var_19 = 304036029U;
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
