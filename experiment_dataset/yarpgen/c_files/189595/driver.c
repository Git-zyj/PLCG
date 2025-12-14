#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1760642419179520647LL;
signed char var_2 = (signed char)25;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 10751849856714648568ULL;
unsigned long long int var_6 = 7695989242280820496ULL;
long long int var_7 = 6398423644552978910LL;
_Bool var_9 = (_Bool)1;
int var_10 = -1378888149;
unsigned int var_11 = 3807958638U;
int zero = 0;
int var_14 = -459581042;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)30516;
signed char var_17 = (signed char)89;
unsigned long long int arr_0 [13] ;
signed char arr_1 [13] ;
signed char arr_12 [12] [12] ;
int arr_13 [12] [12] [12] [12] ;
unsigned long long int arr_16 [12] [12] [12] [12] [12] [12] [12] ;
long long int arr_2 [13] ;
short arr_3 [13] ;
long long int arr_4 [13] ;
long long int arr_19 [12] [12] [12] [12] [12] ;
unsigned int arr_20 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3844748860597189582ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -938937773;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 343235868641123169ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 7688936346741408894LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)13607;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 6369955242502733859LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 3384171736454687148LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 3481855334U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
