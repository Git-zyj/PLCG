#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9777;
unsigned long long int var_1 = 10817150633456020741ULL;
long long int var_2 = 8058466199503675645LL;
unsigned long long int var_3 = 9268164419169008013ULL;
unsigned short var_4 = (unsigned short)47049;
int var_5 = 248752126;
unsigned short var_6 = (unsigned short)4069;
unsigned long long int var_7 = 4259528326456723476ULL;
unsigned long long int var_8 = 2238679337516745771ULL;
short var_9 = (short)-12087;
long long int var_10 = 210229850165036805LL;
long long int var_11 = -4573619354054112026LL;
unsigned char var_12 = (unsigned char)151;
short var_13 = (short)-4944;
int zero = 0;
long long int var_14 = -7120077685116250000LL;
int var_15 = 1292453985;
int var_16 = -1819427808;
unsigned long long int var_17 = 6409309500756192925ULL;
unsigned char var_18 = (unsigned char)207;
unsigned short var_19 = (unsigned short)54744;
long long int var_20 = -5475250158946956393LL;
unsigned long long int var_21 = 4489759319966428877ULL;
unsigned char var_22 = (unsigned char)191;
unsigned long long int var_23 = 13443716460014215189ULL;
unsigned long long int var_24 = 3252763170644065334ULL;
unsigned long long int var_25 = 9038062942264512580ULL;
short var_26 = (short)-4541;
unsigned short var_27 = (unsigned short)31676;
unsigned long long int var_28 = 16264710973629011538ULL;
short var_29 = (short)-657;
unsigned char var_30 = (unsigned char)234;
unsigned long long int var_31 = 5475125413760732359ULL;
unsigned long long int var_32 = 1775146256150824366ULL;
int var_33 = -1622845614;
short var_34 = (short)-15516;
int var_35 = 208536531;
long long int var_36 = -7212499637236673757LL;
int var_37 = -50942712;
unsigned char var_38 = (unsigned char)6;
short var_39 = (short)-12324;
unsigned char var_40 = (unsigned char)115;
unsigned long long int var_41 = 14437129088500339905ULL;
short var_42 = (short)-10495;
long long int var_43 = -7807051219865836472LL;
int var_44 = 1210441269;
unsigned long long int var_45 = 6162733288083979863ULL;
int var_46 = 502360141;
unsigned char var_47 = (unsigned char)98;
unsigned char var_48 = (unsigned char)146;
short var_49 = (short)11173;
long long int var_50 = -9114755781066922844LL;
short var_51 = (short)22694;
unsigned long long int var_52 = 6185103180280334063ULL;
unsigned short arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_6 [16] ;
short arr_7 [18] ;
unsigned long long int arr_9 [18] ;
int arr_11 [18] ;
long long int arr_12 [18] ;
unsigned long long int arr_13 [18] ;
short arr_14 [18] ;
unsigned char arr_18 [13] ;
unsigned long long int arr_19 [13] ;
unsigned short arr_21 [13] ;
unsigned short arr_22 [13] [13] [13] ;
short arr_28 [13] [13] [13] ;
int arr_29 [13] ;
long long int arr_30 [13] [13] [13] [13] [13] [13] ;
short arr_31 [13] [13] ;
short arr_33 [13] [13] [13] ;
long long int arr_34 [13] [13] [13] [13] [13] ;
unsigned char arr_43 [13] ;
unsigned char arr_45 [13] ;
unsigned char arr_46 [13] [13] ;
unsigned char arr_53 [13] [13] [13] ;
unsigned long long int arr_4 [23] ;
int arr_10 [18] ;
unsigned char arr_15 [18] ;
unsigned long long int arr_16 [18] ;
unsigned short arr_17 [18] ;
unsigned long long int arr_20 [13] ;
unsigned char arr_23 [13] [13] [13] ;
unsigned char arr_24 [13] [13] ;
unsigned long long int arr_27 [13] [13] [13] ;
int arr_32 [13] [13] [13] [13] ;
unsigned short arr_37 [13] [13] [13] [13] [13] ;
long long int arr_41 [13] [13] [13] [13] ;
short arr_47 [13] ;
int arr_52 [13] [13] [13] ;
int arr_56 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)17755;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8417234885221207853LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1892504101241645934ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)25151;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 13409077027390107159ULL : 1586932150551914024ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -372453511 : -1790695138;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 5890501156864974639LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 16530076805853307214ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-1237 : (short)28144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = 9589239817342310117ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (unsigned short)46522;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)14100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-10977 : (short)-17910;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -952635607 : -632894741;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -6866287402777732768LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)7619 : (short)-513;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (short)19490;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -1264488286991757431LL : -5237006885728829019LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 14892259179512176634ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -594428604 : 398718370;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 5319081075162760460ULL : 2352081777844447916ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48329 : (unsigned short)10956;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = 3354167311217137004ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)141 : (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)108 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11321987543861441569ULL : 16376740114679331674ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1590144529 : 1566486917;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)28591 : (unsigned short)59145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3086714070266551761LL : -686488313741172011LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_47 [i_0] = (short)-2190;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -242224292 : 293610317;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? 42747516 : -1390936291;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
