#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4589511388456884586ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)82;
long long int var_6 = 3057434423418547596LL;
int var_7 = 1832394222;
long long int var_9 = -86226347033819163LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 6365482957532700874ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)23955;
unsigned short var_14 = (unsigned short)14436;
unsigned short var_15 = (unsigned short)33694;
unsigned long long int var_16 = 10117579124409515511ULL;
signed char var_17 = (signed char)-103;
int arr_0 [16] ;
unsigned long long int arr_2 [16] [16] ;
signed char arr_3 [16] ;
unsigned short arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -256883019 : 1079951531;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 16203459189701718289ULL : 11810808046592100594ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)15285 : (unsigned short)32908;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
