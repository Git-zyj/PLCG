#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)5;
long long int var_6 = 5184735650979858190LL;
long long int var_9 = 854022176052921186LL;
int zero = 0;
unsigned long long int var_11 = 8082981248885600631ULL;
unsigned int var_12 = 1151196233U;
int var_13 = 2088204023;
unsigned long long int var_14 = 868207540912416087ULL;
unsigned long long int var_15 = 2835215603407822431ULL;
short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)2646;
}

void checksum() {
    hash(&seed, var_11);
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
