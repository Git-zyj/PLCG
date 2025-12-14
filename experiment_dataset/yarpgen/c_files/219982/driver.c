#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24318;
signed char var_2 = (signed char)102;
unsigned int var_6 = 3088671055U;
signed char var_7 = (signed char)-90;
unsigned long long int var_10 = 1580821437184974047ULL;
signed char var_13 = (signed char)-31;
unsigned long long int var_15 = 1771542653792653138ULL;
signed char var_16 = (signed char)116;
int zero = 0;
signed char var_19 = (signed char)58;
unsigned long long int var_20 = 13026797790171016560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
