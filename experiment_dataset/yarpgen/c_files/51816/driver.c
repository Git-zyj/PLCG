#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26575;
unsigned short var_2 = (unsigned short)53658;
unsigned long long int var_4 = 17794644257865833027ULL;
long long int var_5 = -4352745646508729453LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 11187386679158424377ULL;
unsigned char var_9 = (unsigned char)66;
long long int var_10 = 8823371673073470612LL;
unsigned char var_12 = (unsigned char)1;
int zero = 0;
int var_14 = 1063653279;
short var_15 = (short)31644;
signed char var_16 = (signed char)87;
signed char var_17 = (signed char)-1;
unsigned char var_18 = (unsigned char)11;
int var_19 = 652252780;
unsigned char var_20 = (unsigned char)197;
int var_21 = 861459326;
unsigned char var_22 = (unsigned char)65;
unsigned short var_23 = (unsigned short)8399;
unsigned long long int var_24 = 9037732185879478712ULL;
signed char var_25 = (signed char)-92;
short var_26 = (short)-15362;
unsigned int var_27 = 4764980U;
long long int var_28 = 6482094757410268438LL;
long long int var_29 = 161694725032042667LL;
short var_30 = (short)31118;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)93;
signed char var_33 = (signed char)-73;
unsigned char var_34 = (unsigned char)186;
unsigned char var_35 = (unsigned char)200;
signed char var_36 = (signed char)-62;
_Bool var_37 = (_Bool)1;
unsigned char var_38 = (unsigned char)37;
int var_39 = -1290395151;
_Bool var_40 = (_Bool)1;
short var_41 = (short)-19577;
signed char var_42 = (signed char)75;
short arr_5 [17] [17] [17] ;
long long int arr_7 [17] ;
_Bool arr_8 [17] [17] [17] [17] [17] [17] ;
long long int arr_9 [17] [17] [17] ;
unsigned int arr_10 [17] [17] [17] [17] [17] [17] [17] ;
long long int arr_22 [10] [10] [10] ;
signed char arr_24 [10] [10] [10] [10] ;
unsigned long long int arr_25 [18] ;
_Bool arr_26 [18] ;
int arr_27 [18] [18] ;
unsigned char arr_29 [18] [18] [18] ;
int arr_30 [18] [18] ;
signed char arr_31 [18] [18] [18] ;
unsigned char arr_32 [18] ;
unsigned long long int arr_35 [18] [18] [18] [18] ;
unsigned int arr_40 [18] [18] [18] ;
unsigned long long int arr_42 [25] [25] ;
unsigned int arr_43 [25] ;
short arr_44 [25] ;
unsigned long long int arr_47 [24] ;
unsigned char arr_49 [24] [24] ;
unsigned short arr_50 [24] [24] ;
unsigned int arr_16 [10] [10] ;
unsigned char arr_28 [18] [18] ;
short arr_33 [18] [18] ;
unsigned char arr_39 [18] ;
long long int arr_45 [25] ;
unsigned short arr_46 [25] ;
unsigned char arr_55 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-4863;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 6949772897250528175LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -6553784745921939632LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1815152301U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -8326491449989156029LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = 8916279015136626582ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = -98042772;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = -469862028;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 4093861522145582932ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 3849123400U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = 17264966833548851736ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = 3119072489U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = (short)3306;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_47 [i_0] = 11361787863989955217ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_50 [i_0] [i_1] = (unsigned short)23930;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 213513073U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = (short)-13219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_45 [i_0] = 4271085610878340525LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_46 [i_0] = (unsigned short)16205;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_55 [i_0] = (unsigned char)246;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_55 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
