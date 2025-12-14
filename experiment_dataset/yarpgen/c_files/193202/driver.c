#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
unsigned char var_9 = (unsigned char)126;
_Bool var_10 = (_Bool)0;
long long int var_15 = -5276401520265142664LL;
int zero = 0;
unsigned long long int var_18 = 17361215760632940539ULL;
signed char var_19 = (signed char)74;
long long int var_20 = 8316268750675731146LL;
unsigned char var_21 = (unsigned char)213;
long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -5675176520559786593LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
