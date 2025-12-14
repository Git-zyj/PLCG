#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7398691487326473473LL;
long long int var_4 = -4263794508379561135LL;
_Bool var_8 = (_Bool)1;
signed char var_16 = (signed char)-1;
int zero = 0;
unsigned long long int var_17 = 16793944119733298720ULL;
unsigned char var_18 = (unsigned char)119;
unsigned long long int var_19 = 2435909030246621132ULL;
int var_20 = -1466931870;
long long int var_21 = -6646425400584762304LL;
int arr_2 [12] ;
int arr_4 [12] ;
int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1324564013;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1925772938;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1178848662 : 1874771924;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
