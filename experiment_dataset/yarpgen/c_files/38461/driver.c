#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19844;
unsigned int var_1 = 1799835278U;
signed char var_2 = (signed char)18;
unsigned long long int var_3 = 6275470351553891396ULL;
long long int var_4 = 4041411897491091396LL;
long long int var_5 = -980930499743181950LL;
unsigned long long int var_6 = 11972193743369949745ULL;
unsigned char var_7 = (unsigned char)2;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
unsigned long long int var_10 = 16969523277731887672ULL;
unsigned char var_11 = (unsigned char)15;
signed char var_12 = (signed char)65;
int var_13 = 619641561;
unsigned int var_14 = 2975416312U;
long long int var_15 = 448144881690672074LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-66;
unsigned short var_18 = (unsigned short)41543;
short var_19 = (short)27231;
int var_20 = 1043792176;
long long int var_21 = -839598521584399920LL;
unsigned short var_22 = (unsigned short)31038;
signed char var_23 = (signed char)42;
long long int var_24 = -2606884401471928476LL;
unsigned long long int var_25 = 3665937972865717143ULL;
unsigned char var_26 = (unsigned char)136;
signed char var_27 = (signed char)38;
unsigned int var_28 = 3428278211U;
short var_29 = (short)-26373;
signed char var_30 = (signed char)47;
unsigned short var_31 = (unsigned short)22739;
unsigned char var_32 = (unsigned char)43;
unsigned char var_33 = (unsigned char)248;
int var_34 = 1789026033;
int var_35 = -915070973;
unsigned char var_36 = (unsigned char)114;
unsigned long long int var_37 = 17259399019594813407ULL;
long long int var_38 = -5780920385235857102LL;
short var_39 = (short)28171;
short var_40 = (short)10291;
long long int var_41 = 5308729955265081717LL;
short var_42 = (short)-3942;
short var_43 = (short)-18717;
long long int var_44 = -6338529152058901426LL;
unsigned int var_45 = 1600435656U;
long long int var_46 = 4373684497335326368LL;
short var_47 = (short)19864;
unsigned char var_48 = (unsigned char)175;
unsigned char var_49 = (unsigned char)139;
short var_50 = (short)-21277;
unsigned char var_51 = (unsigned char)141;
signed char var_52 = (signed char)6;
unsigned char var_53 = (unsigned char)114;
_Bool var_54 = (_Bool)0;
unsigned long long int var_55 = 14193259219251009633ULL;
signed char var_56 = (signed char)121;
unsigned long long int var_57 = 575139178804187821ULL;
long long int var_58 = -1209618836641212447LL;
unsigned short var_59 = (unsigned short)1691;
long long int var_60 = 5716798830427839135LL;
signed char var_61 = (signed char)-88;
unsigned int var_62 = 67921022U;
unsigned int var_63 = 3738453602U;
short var_64 = (short)174;
unsigned char var_65 = (unsigned char)133;
signed char var_66 = (signed char)42;
long long int var_67 = -6909462002168759440LL;
signed char var_68 = (signed char)122;
signed char var_69 = (signed char)18;
_Bool var_70 = (_Bool)1;
_Bool var_71 = (_Bool)1;
unsigned long long int var_72 = 15661775791341771195ULL;
unsigned int var_73 = 1322585799U;
unsigned int var_74 = 1828146594U;
unsigned char var_75 = (unsigned char)147;
signed char var_76 = (signed char)-38;
long long int var_77 = 5364660126278910927LL;
unsigned char var_78 = (unsigned char)90;
long long int var_79 = 8584703073940625911LL;
unsigned int var_80 = 3085522211U;
unsigned short var_81 = (unsigned short)23317;
_Bool var_82 = (_Bool)0;
short var_83 = (short)17819;
_Bool var_84 = (_Bool)1;
unsigned char arr_4 [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] [18] [18] ;
signed char arr_9 [18] [18] [18] [18] ;
unsigned short arr_10 [18] [18] [18] [18] ;
long long int arr_11 [18] [18] [18] [18] ;
unsigned char arr_14 [18] [18] [18] [18] [18] ;
long long int arr_16 [18] [18] [18] [18] [18] ;
unsigned char arr_21 [18] [18] ;
short arr_24 [18] [18] [18] ;
long long int arr_25 [18] [18] ;
long long int arr_33 [24] [24] [24] ;
int arr_34 [24] [24] [24] [24] ;
unsigned long long int arr_38 [24] [24] [24] ;
signed char arr_45 [24] ;
unsigned long long int arr_46 [24] ;
unsigned long long int arr_48 [24] [24] [24] [24] ;
int arr_49 [24] [24] [24] [24] ;
signed char arr_50 [24] [24] [24] ;
signed char arr_51 [24] ;
long long int arr_56 [24] [24] [24] [24] ;
unsigned short arr_59 [24] [24] [24] [24] ;
int arr_70 [24] [24] ;
short arr_71 [24] ;
unsigned long long int arr_75 [24] [24] [24] [24] ;
long long int arr_84 [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5008944351780834061ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 2396144341U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62302;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 5744616558676420003LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 207404167246944508LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)176 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)19956;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = 6316631502858135712LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 814778490646122150LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 1986478051;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 18092489187274510557ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_45 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_46 [i_0] = 9733872924238186172ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 3923350922809731366ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = 2077455951;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_51 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = -2946028617908981611LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38941;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_70 [i_0] [i_1] = -1752737311;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_71 [i_0] = (short)-23332;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_75 [i_0] [i_1] [i_2] [i_3] = 13090726300083158568ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4721698034249867702LL;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
