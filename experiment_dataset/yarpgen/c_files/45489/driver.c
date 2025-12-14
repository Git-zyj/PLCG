#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 3755000918535227744LL;
unsigned char var_5 = (unsigned char)50;
unsigned int var_7 = 3069507318U;
unsigned long long int var_8 = 8141538312476341312ULL;
unsigned char var_12 = (unsigned char)88;
unsigned char var_14 = (unsigned char)68;
int zero = 0;
unsigned int var_15 = 561838326U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5616659527549400238LL;
short var_19 = (short)-29839;
long long int var_20 = 8589416271019634658LL;
unsigned int var_21 = 303492118U;
int var_22 = -209622575;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)27;
unsigned short var_25 = (unsigned short)25179;
unsigned char arr_0 [13] ;
long long int arr_3 [13] [13] ;
long long int arr_4 [13] [13] ;
unsigned long long int arr_5 [13] [13] [13] ;
int arr_7 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 8551114920834555370LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 7233462717339192565LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 12029168579528518825ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -158716655;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
