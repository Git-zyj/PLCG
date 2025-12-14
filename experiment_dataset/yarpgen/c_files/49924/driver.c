#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17366362847098835111ULL;
signed char var_9 = (signed char)119;
unsigned long long int var_12 = 14686905145852745738ULL;
int zero = 0;
signed char var_20 = (signed char)80;
unsigned int var_21 = 263832328U;
unsigned long long int var_22 = 13167199547052291280ULL;
long long int var_23 = 5575234541354539256LL;
unsigned long long int var_24 = 6858482016972004540ULL;
unsigned long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4384753138693485177ULL : 323228127879631976ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
