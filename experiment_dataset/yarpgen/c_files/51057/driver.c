#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16453;
unsigned long long int var_1 = 17804009882773068085ULL;
long long int var_4 = 1395486146390856634LL;
long long int var_7 = -1856821317636605216LL;
unsigned int var_8 = 2071308391U;
long long int var_9 = -7803079281104512824LL;
unsigned int var_11 = 2536976197U;
long long int var_13 = 5516569406722498775LL;
unsigned long long int var_15 = 2446957464538132474ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)23641;
int zero = 0;
int var_20 = 990652037;
short var_21 = (short)20032;
unsigned int var_22 = 2583156065U;
long long int var_23 = 8411598040208636319LL;
unsigned int var_24 = 1100395715U;
unsigned int var_25 = 2108967448U;
unsigned short var_26 = (unsigned short)8014;
unsigned short var_27 = (unsigned short)28032;
unsigned long long int arr_0 [17] [17] ;
unsigned int arr_1 [17] [17] ;
long long int arr_4 [22] ;
signed char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 18324905923568635761ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3187992149U : 3526291056U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 4441689627355388012LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-40;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
