#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 231797006899859215LL;
unsigned long long int var_1 = 8835943263635718796ULL;
signed char var_2 = (signed char)66;
_Bool var_4 = (_Bool)0;
long long int var_5 = 3122006079596821178LL;
unsigned int var_6 = 2081001703U;
long long int var_7 = -15910602776992905LL;
unsigned int var_10 = 1880280345U;
unsigned int var_11 = 3382257724U;
unsigned long long int var_13 = 2560625535886797992ULL;
long long int var_14 = -5732709643257867441LL;
unsigned int var_15 = 2591843701U;
int zero = 0;
unsigned char var_16 = (unsigned char)53;
unsigned int var_17 = 872958113U;
unsigned long long int var_18 = 12647012077723180926ULL;
unsigned int var_19 = 999731596U;
unsigned int var_20 = 290822542U;
long long int var_21 = 442624193000476259LL;
unsigned char var_22 = (unsigned char)214;
signed char var_23 = (signed char)(-127 - 1);
unsigned long long int var_24 = 5009279289448977369ULL;
unsigned int var_25 = 1957671591U;
long long int var_26 = 354985644373410420LL;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned int arr_4 [19] ;
unsigned int arr_5 [19] ;
unsigned long long int arr_6 [19] ;
long long int arr_9 [23] [23] ;
unsigned int arr_10 [23] ;
long long int arr_14 [12] [12] ;
unsigned int arr_3 [19] ;
short arr_7 [19] ;
unsigned long long int arr_8 [19] ;
_Bool arr_12 [23] ;
unsigned short arr_13 [23] ;
unsigned int arr_16 [12] ;
unsigned int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1647436132U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 5921288043768636061ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)52361;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3871495768U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 114224864U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 12880111356571062585ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -1128696714109743307LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 847960775U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = -6261320935643705601LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2771608415U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)-6288;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 17611462334215974367ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)65018;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 987076159U : 2291339959U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1987137107U : 2297792773U;
}

void checksum() {
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
