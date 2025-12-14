#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58184;
long long int var_2 = 6015011594199929585LL;
long long int var_3 = -721501450197406200LL;
unsigned short var_4 = (unsigned short)24833;
unsigned short var_5 = (unsigned short)64105;
unsigned short var_6 = (unsigned short)2876;
unsigned short var_7 = (unsigned short)61174;
long long int var_8 = 5291537676799936350LL;
long long int var_9 = -178160253380747337LL;
long long int var_10 = -8381561721445282036LL;
unsigned short var_11 = (unsigned short)31041;
unsigned short var_12 = (unsigned short)30688;
int zero = 0;
long long int var_13 = 2302374394432990564LL;
unsigned short var_14 = (unsigned short)38015;
long long int var_15 = -4048477420300670242LL;
long long int var_16 = -1833822620132655678LL;
long long int var_17 = 7077371977320961494LL;
unsigned short var_18 = (unsigned short)20244;
unsigned short var_19 = (unsigned short)56990;
unsigned short var_20 = (unsigned short)29540;
long long int var_21 = -2051831715988654705LL;
long long int var_22 = 4962783988825153509LL;
unsigned short var_23 = (unsigned short)1001;
unsigned short var_24 = (unsigned short)41637;
long long int arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
long long int arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned short arr_4 [19] ;
unsigned short arr_6 [19] ;
long long int arr_10 [19] [19] ;
unsigned short arr_13 [19] [19] [19] ;
unsigned short arr_8 [19] [19] ;
unsigned short arr_9 [19] ;
long long int arr_12 [19] [19] [19] ;
unsigned short arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -4046660339917006839LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)15416;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -5845656367840016679LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)23203;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)47522;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)8704;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -1747023915730229133LL : 4121777892126969623LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)36383;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)26002;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)41721;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1233226496179705716LL : 2023393335444322895LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned short)64932;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
