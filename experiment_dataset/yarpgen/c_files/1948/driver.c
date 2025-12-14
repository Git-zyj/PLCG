#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-39;
unsigned long long int var_3 = 17287011834034351286ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-28;
unsigned long long int var_7 = 6686714991455237582ULL;
unsigned long long int var_8 = 8950892349727914255ULL;
long long int var_10 = 4428788884173494125LL;
unsigned long long int var_11 = 412009747444913744ULL;
int zero = 0;
unsigned int var_12 = 401300397U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-30127;
unsigned char var_16 = (unsigned char)104;
unsigned int var_17 = 464725987U;
long long int var_18 = -5292015565900529517LL;
signed char var_19 = (signed char)-26;
unsigned int var_20 = 15881583U;
unsigned int var_21 = 2126814162U;
unsigned int var_22 = 71835148U;
unsigned int var_23 = 56573190U;
short var_24 = (short)6276;
_Bool arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
signed char arr_2 [25] ;
signed char arr_3 [25] [25] [25] ;
unsigned long long int arr_8 [24] ;
long long int arr_15 [20] [20] ;
short arr_18 [20] ;
unsigned int arr_19 [20] [20] [20] ;
_Bool arr_24 [20] [20] ;
int arr_25 [20] [20] ;
unsigned int arr_7 [25] [25] [25] ;
long long int arr_10 [24] ;
unsigned int arr_11 [24] ;
unsigned int arr_14 [14] [14] ;
signed char arr_21 [20] ;
unsigned int arr_28 [20] ;
_Bool arr_31 [20] [20] ;
int arr_32 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 17509029436590375516ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-11 : (signed char)-26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 2497421777496442974ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = -7652943228571175657LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (short)-4820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2795862322U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = 1613850132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1534666377U : 4077532141U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2867630648886540684LL : -6959492704953683269LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2554174580U : 3816990225U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 73379623U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 2013872249U : 668063885U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_32 [i_0] [i_1] = -233624820;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
