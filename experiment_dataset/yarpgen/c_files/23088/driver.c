#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
short var_2 = (short)30353;
unsigned int var_3 = 1935814168U;
unsigned char var_4 = (unsigned char)77;
unsigned char var_5 = (unsigned char)210;
unsigned long long int var_6 = 6389863958029311628ULL;
unsigned short var_8 = (unsigned short)44131;
unsigned long long int var_9 = 10365003832756954308ULL;
unsigned int var_10 = 2931784996U;
short var_11 = (short)-11844;
short var_12 = (short)-28051;
unsigned char var_13 = (unsigned char)240;
short var_15 = (short)5671;
unsigned int var_16 = 653454690U;
unsigned long long int var_17 = 16540524397159925328ULL;
short var_18 = (short)29182;
int zero = 0;
unsigned char var_20 = (unsigned char)74;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3183605122308671446LL;
unsigned int var_23 = 1355966181U;
unsigned char var_24 = (unsigned char)164;
signed char var_25 = (signed char)-23;
unsigned char var_26 = (unsigned char)219;
unsigned int var_27 = 2217202453U;
short var_28 = (short)-14487;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)57510;
_Bool var_32 = (_Bool)0;
short var_33 = (short)-19265;
unsigned int var_34 = 1816265504U;
short var_35 = (short)23101;
int var_36 = -1703555540;
unsigned long long int var_37 = 14670115906441810714ULL;
signed char var_38 = (signed char)74;
unsigned long long int var_39 = 11429178874462079083ULL;
unsigned long long int var_40 = 6755859824296621152ULL;
short var_41 = (short)-13376;
short var_42 = (short)-8496;
unsigned short var_43 = (unsigned short)62478;
unsigned char var_44 = (unsigned char)215;
unsigned int var_45 = 619241588U;
unsigned int var_46 = 2695057097U;
int var_47 = -24879482;
unsigned long long int var_48 = 13664485508283444848ULL;
long long int var_49 = -5741525896779441078LL;
signed char var_50 = (signed char)-93;
unsigned long long int var_51 = 1190679184000490445ULL;
unsigned int var_52 = 2239497498U;
signed char var_53 = (signed char)98;
unsigned char var_54 = (unsigned char)197;
unsigned int var_55 = 2845533093U;
unsigned int var_56 = 384720147U;
unsigned long long int var_57 = 17930970229473021295ULL;
unsigned int var_58 = 1360652524U;
unsigned char var_59 = (unsigned char)0;
signed char var_60 = (signed char)-114;
long long int var_61 = 581773617542422437LL;
unsigned long long int var_62 = 1455702461427886924ULL;
signed char var_63 = (signed char)57;
unsigned long long int var_64 = 13796422816477426677ULL;
unsigned long long int var_65 = 5000578892974159585ULL;
short var_66 = (short)-21456;
unsigned int var_67 = 2890688371U;
unsigned int var_68 = 1015391808U;
short var_69 = (short)-24875;
short var_70 = (short)-19992;
unsigned char var_71 = (unsigned char)227;
short var_72 = (short)-30715;
unsigned short var_73 = (unsigned short)27471;
unsigned long long int var_74 = 11285172543267573838ULL;
unsigned char arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned char arr_2 [15] [15] [15] ;
unsigned int arr_3 [15] [15] [15] ;
unsigned char arr_4 [15] [15] [15] ;
unsigned char arr_5 [15] [15] ;
unsigned int arr_8 [15] [15] [15] [15] ;
unsigned short arr_9 [15] [15] [15] [15] [15] [15] ;
short arr_10 [15] [15] [15] [15] [15] [15] ;
short arr_11 [15] [15] [15] [15] ;
short arr_12 [15] [15] [15] [15] [15] ;
int arr_15 [15] [15] [15] [15] [15] ;
_Bool arr_16 [15] [15] [15] [15] [15] ;
unsigned int arr_17 [15] [15] [15] [15] ;
signed char arr_22 [15] [15] [15] [15] [15] ;
short arr_23 [15] ;
_Bool arr_27 [15] [15] ;
int arr_32 [15] [15] [15] [15] [15] ;
int arr_33 [15] [15] [15] [15] [15] [15] [15] ;
short arr_43 [15] [15] ;
int arr_48 [22] [22] ;
unsigned long long int arr_50 [22] ;
unsigned int arr_51 [22] [22] [22] ;
short arr_52 [22] ;
unsigned int arr_54 [22] [22] [22] [22] ;
_Bool arr_55 [22] [22] [22] [22] ;
unsigned char arr_57 [22] ;
signed char arr_63 [22] ;
_Bool arr_66 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)135 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1500613187 : -1927980268;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3299250943U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)107 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1429583611U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)50434 : (unsigned short)21549;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)-31112 : (short)15469;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)16900;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)343;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -422609189 : -1695592079;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 297160302U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (short)-1350;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = -428260208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 919783826 : -365480342;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_43 [i_0] [i_1] = (short)3796;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_48 [i_0] [i_1] = -80458910;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? 7005598992463440989ULL : 15792563032980948642ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 2394903122U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = (short)20159;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 607118554U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_57 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_63 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
