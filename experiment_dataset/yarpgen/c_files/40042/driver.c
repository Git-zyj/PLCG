#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29189;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)13426;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 8597666673009793900ULL;
unsigned int var_16 = 2019086324U;
int zero = 0;
unsigned int var_18 = 902491160U;
signed char var_19 = (signed char)-36;
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
