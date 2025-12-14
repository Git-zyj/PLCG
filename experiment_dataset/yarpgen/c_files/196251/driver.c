#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3723;
unsigned int var_1 = 3604232319U;
unsigned short var_6 = (unsigned short)59822;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)1;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6000679613457327668LL;
unsigned char var_12 = (unsigned char)31;
unsigned long long int var_13 = 5033792105659097374ULL;
short var_15 = (short)-13093;
unsigned char var_16 = (unsigned char)126;
unsigned long long int var_17 = 581840541565011326ULL;
int zero = 0;
unsigned long long int var_18 = 11718782558934899480ULL;
unsigned char var_19 = (unsigned char)118;
long long int var_20 = -6744538428046404420LL;
unsigned short var_21 = (unsigned short)65523;
long long int var_22 = -2503631386990452832LL;
unsigned short var_23 = (unsigned short)58325;
long long int var_24 = -2971213380058426205LL;
unsigned char var_25 = (unsigned char)26;
unsigned char var_26 = (unsigned char)105;
long long int arr_0 [17] ;
unsigned short arr_2 [17] ;
long long int arr_3 [12] [12] ;
int arr_4 [12] ;
long long int arr_5 [12] ;
unsigned char arr_7 [12] [12] ;
_Bool arr_8 [12] ;
_Bool arr_9 [12] [12] [12] ;
_Bool arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -7720157501856571578LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)2377;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 4125398361818836440LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1809879188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 7854116208669160776LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
