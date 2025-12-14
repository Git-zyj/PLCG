#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1896294968;
unsigned long long int var_1 = 5032139093122580797ULL;
signed char var_4 = (signed char)42;
signed char var_6 = (signed char)15;
short var_7 = (short)-29842;
_Bool var_8 = (_Bool)1;
short var_9 = (short)26585;
int zero = 0;
long long int var_10 = 5340098522531356185LL;
unsigned long long int var_11 = 3233478772986448317ULL;
unsigned int var_12 = 1209311163U;
signed char var_13 = (signed char)-36;
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
