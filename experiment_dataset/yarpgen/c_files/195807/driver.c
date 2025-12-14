#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24853;
unsigned char var_1 = (unsigned char)16;
unsigned int var_2 = 535583005U;
signed char var_4 = (signed char)-16;
long long int var_5 = -7131083464629600237LL;
unsigned long long int var_7 = 4251538500510271733ULL;
short var_10 = (short)-1607;
unsigned long long int var_17 = 2172202197877176389ULL;
int zero = 0;
unsigned int var_19 = 3974785685U;
unsigned long long int var_20 = 5778263298240685519ULL;
long long int var_21 = -2150337408377304389LL;
unsigned long long int var_22 = 13941550207845226201ULL;
short var_23 = (short)-17509;
unsigned long long int var_24 = 11159778770288505046ULL;
unsigned long long int var_25 = 96528471560290299ULL;
long long int var_26 = -5568059277438176214LL;
unsigned short var_27 = (unsigned short)57942;
unsigned int var_28 = 3938360985U;
short arr_0 [12] ;
unsigned int arr_3 [12] [12] ;
short arr_5 [12] [12] [12] ;
unsigned long long int arr_17 [12] [12] [12] [12] ;
unsigned long long int arr_18 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)23226;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 425970743U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)28007;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 9008726330421657168ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 15792687065077609337ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
