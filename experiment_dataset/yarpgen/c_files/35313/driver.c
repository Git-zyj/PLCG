#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 797480661U;
unsigned int var_1 = 732644182U;
short var_2 = (short)24856;
unsigned long long int var_3 = 235201046497019352ULL;
unsigned long long int var_4 = 13952316851116166391ULL;
short var_5 = (short)-8606;
unsigned long long int var_6 = 5155022481616799869ULL;
unsigned long long int var_7 = 10500953131599047302ULL;
unsigned long long int var_8 = 3742468594891471760ULL;
short var_9 = (short)-16759;
short var_10 = (short)11490;
signed char var_11 = (signed char)22;
unsigned long long int var_12 = 179493491424156266ULL;
unsigned long long int var_13 = 5953776861673153492ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -684981479252453933LL;
short var_16 = (short)22227;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-30406;
short var_19 = (short)29046;
unsigned long long int var_20 = 12868440852891129728ULL;
signed char var_21 = (signed char)-29;
unsigned long long int var_22 = 14226657191587625799ULL;
short var_23 = (short)-27456;
unsigned long long int var_24 = 14192729927248836366ULL;
signed char var_25 = (signed char)-67;
signed char var_26 = (signed char)-11;
short var_27 = (short)-32670;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)54363;
long long int var_30 = -8449733986135003185LL;
short var_31 = (short)23723;
unsigned char var_32 = (unsigned char)235;
unsigned char var_33 = (unsigned char)99;
unsigned long long int var_34 = 17429432515671059670ULL;
unsigned short var_35 = (unsigned short)3644;
unsigned char var_36 = (unsigned char)121;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 8676426877066180239ULL;
short var_39 = (short)-16374;
short var_40 = (short)-7250;
unsigned long long int var_41 = 17900766921184133711ULL;
signed char var_42 = (signed char)33;
long long int var_43 = -721246405169464267LL;
short var_44 = (short)10094;
long long int var_45 = -4461358145412734970LL;
unsigned int var_46 = 304817132U;
short var_47 = (short)-6903;
short var_48 = (short)4758;
unsigned long long int var_49 = 2662885538330426554ULL;
signed char var_50 = (signed char)15;
short var_51 = (short)-17216;
short var_52 = (short)-20625;
short var_53 = (short)-21211;
signed char var_54 = (signed char)-71;
unsigned short var_55 = (unsigned short)3220;
short var_56 = (short)-10814;
short var_57 = (short)-6347;
unsigned long long int var_58 = 15955538859719780301ULL;
unsigned int var_59 = 16232763U;
long long int var_60 = -4589288995824312228LL;
unsigned long long int var_61 = 246738802956032692ULL;
short var_62 = (short)-26456;
unsigned short var_63 = (unsigned short)34820;
short var_64 = (short)29692;
unsigned char var_65 = (unsigned char)111;
_Bool var_66 = (_Bool)0;
unsigned long long int var_67 = 14416762913946038588ULL;
short var_68 = (short)13860;
signed char var_69 = (signed char)73;
unsigned short var_70 = (unsigned short)56496;
short arr_2 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_33 [13] [13] ;
unsigned long long int arr_38 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)11270 : (short)14704;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 381545447U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 15492823432609550893ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 17525831094834892608ULL : 13342445528042072984ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? 4282165786238297458ULL : 13269754630040574849ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
