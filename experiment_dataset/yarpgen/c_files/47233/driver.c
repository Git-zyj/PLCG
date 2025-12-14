#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)207;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-14;
long long int var_21 = 9103111871397968077LL;
signed char var_22 = (signed char)27;
unsigned int var_23 = 1618961497U;
int var_24 = -1295963147;
unsigned int var_25 = 3420899315U;
unsigned long long int var_26 = 14586814988220635873ULL;
unsigned long long int var_27 = 1817675146308069361ULL;
unsigned long long int var_28 = 3615375339511363786ULL;
long long int var_29 = 5587171977450099158LL;
unsigned short var_30 = (unsigned short)63460;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] ;
signed char arr_3 [24] ;
signed char arr_4 [24] [24] ;
_Bool arr_6 [24] ;
unsigned short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 10054639990785514100ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)52455;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
