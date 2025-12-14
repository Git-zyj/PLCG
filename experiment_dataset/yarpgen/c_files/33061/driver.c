#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3002721510992616465ULL;
unsigned long long int var_2 = 4446664634772764074ULL;
unsigned long long int var_3 = 8656752216970343803ULL;
unsigned long long int var_4 = 10820903871197698551ULL;
long long int var_5 = -881665531326297049LL;
unsigned long long int var_6 = 13321856608245690889ULL;
unsigned long long int var_7 = 13233185201619265222ULL;
long long int var_8 = 8504138519960722661LL;
unsigned long long int var_9 = 8950578952661281201ULL;
unsigned long long int var_10 = 15104462009807528802ULL;
long long int var_11 = -1449503081288044203LL;
int var_12 = -1604146470;
int var_13 = 864446990;
unsigned long long int var_14 = 14472013669965118297ULL;
int var_15 = 1476893492;
int var_16 = -1577767427;
long long int var_17 = 410046225252875724LL;
long long int var_18 = -7411815819404192945LL;
int zero = 0;
unsigned long long int var_19 = 1523789759817798931ULL;
unsigned long long int var_20 = 1197730905742196940ULL;
long long int var_21 = 7320047418627040471LL;
int var_22 = -1161313529;
unsigned long long int var_23 = 9348793587835453106ULL;
long long int var_24 = -3664967867986009897LL;
long long int var_25 = 6340057555094596258LL;
long long int var_26 = 6164977501681141983LL;
int var_27 = 1290309014;
long long int var_28 = 970778017135147162LL;
long long int var_29 = -6373851287624605181LL;
long long int var_30 = 896564153951497031LL;
long long int var_31 = 2146074981124785227LL;
int var_32 = 612437706;
int var_33 = 1911242935;
long long int var_34 = 9013953819453905272LL;
int var_35 = -1667011437;
long long int var_36 = 9050864872604100465LL;
long long int var_37 = 4147658809928918103LL;
unsigned long long int var_38 = 9609548784746625768ULL;
int var_39 = -1880108059;
unsigned long long int var_40 = 10138824476613740564ULL;
long long int var_41 = -3300842666269231255LL;
int var_42 = 1588695735;
unsigned long long int var_43 = 286056621059459441ULL;
int var_44 = 826062185;
long long int var_45 = -6253019976945071584LL;
int var_46 = -2118159318;
long long int var_47 = 5271386838252524987LL;
unsigned long long int var_48 = 7228307886393136113ULL;
long long int var_49 = -1753551028321786902LL;
unsigned long long int var_50 = 17994758526447097643ULL;
long long int var_51 = -5976841557404015322LL;
int var_52 = 987462153;
int var_53 = 1716213004;
unsigned long long int var_54 = 6125261645924681980ULL;
int var_55 = -2143685013;
int var_56 = 1394536246;
int var_57 = -1484091386;
unsigned long long int var_58 = 10157042789845784259ULL;
int var_59 = 2089141142;
unsigned long long int var_60 = 857934375285761980ULL;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_3 [12] ;
int arr_5 [12] [12] [12] ;
unsigned long long int arr_6 [12] [12] [12] [12] ;
unsigned long long int arr_7 [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] [12] [12] ;
long long int arr_9 [12] ;
long long int arr_11 [12] [12] [12] [12] [12] ;
long long int arr_12 [12] [12] [12] ;
unsigned long long int arr_14 [12] [12] [12] ;
int arr_18 [24] [24] ;
unsigned long long int arr_20 [24] [24] ;
long long int arr_21 [24] ;
unsigned long long int arr_23 [24] ;
long long int arr_24 [24] [24] [24] ;
long long int arr_25 [24] [24] ;
unsigned long long int arr_26 [24] [24] ;
long long int arr_27 [24] [24] [24] [24] ;
long long int arr_28 [24] [24] [24] [24] ;
int arr_30 [24] [24] [24] [24] ;
long long int arr_31 [24] [24] [24] [24] ;
long long int arr_32 [24] [24] [24] [24] [24] ;
int arr_34 [24] ;
unsigned long long int arr_35 [24] [24] [24] [24] [24] ;
int arr_38 [24] [24] [24] [24] ;
unsigned long long int arr_40 [24] [24] [24] [24] [24] [24] ;
int arr_41 [24] [24] [24] [24] [24] ;
long long int arr_43 [24] [24] [24] ;
unsigned long long int arr_47 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 13003397327425661393ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 7497249163157500578ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3379800809223280379ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 12304771932491265573ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -36529042;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 16836890071351171442ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15355213909619077004ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 920312254327362906ULL : 14594708330030438451ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 4978474319206984523LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 5492942298744177703LL : 8989990460936025756LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -2217420501955556944LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 7701560414606525976ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = -983245496;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = 120975894500284349ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 5650774831637503812LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 1832561079225569502ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -5496244582004397558LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = -1612907373834848036LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = 17697593895892699405ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = -5988091274928397311LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 5941309631071994175LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = -1182522454;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = -8574298556492584086LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 7277922235174345663LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 24858287;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 16641297953070382308ULL : 9189131905953045414ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = -1301040819;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 6120196414972691379ULL : 12680616576545395974ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1217404754 : -1363441027;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 1687590708021118884LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? 3201541921188404626ULL : 15170452447978277080ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
