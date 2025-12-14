#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15226;
short var_1 = (short)-7135;
unsigned char var_2 = (unsigned char)225;
short var_3 = (short)-3467;
_Bool var_4 = (_Bool)0;
short var_5 = (short)10100;
short var_6 = (short)32308;
unsigned short var_7 = (unsigned short)25297;
short var_8 = (short)31793;
short var_9 = (short)-29051;
unsigned int var_10 = 3142925002U;
short var_11 = (short)15259;
int zero = 0;
unsigned int var_12 = 2740372091U;
signed char var_13 = (signed char)87;
short var_14 = (short)27955;
short var_15 = (short)19376;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)47916;
short var_18 = (short)24195;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-15791;
unsigned int var_21 = 2498628348U;
long long int var_22 = 1038392524905682000LL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-19274;
unsigned short var_25 = (unsigned short)17711;
unsigned long long int var_26 = 9251111130927084437ULL;
signed char var_27 = (signed char)-72;
int var_28 = 699342980;
short var_29 = (short)-11809;
unsigned int var_30 = 2958134645U;
unsigned int var_31 = 2707211141U;
short var_32 = (short)6545;
unsigned short var_33 = (unsigned short)65111;
unsigned short var_34 = (unsigned short)49499;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)22758;
unsigned int var_37 = 1288963868U;
int var_38 = 667518960;
unsigned int var_39 = 93772631U;
short var_40 = (short)5088;
_Bool var_41 = (_Bool)0;
unsigned int var_42 = 3750043845U;
long long int var_43 = -7180661575475766970LL;
unsigned int var_44 = 2880973229U;
unsigned int var_45 = 2597709992U;
short var_46 = (short)-13983;
_Bool var_47 = (_Bool)0;
short var_48 = (short)9774;
short var_49 = (short)-21130;
unsigned long long int var_50 = 15340788438448556961ULL;
unsigned int var_51 = 1535689359U;
short var_52 = (short)-29985;
short var_53 = (short)8419;
unsigned int var_54 = 1675804405U;
short arr_9 [14] [14] ;
long long int arr_10 [14] [14] [14] ;
_Bool arr_13 [14] [14] [14] [14] [14] [14] [14] ;
short arr_18 [14] [14] [14] [14] [14] [14] ;
_Bool arr_23 [14] [14] [14] [14] [14] ;
short arr_26 [14] [14] [14] [14] ;
unsigned int arr_32 [14] [14] [14] [14] ;
unsigned char arr_35 [14] [14] [14] [14] ;
signed char arr_38 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20335 : (short)-16112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -4708169079483090890LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)-21490 : (short)-2699;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (short)11439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1678481986U : 2629076900U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)210 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (signed char)-7;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
