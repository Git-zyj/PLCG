#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18218501216855483226ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-30065;
long long int var_8 = -2665926284971212313LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)29341;
unsigned long long int var_12 = 6568169331170821210ULL;
long long int var_13 = 5042324972673490463LL;
signed char var_14 = (signed char)65;
unsigned long long int var_16 = 9117973239442722140ULL;
unsigned short var_19 = (unsigned short)16735;
int zero = 0;
unsigned short var_20 = (unsigned short)42324;
unsigned char var_21 = (unsigned char)164;
short var_22 = (short)-6546;
unsigned char var_23 = (unsigned char)81;
unsigned char var_24 = (unsigned char)28;
unsigned int var_25 = 2149937692U;
long long int var_26 = -4980032784052678154LL;
unsigned char var_27 = (unsigned char)89;
unsigned short var_28 = (unsigned short)11917;
_Bool arr_0 [17] ;
unsigned char arr_1 [17] ;
unsigned int arr_2 [17] [17] [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
unsigned char arr_5 [17] [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
unsigned short arr_4 [17] ;
unsigned long long int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 644942403U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17765223373318478027ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 835773126U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37654 : (unsigned short)53761;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 15470313385867542251ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
