#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19443;
unsigned int var_1 = 2114993957U;
unsigned long long int var_2 = 12661430379058657675ULL;
unsigned short var_3 = (unsigned short)19401;
unsigned short var_4 = (unsigned short)29320;
unsigned short var_5 = (unsigned short)62230;
unsigned short var_6 = (unsigned short)38488;
unsigned short var_8 = (unsigned short)2780;
short var_9 = (short)8790;
long long int var_10 = 298014537578450973LL;
unsigned short var_11 = (unsigned short)28139;
unsigned short var_12 = (unsigned short)1532;
unsigned short var_14 = (unsigned short)41179;
unsigned int var_15 = 2667343313U;
short var_16 = (short)-5439;
int zero = 0;
short var_17 = (short)-8397;
unsigned short var_18 = (unsigned short)24464;
unsigned int var_19 = 3066459925U;
long long int var_20 = -2798220280561769376LL;
short var_21 = (short)9616;
unsigned short var_22 = (unsigned short)3212;
short var_23 = (short)-17836;
long long int var_24 = 5036851091260102169LL;
unsigned long long int var_25 = 3990819902317882939ULL;
int var_26 = 364398750;
short var_27 = (short)-664;
unsigned int var_28 = 4290194315U;
long long int var_29 = -2027748456319150236LL;
short var_30 = (short)29705;
unsigned short var_31 = (unsigned short)1439;
long long int var_32 = -5080020448002442333LL;
long long int var_33 = -2865306707372074592LL;
long long int var_34 = -7842862576451326721LL;
short var_35 = (short)-28402;
unsigned long long int var_36 = 9976424125220055568ULL;
int var_37 = -214848122;
unsigned long long int var_38 = 12626004717838891675ULL;
unsigned short var_39 = (unsigned short)1665;
long long int arr_0 [22] ;
short arr_1 [22] ;
short arr_2 [22] ;
unsigned short arr_3 [22] ;
unsigned short arr_5 [10] ;
unsigned long long int arr_6 [10] [10] ;
int arr_7 [10] ;
unsigned short arr_8 [10] [10] ;
short arr_9 [10] [10] ;
unsigned short arr_11 [10] [10] [10] ;
unsigned long long int arr_12 [10] [10] [10] ;
unsigned short arr_13 [10] [10] [10] [10] [10] ;
short arr_14 [10] [10] ;
long long int arr_16 [10] [10] [10] [10] [10] ;
short arr_17 [10] [10] [10] [10] ;
short arr_19 [10] ;
unsigned long long int arr_23 [10] [10] [10] [10] ;
long long int arr_24 [10] [10] ;
short arr_26 [10] [10] [10] [10] ;
unsigned long long int arr_28 [10] [10] [10] [10] ;
short arr_29 [10] [10] [10] [10] ;
long long int arr_33 [10] [10] [10] ;
long long int arr_36 [10] [10] [10] ;
unsigned short arr_4 [22] ;
long long int arr_15 [10] ;
int arr_20 [10] [10] [10] ;
unsigned short arr_31 [10] ;
short arr_32 [10] [10] [10] [10] ;
short arr_37 [10] ;
short arr_38 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 9201312216569497153LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-23095;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-8033;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)46931;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)19087;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1119191943292741089ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -1272745312;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)15373;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-3254;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)35785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 17034085456330355782ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)42959;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-3499;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 956897210842930870LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)28367;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (short)18853;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 17701088212760317978ULL : 3885891979211191528ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 6873727714419224540LL : -2714610575203378852LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-9058 : (short)-8384;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 12111342680821948208ULL : 14745723959874085938ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-31608 : (short)-32673;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -3053881869898742207LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = -779600621903939685LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)52635;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 6860776384131318615LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 878159238;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2863 : (unsigned short)52547;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-1249 : (short)24372;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (short)-12183;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_38 [i_0] [i_1] = (short)30788;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
