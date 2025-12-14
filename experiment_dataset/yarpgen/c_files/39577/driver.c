#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 794942450U;
unsigned int var_2 = 1924931645U;
unsigned short var_3 = (unsigned short)54631;
unsigned int var_4 = 4077313135U;
_Bool var_6 = (_Bool)1;
int var_7 = 195464248;
int var_9 = -1528255217;
long long int var_10 = -3122820260058001466LL;
unsigned long long int var_12 = 2531861402574940539ULL;
int zero = 0;
int var_13 = -235507066;
unsigned short var_14 = (unsigned short)64779;
unsigned int var_15 = 2277647499U;
unsigned int var_16 = 788424120U;
signed char var_17 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
