#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 314481368U;
unsigned int var_1 = 4269964208U;
unsigned int var_2 = 2711402120U;
unsigned char var_3 = (unsigned char)94;
long long int var_4 = 7590700276965464908LL;
unsigned short var_5 = (unsigned short)13625;
short var_6 = (short)11375;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)134;
unsigned short var_9 = (unsigned short)45732;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
unsigned int var_12 = 289312857U;
unsigned long long int var_13 = 1382999816275810711ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)9409;
unsigned short var_16 = (unsigned short)50115;
unsigned short var_17 = (unsigned short)39586;
unsigned char var_18 = (unsigned char)161;
int var_19 = 7331716;
unsigned long long int var_20 = 9065010402990935183ULL;
long long int var_21 = -5676110151017713017LL;
unsigned short var_22 = (unsigned short)24996;
long long int var_23 = -5705865028006112064LL;
unsigned long long int var_24 = 11173445400850917117ULL;
long long int var_25 = -1648855317208666088LL;
unsigned short var_26 = (unsigned short)11356;
signed char var_27 = (signed char)3;
unsigned char var_28 = (unsigned char)81;
_Bool var_29 = (_Bool)1;
int arr_0 [14] ;
unsigned char arr_1 [14] ;
int arr_2 [14] ;
unsigned int arr_3 [14] ;
short arr_8 [20] [20] ;
signed char arr_9 [20] ;
unsigned long long int arr_10 [20] [20] ;
unsigned long long int arr_11 [20] ;
unsigned int arr_12 [20] [20] [20] ;
unsigned int arr_13 [20] [20] [20] ;
unsigned short arr_15 [20] [20] ;
unsigned int arr_16 [20] [20] [20] [20] ;
unsigned int arr_17 [20] [20] [20] [20] ;
unsigned long long int arr_18 [20] [20] [20] [20] [20] ;
_Bool arr_21 [13] [13] ;
unsigned long long int arr_24 [19] ;
unsigned long long int arr_25 [19] ;
long long int arr_27 [19] ;
unsigned short arr_31 [19] [19] ;
int arr_33 [19] ;
unsigned long long int arr_34 [19] ;
unsigned long long int arr_35 [19] [19] [19] [19] ;
unsigned char arr_41 [19] [19] [19] [19] [19] [19] ;
long long int arr_45 [19] [19] [19] [19] ;
unsigned char arr_59 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_4 [14] ;
unsigned char arr_5 [14] ;
long long int arr_6 [14] ;
unsigned long long int arr_7 [14] [14] ;
signed char arr_14 [20] [20] [20] [20] ;
unsigned long long int arr_19 [20] [20] [20] [20] [20] ;
long long int arr_20 [20] ;
_Bool arr_23 [13] ;
long long int arr_28 [19] ;
unsigned short arr_37 [19] [19] [19] [19] ;
unsigned long long int arr_38 [19] ;
unsigned int arr_48 [19] [19] [19] [19] ;
int arr_49 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_50 [19] [19] [19] [19] [19] ;
unsigned short arr_61 [11] [11] [11] ;
_Bool arr_62 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1601459184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -2004850295;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2942412446U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)30976;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 6349998608955673207ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 13554322344224693789ULL : 13059218635169571069ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 750451076U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 521576725U : 1785540421U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)138;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2050633633U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3900306813U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 12288286228082800296ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = 13552529605015051612ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = 12944742096923710408ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 3033243884729616950LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)44238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = -1028784761;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = 13498110058526954999ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 14257990384086768462ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = -6443167119616315933LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 3522078330U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -4202900786157074176LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 13631878614767650829ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)10 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 5484740968330133534ULL : 3806278694122670961ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -3234863191846448218LL : -721397124790959416LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = 2301815998523805537LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41367;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 16592590329982475915ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 16719623U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1441223127;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = 15129149181425954343ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)62494 : (unsigned short)62999;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_61 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
