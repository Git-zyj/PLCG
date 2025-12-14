#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16095;
unsigned long long int var_6 = 12606987960361733452ULL;
unsigned int var_7 = 86798999U;
unsigned long long int var_9 = 12315549308314644160ULL;
unsigned short var_13 = (unsigned short)47364;
int zero = 0;
short var_14 = (short)7377;
int var_15 = 2399662;
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
