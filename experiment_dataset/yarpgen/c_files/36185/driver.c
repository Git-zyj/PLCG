#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2573436991U;
int var_1 = -1057980606;
short var_2 = (short)17873;
unsigned short var_3 = (unsigned short)18888;
short var_4 = (short)24474;
unsigned int var_5 = 1386288841U;
unsigned short var_6 = (unsigned short)8369;
unsigned long long int var_7 = 3110568868624319928ULL;
unsigned long long int var_8 = 9058651244709098068ULL;
unsigned short var_9 = (unsigned short)46828;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 997597535U;
int var_13 = -1454364654;
short var_14 = (short)8635;
signed char var_15 = (signed char)-125;
int var_16 = 1801936759;
unsigned char var_17 = (unsigned char)192;
unsigned int var_18 = 2265687607U;
unsigned int var_19 = 2152790529U;
unsigned long long int var_20 = 8030937906288239826ULL;
int var_21 = 2070465079;
unsigned long long int var_22 = 14263971347902679073ULL;
unsigned long long int var_23 = 824443158325373456ULL;
unsigned long long int var_24 = 4599524102141365422ULL;
unsigned long long int var_25 = 8763135783666560019ULL;
unsigned long long int var_26 = 7692833962463982966ULL;
unsigned long long int var_27 = 3043703650925560572ULL;
long long int var_28 = -8925578585298573867LL;
unsigned int var_29 = 3377650958U;
signed char var_30 = (signed char)67;
unsigned char var_31 = (unsigned char)143;
unsigned int var_32 = 2037227554U;
int var_33 = 451590034;
signed char var_34 = (signed char)-56;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)22130;
int var_37 = -1998873921;
long long int var_38 = 1171780467681941542LL;
unsigned long long int var_39 = 908540747368618270ULL;
unsigned long long int var_40 = 10906313344319007835ULL;
unsigned long long int var_41 = 7329146882082998014ULL;
long long int var_42 = -7105767957158952374LL;
signed char var_43 = (signed char)-58;
_Bool var_44 = (_Bool)0;
short var_45 = (short)13330;
unsigned char var_46 = (unsigned char)245;
unsigned long long int arr_0 [10] ;
_Bool arr_1 [10] ;
short arr_2 [10] ;
short arr_3 [10] [10] [10] ;
unsigned int arr_4 [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] ;
_Bool arr_9 [10] ;
unsigned char arr_13 [10] [10] [10] [10] ;
signed char arr_16 [10] [10] [10] [10] ;
unsigned long long int arr_20 [10] [10] [10] ;
long long int arr_21 [10] [10] [10] ;
unsigned long long int arr_23 [10] [10] [10] ;
int arr_27 [10] [10] [10] ;
short arr_34 [10] ;
_Bool arr_37 [19] [19] ;
unsigned char arr_38 [19] ;
signed char arr_39 [15] ;
unsigned long long int arr_40 [15] ;
unsigned short arr_42 [11] ;
unsigned short arr_43 [11] ;
unsigned long long int arr_45 [11] ;
int arr_7 [10] ;
int arr_8 [10] [10] ;
long long int arr_15 [10] [10] ;
long long int arr_19 [10] [10] [10] ;
short arr_22 [10] ;
unsigned long long int arr_25 [10] [10] [10] ;
unsigned long long int arr_31 [10] ;
short arr_32 [10] [10] ;
signed char arr_35 [10] [10] [10] ;
signed char arr_36 [10] ;
int arr_41 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 8792366041531026117ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-8012 : (short)3428;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)3783;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 3680875543U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 13298658245203255993ULL : 7548600485896344133ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 6349362564584374212ULL : 6825191576465255766ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)179 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2750587485649736533ULL : 11787371271568157457ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7233065676746708282LL : 8673919211619867798LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 11418787516747442362ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -64289920;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (short)-18327 : (short)11593;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_37 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_39 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_40 [i_0] = 17509775960306103028ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_42 [i_0] = (unsigned short)17259;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_43 [i_0] = (unsigned short)38774;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = 16434985752325998608ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -195721108 : -1705518041;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -308887994 : -1643888615;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -2891207321486339404LL : 6491520498088655779LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7617119242741316878LL : -1335885527950228457LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (short)-8550 : (short)-32759;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9929568224250066131ULL : 10369791795182423997ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 13007322567105386887ULL : 3448968480692079897ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31710 : (short)2324;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_41 [i_0] [i_1] = -784065920;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
