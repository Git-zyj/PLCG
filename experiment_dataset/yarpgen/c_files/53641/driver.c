#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16417;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)25596;
signed char var_3 = (signed char)-31;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-3314;
short var_6 = (short)-21181;
signed char var_7 = (signed char)-75;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7262325101563539226LL;
signed char var_10 = (signed char)-36;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 3072309316852689153ULL;
unsigned long long int var_13 = 10152309139691309962ULL;
short var_14 = (short)12829;
int var_15 = 42267539;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
