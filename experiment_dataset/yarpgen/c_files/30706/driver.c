#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16811095204369195589ULL;
long long int var_1 = 2510688747775175928LL;
unsigned short var_2 = (unsigned short)43619;
unsigned short var_3 = (unsigned short)58808;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3298498523882709141LL;
unsigned char var_9 = (unsigned char)64;
short var_10 = (short)-7315;
short var_12 = (short)21653;
unsigned short var_13 = (unsigned short)1224;
unsigned char var_15 = (unsigned char)171;
long long int var_17 = 5479646625934608501LL;
int zero = 0;
unsigned int var_19 = 3754919097U;
unsigned int var_20 = 1973386629U;
long long int var_21 = 2049027646153949224LL;
unsigned short var_22 = (unsigned short)21590;
unsigned char var_23 = (unsigned char)207;
unsigned int var_24 = 2351663399U;
unsigned long long int var_25 = 14931085209962302638ULL;
unsigned char var_26 = (unsigned char)136;
unsigned int var_27 = 3610890845U;
unsigned long long int var_28 = 991140737641628139ULL;
unsigned int var_29 = 735026932U;
short var_30 = (short)-31385;
signed char arr_0 [14] [14] ;
unsigned long long int arr_2 [14] [14] [14] ;
long long int arr_3 [14] ;
long long int arr_4 [14] ;
unsigned int arr_5 [14] ;
unsigned long long int arr_6 [14] ;
unsigned char arr_7 [14] [14] [14] ;
int arr_9 [14] [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] [14] [14] ;
unsigned short arr_11 [14] ;
unsigned char arr_12 [14] [14] ;
short arr_13 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 18006402120842148094ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1304060967214913404LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -8636317569697787474LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 3380166054U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 13081410363021047717ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 82767839;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 2324672109U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)31932;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)18085;
}

void checksum() {
    hash(&seed, var_19);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
