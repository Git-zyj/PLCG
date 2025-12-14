#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
long long int var_6 = 8933474405022447258LL;
long long int var_11 = -4135765611833240168LL;
long long int var_13 = -1367928920455847323LL;
unsigned long long int var_14 = 12850472547739888609ULL;
signed char var_15 = (signed char)80;
signed char var_16 = (signed char)-27;
int zero = 0;
signed char var_20 = (signed char)43;
signed char var_21 = (signed char)-27;
unsigned short var_22 = (unsigned short)52200;
long long int var_23 = -7927180200379914409LL;
unsigned long long int var_24 = 14559862047169835215ULL;
unsigned long long int var_25 = 91034752712430911ULL;
long long int var_26 = -2350768997840021996LL;
unsigned int var_27 = 653988389U;
unsigned long long int var_28 = 16145491351095945020ULL;
long long int var_29 = -1754977936691412739LL;
long long int var_30 = -3738209049622143103LL;
unsigned long long int var_31 = 11138640088809333005ULL;
long long int var_32 = 4570936750644651186LL;
signed char var_33 = (signed char)45;
signed char var_34 = (signed char)-111;
unsigned short var_35 = (unsigned short)24079;
signed char var_36 = (signed char)124;
signed char var_37 = (signed char)62;
signed char arr_0 [16] ;
unsigned int arr_2 [16] [16] ;
_Bool arr_3 [16] ;
signed char arr_4 [16] [16] ;
long long int arr_5 [16] ;
long long int arr_12 [16] ;
signed char arr_18 [16] [16] [16] [16] [16] ;
unsigned int arr_19 [16] [16] [16] [16] [16] [16] ;
signed char arr_22 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_6 [16] [16] ;
long long int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1795489803U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -20832780458405273LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -4898246275344808141LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3093719534U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)18464;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = -3806002132206307476LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
