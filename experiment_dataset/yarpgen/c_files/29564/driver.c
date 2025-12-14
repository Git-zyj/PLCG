#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)48;
short var_2 = (short)-18980;
signed char var_3 = (signed char)-73;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 8371852642369530002ULL;
_Bool var_6 = (_Bool)0;
int var_8 = -1938011496;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6057784584643139412LL;
unsigned long long int var_11 = 17479356086071475639ULL;
unsigned short var_12 = (unsigned short)13395;
int var_13 = -1116803448;
unsigned char var_14 = (unsigned char)224;
int var_15 = 1878447462;
unsigned int var_16 = 3098580848U;
unsigned char var_17 = (unsigned char)32;
int zero = 0;
unsigned long long int var_18 = 14917846068020669576ULL;
short var_19 = (short)23726;
short var_20 = (short)1608;
unsigned long long int var_21 = 945686873384185640ULL;
int var_22 = -677600640;
unsigned long long int arr_7 [20] [20] [20] [20] ;
unsigned long long int arr_8 [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6246113659185420781ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 17690175066146712831ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2027340740U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
