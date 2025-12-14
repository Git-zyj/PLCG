#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3529628765U;
signed char var_2 = (signed char)-67;
unsigned char var_3 = (unsigned char)72;
unsigned char var_4 = (unsigned char)190;
unsigned long long int var_5 = 13591811006754832529ULL;
long long int var_6 = 5169868640207119961LL;
long long int var_7 = 655300752034229792LL;
short var_8 = (short)-29510;
unsigned int var_9 = 1402735542U;
unsigned long long int var_10 = 13034911507361591938ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1583204290346793294LL;
signed char var_14 = (signed char)-19;
long long int var_16 = 5782787962950883449LL;
short var_17 = (short)-26480;
unsigned char var_18 = (unsigned char)228;
short var_19 = (short)26655;
int zero = 0;
unsigned char var_20 = (unsigned char)171;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)27;
unsigned long long int var_23 = 14834435414069051377ULL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)21416;
unsigned short var_26 = (unsigned short)63751;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)46;
unsigned int var_29 = 1496596147U;
unsigned long long int var_30 = 5849622972752533439ULL;
long long int arr_2 [19] [19] [19] ;
_Bool arr_3 [19] [19] ;
_Bool arr_8 [19] [19] [19] ;
unsigned char arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 8611100249694889783LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)224;
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
