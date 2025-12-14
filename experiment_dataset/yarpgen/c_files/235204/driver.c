#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7501229503970150928LL;
long long int var_3 = -3111793840930564417LL;
long long int var_4 = 6000132393163414707LL;
signed char var_5 = (signed char)16;
long long int var_8 = -7734991537036357324LL;
int zero = 0;
unsigned long long int var_11 = 5714088479300944261ULL;
unsigned int var_12 = 742013128U;
long long int var_13 = -6080893806528782247LL;
unsigned int var_14 = 2298427173U;
unsigned int var_15 = 3450397716U;
long long int var_16 = 4655506672772382918LL;
short arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-9749;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
