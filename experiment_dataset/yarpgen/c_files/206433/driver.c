#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1976843819090439337LL;
unsigned int var_1 = 1906435276U;
signed char var_2 = (signed char)124;
long long int var_3 = 4646237717446389097LL;
unsigned char var_4 = (unsigned char)25;
long long int var_8 = 4942252895418891098LL;
unsigned int var_9 = 58528480U;
unsigned int var_10 = 2069981641U;
unsigned int var_12 = 4254566579U;
int zero = 0;
long long int var_13 = -2530698693679246095LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)146;
unsigned int var_16 = 181542841U;
_Bool arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
