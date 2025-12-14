#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8881331243388582516LL;
unsigned int var_1 = 2374677210U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-45;
short var_5 = (short)-23048;
unsigned int var_6 = 777210076U;
unsigned int var_7 = 7150047U;
unsigned int var_8 = 4054874660U;
signed char var_9 = (signed char)89;
unsigned char var_10 = (unsigned char)173;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)17981;
unsigned long long int var_13 = 4360778133971828745ULL;
unsigned long long int var_14 = 9994046526707978235ULL;
unsigned int var_15 = 2321150232U;
unsigned short arr_2 [15] ;
_Bool arr_3 [15] ;
unsigned long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)48676;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 3804512817016034720ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
