#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4118526179468875629LL;
signed char var_1 = (signed char)-99;
unsigned int var_5 = 2602394755U;
unsigned short var_6 = (unsigned short)47909;
long long int var_8 = -3889018600506344036LL;
unsigned char var_11 = (unsigned char)230;
int var_13 = -739248138;
int var_14 = 12137073;
long long int var_15 = 2376170663399309780LL;
unsigned long long int var_16 = 5315025937900110616ULL;
int zero = 0;
long long int var_17 = -8577215739901946592LL;
long long int var_18 = -4988376430572242920LL;
unsigned int var_19 = 3833641870U;
signed char var_20 = (signed char)-119;
unsigned short var_21 = (unsigned short)61805;
long long int var_22 = 6414860481712050941LL;
signed char var_23 = (signed char)-40;
unsigned long long int var_24 = 757105268774304352ULL;
unsigned long long int var_25 = 15500338236121919463ULL;
unsigned short var_26 = (unsigned short)51771;
unsigned long long int var_27 = 11972427853114325671ULL;
unsigned int var_28 = 2759810695U;
long long int var_29 = -17032792993535257LL;
unsigned char var_30 = (unsigned char)219;
long long int var_31 = 4719966788134520230LL;
long long int var_32 = 1682191751134277865LL;
long long int var_33 = -673267484158053432LL;
unsigned char var_34 = (unsigned char)228;
signed char arr_7 [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
int arr_9 [18] [18] [18] ;
_Bool arr_14 [18] [18] ;
unsigned int arr_28 [17] [17] [17] [17] ;
unsigned long long int arr_5 [10] [10] ;
int arr_15 [18] [18] ;
unsigned char arr_36 [17] [17] [17] ;
long long int arr_37 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 15738815603480643380ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 616802838 : -199134668;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1030866780U : 1349165908U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 16162614366197577083ULL : 6725964045077053238ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -790937648 : 1383852001;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_37 [i_0] = -4107275313650393768LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
