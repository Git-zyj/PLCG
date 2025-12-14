#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 619097999U;
int var_1 = 1437391275;
int var_2 = -487409581;
long long int var_3 = -1176254215175604343LL;
unsigned char var_4 = (unsigned char)63;
unsigned char var_5 = (unsigned char)208;
short var_6 = (short)18488;
unsigned int var_7 = 2604569919U;
unsigned int var_8 = 3592528614U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)77;
signed char var_11 = (signed char)47;
unsigned int var_12 = 2213600865U;
unsigned short var_13 = (unsigned short)3122;
signed char var_14 = (signed char)-88;
signed char var_16 = (signed char)-123;
signed char var_17 = (signed char)-80;
int zero = 0;
signed char var_18 = (signed char)-45;
short var_19 = (short)-14541;
signed char var_20 = (signed char)-7;
unsigned char var_21 = (unsigned char)208;
unsigned char var_22 = (unsigned char)249;
unsigned long long int var_23 = 4971215796804742340ULL;
unsigned int var_24 = 4071334742U;
_Bool var_25 = (_Bool)1;
int var_26 = -718271593;
unsigned char var_27 = (unsigned char)41;
long long int var_28 = -5631570417431573014LL;
int var_29 = 1169874689;
short var_30 = (short)11272;
short var_31 = (short)17426;
int var_32 = -719025827;
long long int var_33 = -4024930499318837736LL;
unsigned int var_34 = 2988799541U;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)0;
unsigned char var_37 = (unsigned char)251;
signed char var_38 = (signed char)120;
unsigned int var_39 = 3585850094U;
unsigned short var_40 = (unsigned short)57717;
long long int var_41 = 3808489750325740494LL;
unsigned int var_42 = 995038835U;
unsigned int var_43 = 3679096839U;
unsigned long long int var_44 = 8147137811193608230ULL;
unsigned int var_45 = 3554432753U;
unsigned char var_46 = (unsigned char)35;
unsigned short var_47 = (unsigned short)51858;
short var_48 = (short)-17053;
int var_49 = 1283330687;
_Bool var_50 = (_Bool)1;
long long int var_51 = -8448185183834189939LL;
_Bool var_52 = (_Bool)1;
unsigned int var_53 = 726384102U;
unsigned char var_54 = (unsigned char)94;
unsigned int var_55 = 1290384010U;
unsigned long long int arr_0 [11] ;
unsigned char arr_2 [11] ;
long long int arr_3 [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
unsigned char arr_7 [11] [11] [11] [11] ;
short arr_8 [11] [11] [11] [11] ;
unsigned char arr_9 [11] [11] [11] [11] ;
signed char arr_10 [11] [11] ;
int arr_11 [11] ;
_Bool arr_12 [11] [11] [11] [11] [11] ;
long long int arr_14 [11] [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_16 [11] [11] [11] ;
unsigned short arr_21 [11] [11] [11] [11] [11] ;
signed char arr_23 [11] [11] [11] [11] ;
long long int arr_27 [11] [11] [11] ;
unsigned char arr_32 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 9715851737914747699ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 3898169370420805956LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12378840813272638238ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)118 : (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)17212 : (short)2806;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)84;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = -691108426;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 1466133700782419136LL : 3279070702634135629LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2517391001804129640ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)31316;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)110 : (signed char)-5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8770608261145011284LL : 8088767724133468027LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)39 : (unsigned char)205;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
