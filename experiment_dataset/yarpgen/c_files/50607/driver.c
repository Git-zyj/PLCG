#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
int var_4 = -1316029483;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 10696048673145784080ULL;
short var_8 = (short)85;
unsigned long long int var_10 = 11769420795887138222ULL;
unsigned int var_11 = 878923203U;
unsigned int var_12 = 2038327286U;
unsigned long long int var_13 = 5766542016954875839ULL;
unsigned long long int var_14 = 8476770295306767729ULL;
unsigned int var_15 = 3561096860U;
int zero = 0;
signed char var_17 = (signed char)-114;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 846453863227455348ULL;
unsigned long long int var_21 = 14500531593628767682ULL;
unsigned char var_22 = (unsigned char)7;
unsigned char var_23 = (unsigned char)98;
long long int arr_3 [15] ;
int arr_9 [15] [15] [15] ;
long long int arr_14 [25] ;
unsigned char arr_15 [25] ;
long long int arr_13 [15] [15] ;
_Bool arr_16 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5978987348236093927LL : 4900319181437221634LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1912654681 : 344108896;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3062185663539232018LL : 5032001921086690662LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)16 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 2955332336084956LL : -5185300041740176850LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
