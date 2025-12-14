#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2840665922801998170ULL;
unsigned int var_8 = 916433063U;
unsigned short var_11 = (unsigned short)4746;
int zero = 0;
signed char var_18 = (signed char)-50;
unsigned long long int var_19 = 2525416909801253151ULL;
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
