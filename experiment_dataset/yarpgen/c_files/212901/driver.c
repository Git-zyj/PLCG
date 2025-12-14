#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2140890237284083760LL;
unsigned long long int var_4 = 9269942539231210635ULL;
int zero = 0;
long long int var_12 = 710127023861204330LL;
long long int var_13 = 365390827693022528LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3387510743U;
short var_16 = (short)28620;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2286839115U;
unsigned long long int var_19 = 9762499144412895436ULL;
unsigned int arr_1 [17] ;
long long int arr_3 [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 166860778U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3171222878283600506LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)-112;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
