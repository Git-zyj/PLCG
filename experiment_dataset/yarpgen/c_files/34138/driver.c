#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
long long int var_3 = 7696046918367970900LL;
unsigned long long int var_5 = 10808542847435471721ULL;
unsigned char var_6 = (unsigned char)21;
unsigned long long int var_10 = 5858113412261239960ULL;
short var_11 = (short)27999;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)191;
unsigned int var_15 = 233659725U;
unsigned long long int var_16 = 6242895140068246358ULL;
int zero = 0;
unsigned long long int var_17 = 4511661555896193450ULL;
signed char var_18 = (signed char)77;
unsigned char var_19 = (unsigned char)200;
long long int var_20 = -100686099951757022LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 634680625506833588ULL;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 15309449392675853364ULL;
unsigned long long int var_26 = 7558791250244449597ULL;
int arr_0 [22] ;
unsigned int arr_1 [22] ;
short arr_3 [22] [22] [22] ;
unsigned short arr_4 [22] ;
int arr_8 [22] [22] [22] [22] ;
short arr_9 [22] ;
_Bool arr_12 [22] ;
long long int arr_15 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1560087810;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 406504500U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)31657;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)57129;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1279606078;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (short)8854;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -1466725873368613700LL : -3427740759350957321LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
