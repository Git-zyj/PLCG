#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
short var_1 = (short)25175;
long long int var_2 = -8403315285892699823LL;
int var_3 = 603096241;
unsigned long long int var_4 = 4257046075167187161ULL;
unsigned long long int var_5 = 15813872552081967806ULL;
signed char var_6 = (signed char)-65;
short var_7 = (short)30117;
unsigned long long int var_9 = 122817086270393621ULL;
int var_10 = 856245579;
int zero = 0;
unsigned long long int var_11 = 6324351162885033695ULL;
unsigned short var_12 = (unsigned short)10121;
unsigned long long int var_13 = 5288471840466170708ULL;
short var_14 = (short)9332;
unsigned long long int var_15 = 1536477723596660912ULL;
_Bool var_16 = (_Bool)0;
int var_17 = -528607221;
unsigned char var_18 = (unsigned char)77;
unsigned long long int var_19 = 13678919996121035000ULL;
_Bool var_20 = (_Bool)0;
signed char arr_0 [19] [19] ;
signed char arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned long long int arr_3 [19] ;
long long int arr_4 [14] ;
unsigned short arr_6 [14] ;
unsigned short arr_10 [14] [14] ;
signed char arr_14 [14] [14] [14] [14] ;
unsigned long long int arr_15 [14] [14] [14] ;
long long int arr_16 [14] [14] [14] ;
_Bool arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3925494318045698612ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 7719510895643828740LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)51712;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)48598;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 6551816023096772235ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -2296013997282379127LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
