#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8656213041508538776LL;
long long int var_1 = -1223007436164430619LL;
unsigned long long int var_2 = 16528990153577265892ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)19073;
unsigned long long int var_5 = 16955601303759262297ULL;
unsigned long long int var_6 = 1796306720406704423ULL;
unsigned long long int var_7 = 11646624159027046807ULL;
unsigned short var_8 = (unsigned short)40177;
unsigned long long int var_9 = 766864138848066913ULL;
unsigned long long int var_10 = 8748804708600241553ULL;
int var_11 = 19413176;
short var_12 = (short)20459;
unsigned short var_13 = (unsigned short)29394;
int zero = 0;
unsigned long long int var_14 = 7695162720846378085ULL;
unsigned long long int var_15 = 10286831722369902497ULL;
long long int var_16 = -209903697305691826LL;
long long int var_17 = -437108915814308908LL;
short var_18 = (short)8361;
unsigned short var_19 = (unsigned short)30199;
long long int var_20 = 7814453284314860073LL;
unsigned long long int var_21 = 1407227703153414440ULL;
short var_22 = (short)-21785;
signed char var_23 = (signed char)-62;
short var_24 = (short)30051;
unsigned long long int var_25 = 11557693103634710990ULL;
unsigned int var_26 = 864210687U;
unsigned long long int var_27 = 13612126858689303101ULL;
signed char var_28 = (signed char)-114;
unsigned short var_29 = (unsigned short)35619;
unsigned long long int var_30 = 6272573337116943712ULL;
unsigned long long int var_31 = 13535635270117169143ULL;
unsigned short var_32 = (unsigned short)53782;
unsigned long long int var_33 = 6681579252041304220ULL;
short var_34 = (short)21157;
short var_35 = (short)-10568;
unsigned long long int var_36 = 8306456890517865910ULL;
unsigned int var_37 = 1765356421U;
unsigned int var_38 = 1777212290U;
_Bool var_39 = (_Bool)1;
int var_40 = 457288652;
unsigned long long int var_41 = 15334557256077911457ULL;
unsigned short arr_0 [17] ;
unsigned short arr_2 [17] ;
long long int arr_11 [17] [17] [17] [17] ;
unsigned long long int arr_14 [17] [17] [17] [17] [17] [17] ;
long long int arr_17 [18] ;
unsigned long long int arr_18 [18] ;
long long int arr_19 [18] [18] ;
long long int arr_20 [18] ;
unsigned long long int arr_23 [18] [18] [18] ;
long long int arr_28 [18] ;
_Bool arr_30 [18] [18] ;
long long int arr_32 [18] [18] [18] [18] ;
unsigned int arr_38 [18] ;
short arr_42 [18] ;
unsigned long long int arr_43 [25] ;
unsigned long long int arr_44 [25] ;
long long int arr_46 [25] ;
long long int arr_47 [25] [25] ;
unsigned long long int arr_48 [25] [25] [25] [25] ;
unsigned long long int arr_49 [25] [25] [25] ;
long long int arr_50 [25] [25] [25] ;
int arr_51 [25] [25] [25] [25] ;
unsigned long long int arr_52 [25] [25] [25] [25] ;
short arr_53 [25] [25] [25] [25] [25] ;
_Bool arr_54 [25] [25] [25] ;
unsigned long long int arr_56 [25] [25] [25] [25] [25] ;
short arr_57 [25] [25] [25] [25] [25] ;
int arr_66 [18] ;
signed char arr_67 [18] [18] ;
unsigned short arr_5 [17] ;
unsigned long long int arr_22 [18] [18] ;
unsigned int arr_40 [18] [18] [18] [18] ;
long long int arr_55 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_58 [25] [25] [25] [25] [25] [25] [25] ;
long long int arr_61 [19] [19] ;
unsigned short arr_68 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)46388;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)62537;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2160228328758735315LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 15310796482785527916ULL : 14193234151451220986ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = -9134431146080032862LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 14613178925790037205ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = -7824355701648348549LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 7049686648863688889LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12543054662259498647ULL : 5008067543555434431ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -365214096153694833LL : 1095027611890640884LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3725070372155570899LL : -8609406481737335978LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = 2413575182U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (short)-22226;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = 1831038251133983601ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = 15513122760219505395ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? -7560409405631866634LL : -3117997703597991061LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_47 [i_0] [i_1] = -3537277127945667260LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3284772175007868576ULL : 2600778683052036835ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8450213183077845080ULL : 13449719442376544765ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1027351897139997022LL : -3774778757172749657LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1605235443 : -249111020;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7196661468898860730ULL : 16062136490503952296ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-15973;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = 36378760841346118ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-25251;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_66 [i_0] = -920867114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_67 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)39947;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 7784569691462304796ULL : 2509770508310368985ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3072006483U : 4288486276U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -5390917589012933364LL : 4229203502406214176LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 17796937414954601305ULL : 1288481500167755823ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_61 [i_0] [i_1] = 3002291398342629927LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_68 [i_0] [i_1] = (unsigned short)47959;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_68 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
