#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
int var_2 = 1741130097;
unsigned long long int var_4 = 662621069357527989ULL;
unsigned long long int var_5 = 4754159926197369183ULL;
unsigned short var_7 = (unsigned short)8014;
unsigned char var_9 = (unsigned char)46;
unsigned char var_10 = (unsigned char)223;
unsigned char var_11 = (unsigned char)253;
unsigned long long int var_12 = 17228137331030295083ULL;
unsigned char var_14 = (unsigned char)91;
unsigned int var_15 = 1536030247U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)130;
unsigned short var_18 = (unsigned short)50117;
unsigned long long int var_19 = 17457846728294982462ULL;
short var_20 = (short)-24806;
unsigned long long int var_21 = 12078669995832034655ULL;
short arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-31707;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
