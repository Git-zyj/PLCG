#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned long long int var_1 = 1408267475904879259ULL;
_Bool var_3 = (_Bool)1;
int var_4 = 777438836;
long long int var_5 = 6497571108672704173LL;
unsigned int var_6 = 2646508602U;
long long int var_7 = 4657579573520203702LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6426186581255207063LL;
int var_11 = 298572126;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)241;
unsigned int var_14 = 3176375565U;
unsigned int var_15 = 1364804290U;
long long int var_17 = 6452442421150721570LL;
int zero = 0;
unsigned int var_18 = 1851173052U;
unsigned short var_19 = (unsigned short)57419;
signed char var_20 = (signed char)66;
long long int var_21 = 1850840516320106742LL;
long long int var_22 = 442628353215948518LL;
unsigned int var_23 = 2638232940U;
unsigned int var_24 = 3527882356U;
unsigned int var_25 = 1916195201U;
unsigned long long int var_26 = 12022197204074636418ULL;
unsigned int var_27 = 1929483428U;
signed char arr_25 [13] [13] [13] [13] [13] ;
unsigned long long int arr_26 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 8981933939624299154ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
