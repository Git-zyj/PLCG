#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14158;
signed char var_2 = (signed char)-26;
unsigned long long int var_4 = 13001977813687588007ULL;
unsigned long long int var_5 = 1118101345663584291ULL;
unsigned char var_6 = (unsigned char)20;
long long int var_10 = 8512541978667707551LL;
unsigned long long int var_12 = 9999286592993454427ULL;
unsigned char var_14 = (unsigned char)164;
long long int var_17 = 2740351868815320112LL;
int zero = 0;
long long int var_19 = -7555632807289788082LL;
unsigned char var_20 = (unsigned char)59;
long long int var_21 = -5561731542969842498LL;
unsigned char var_22 = (unsigned char)62;
int var_23 = 1134502144;
int var_24 = 620309971;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
_Bool arr_3 [19] ;
int arr_8 [19] [19] [19] ;
unsigned long long int arr_9 [19] ;
unsigned long long int arr_10 [19] [19] [19] [19] ;
unsigned char arr_11 [19] ;
long long int arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 41153825019855898ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4695893008538028894ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -821183082 : 315584085;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3575635972866206138ULL : 5375009153919152235ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9956440070425609999ULL : 9048863541672619210ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 4858321493345798000LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
