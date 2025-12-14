#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 755700980;
unsigned int var_2 = 977646048U;
unsigned int var_3 = 2027724808U;
unsigned int var_4 = 2113955034U;
unsigned short var_5 = (unsigned short)6828;
signed char var_6 = (signed char)81;
_Bool var_7 = (_Bool)0;
long long int var_11 = -1953592096420524214LL;
unsigned long long int var_12 = 2342656065423899922ULL;
unsigned long long int var_15 = 13194210285169852986ULL;
int var_16 = 1598763060;
int zero = 0;
signed char var_18 = (signed char)-21;
unsigned int var_19 = 3013098531U;
unsigned short var_20 = (unsigned short)14869;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
