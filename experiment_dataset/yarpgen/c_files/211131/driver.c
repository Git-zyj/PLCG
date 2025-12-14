#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 807721068U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_12 = -1674384385;
unsigned int var_14 = 345417882U;
signed char var_15 = (signed char)-112;
unsigned int var_17 = 3036682890U;
int var_18 = 1215677458;
unsigned long long int var_19 = 2105271655601515992ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)6425;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 17463628958963598439ULL;
long long int var_24 = 8415250011274769476LL;
long long int var_25 = -3852138378903764051LL;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
long long int var_28 = -8374219174819775021LL;
unsigned long long int var_29 = 12703342145423829062ULL;
int var_30 = 1533787154;
long long int var_31 = 3650874662737542583LL;
signed char var_32 = (signed char)-19;
long long int var_33 = 9214171956907471103LL;
unsigned short var_34 = (unsigned short)17232;
long long int arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
long long int arr_3 [25] ;
signed char arr_8 [17] ;
int arr_9 [17] [17] [17] ;
unsigned char arr_13 [17] ;
_Bool arr_14 [17] ;
long long int arr_17 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -7325240690754482070LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 14750408775297669094ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -8104315885581867358LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -35140864;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1452236093583553119LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
