#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8809221401956922326LL;
unsigned char var_2 = (unsigned char)159;
long long int var_3 = 1860984389891045862LL;
long long int var_4 = -1127485187451660309LL;
unsigned char var_5 = (unsigned char)106;
unsigned short var_6 = (unsigned short)9325;
int var_7 = -1328160673;
unsigned char var_8 = (unsigned char)243;
int var_9 = -577774073;
unsigned int var_10 = 1015909430U;
unsigned short var_11 = (unsigned short)42431;
unsigned int var_12 = 2735074584U;
long long int var_13 = -3392608405252744676LL;
int zero = 0;
int var_14 = -1023402670;
long long int var_15 = 765065284088008211LL;
unsigned int var_16 = 3306508092U;
unsigned int var_17 = 1700205621U;
unsigned char var_18 = (unsigned char)16;
unsigned char var_19 = (unsigned char)175;
int var_20 = 850823180;
unsigned char var_21 = (unsigned char)51;
unsigned char var_22 = (unsigned char)250;
long long int var_23 = 6504907811937278588LL;
long long int var_24 = 1957575903392620228LL;
unsigned char var_25 = (unsigned char)229;
unsigned char var_26 = (unsigned char)24;
unsigned int var_27 = 167590648U;
unsigned char var_28 = (unsigned char)67;
unsigned char var_29 = (unsigned char)200;
unsigned char var_30 = (unsigned char)184;
long long int var_31 = -9021714247747175726LL;
unsigned short var_32 = (unsigned short)50540;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-13724;
unsigned short var_35 = (unsigned short)10900;
unsigned int var_36 = 208276418U;
unsigned int var_37 = 595402333U;
long long int var_38 = -1696160761899050252LL;
int var_39 = -1929198107;
unsigned int var_40 = 105779918U;
unsigned short var_41 = (unsigned short)24166;
unsigned char var_42 = (unsigned char)50;
unsigned short var_43 = (unsigned short)22415;
short var_44 = (short)16553;
long long int var_45 = 2250644482950191545LL;
unsigned char var_46 = (unsigned char)164;
long long int var_47 = 7595528564401845686LL;
unsigned int var_48 = 2952326790U;
unsigned int var_49 = 3644514699U;
unsigned char var_50 = (unsigned char)102;
long long int var_51 = -2451631318799534136LL;
_Bool var_52 = (_Bool)0;
int var_53 = -1157511534;
unsigned char var_54 = (unsigned char)66;
int var_55 = 1702706296;
unsigned int var_56 = 319532052U;
int var_57 = -286415286;
unsigned int var_58 = 670466632U;
unsigned int var_59 = 4072077603U;
int var_60 = -1821229044;
long long int var_61 = 874266308446475556LL;
unsigned char var_62 = (unsigned char)237;
unsigned char arr_0 [10] ;
int arr_1 [10] ;
short arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
int arr_4 [10] [10] [10] ;
int arr_5 [10] ;
unsigned char arr_6 [10] [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] ;
int arr_10 [10] [10] [10] [10] ;
int arr_12 [10] ;
unsigned short arr_13 [10] ;
unsigned char arr_14 [10] ;
unsigned short arr_16 [10] [10] [10] ;
unsigned short arr_23 [10] [10] [10] [10] [10] [10] [10] ;
long long int arr_26 [10] [10] [10] ;
int arr_27 [10] [10] ;
unsigned int arr_29 [10] ;
long long int arr_34 [10] [10] [10] [10] ;
unsigned short arr_35 [10] [10] [10] [10] ;
short arr_36 [10] ;
long long int arr_38 [10] [10] [10] [10] ;
int arr_42 [10] ;
unsigned int arr_47 [10] [10] [10] ;
int arr_50 [10] [10] ;
int arr_53 [10] [10] [10] [10] [10] ;
short arr_57 [10] [10] [10] [10] [10] ;
unsigned int arr_25 [10] [10] ;
long long int arr_49 [10] [10] [10] ;
unsigned short arr_52 [10] [10] ;
long long int arr_58 [10] ;
long long int arr_62 [10] [10] [10] ;
short arr_63 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1806261994;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-21095;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1930474236U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1871828203;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 617616361;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -28068227;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1482241521 : -1516515965;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48815 : (unsigned short)30820;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)6320;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)63635;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3735111335838728514LL : 5749733459888699448LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_27 [i_0] [i_1] = -1343696949;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = 1268004736U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 766210267212582094LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned short)14268;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (short)10993;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 6177907154863957394LL : 402727863277870763LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 1639952353 : 895208423;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1370475495U : 3763908280U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? 1382410808 : 1988305896;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = -85733319;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)32436;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 722107813U : 3283315126U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4903353694542958836LL : -4850338949580874985LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)2005 : (unsigned short)14688;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_58 [i_0] = (i_0 % 2 == 0) ? -2724431953365720649LL : -901284265199764965LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -542205340717571154LL : -8776106993847080198LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_63 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13356 : (short)23367;
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
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_49 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_63 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
