#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9553890190079263227ULL;
long long int var_1 = 7680228764268201777LL;
unsigned int var_2 = 3031013633U;
signed char var_4 = (signed char)117;
unsigned long long int var_5 = 16258387926865537602ULL;
signed char var_6 = (signed char)44;
unsigned int var_7 = 3119767838U;
short var_8 = (short)9881;
unsigned long long int var_9 = 13678493322938139536ULL;
int zero = 0;
unsigned int var_10 = 2104305833U;
unsigned long long int var_11 = 9055615122978366291ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)88;
unsigned short var_14 = (unsigned short)459;
unsigned long long int arr_3 [14] [14] ;
long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 7416809344506969390ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -4153601481056049506LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
