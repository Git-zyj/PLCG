#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1512009853;
unsigned char var_1 = (unsigned char)129;
short var_2 = (short)9064;
unsigned int var_3 = 259308096U;
short var_4 = (short)19383;
long long int var_5 = -1012150967079390558LL;
short var_7 = (short)4808;
unsigned char var_8 = (unsigned char)56;
unsigned char var_9 = (unsigned char)95;
unsigned char var_11 = (unsigned char)79;
unsigned char var_12 = (unsigned char)197;
int var_13 = 1618359589;
int var_14 = -1495607280;
int zero = 0;
unsigned int var_15 = 33271798U;
short var_16 = (short)-25095;
long long int var_17 = -6141754169819998472LL;
long long int var_18 = 5366555524278261888LL;
int var_19 = 1833242567;
unsigned long long int var_20 = 17073694147083560721ULL;
unsigned long long int var_21 = 17269717153398667793ULL;
unsigned int var_22 = 2860699368U;
long long int var_23 = -5797306134405533200LL;
short var_24 = (short)1467;
unsigned int var_25 = 1723633416U;
unsigned long long int var_26 = 15254814046344152242ULL;
short var_27 = (short)-26725;
unsigned long long int var_28 = 7540881985751123369ULL;
short var_29 = (short)31949;
int var_30 = 219336350;
short var_31 = (short)-10225;
unsigned long long int var_32 = 2513125570783335215ULL;
unsigned int var_33 = 555053247U;
unsigned int var_34 = 3617503463U;
short var_35 = (short)-22013;
unsigned long long int var_36 = 13919627484457426168ULL;
unsigned char var_37 = (unsigned char)5;
int var_38 = -169918363;
short var_39 = (short)11087;
int var_40 = -158937324;
unsigned long long int var_41 = 13106549676938606131ULL;
long long int var_42 = 838999436215089463LL;
unsigned int var_43 = 2931544713U;
short var_44 = (short)283;
unsigned char var_45 = (unsigned char)188;
long long int var_46 = 4840558104423382468LL;
unsigned char var_47 = (unsigned char)123;
short var_48 = (short)-28012;
int var_49 = 2014617905;
int var_50 = 774076032;
long long int var_51 = -7338985136499442628LL;
int var_52 = 166375405;
unsigned long long int var_53 = 9201050806278310294ULL;
unsigned char arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
unsigned char arr_3 [14] ;
int arr_4 [14] [14] [14] ;
short arr_5 [14] [14] [14] ;
unsigned long long int arr_6 [14] [14] ;
unsigned long long int arr_7 [14] [14] ;
short arr_8 [14] ;
unsigned char arr_9 [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] [14] ;
int arr_11 [14] [14] ;
unsigned char arr_12 [14] [14] ;
unsigned long long int arr_15 [14] [14] ;
unsigned char arr_16 [14] [14] [14] ;
short arr_17 [14] [14] [14] ;
long long int arr_19 [14] [14] [14] ;
unsigned int arr_21 [14] ;
long long int arr_22 [14] [14] [14] ;
long long int arr_25 [14] ;
unsigned char arr_28 [14] [14] [14] [14] ;
unsigned char arr_29 [14] ;
unsigned long long int arr_30 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_33 [14] [14] [14] [14] [14] [14] [14] ;
short arr_35 [14] [14] ;
unsigned long long int arr_36 [14] ;
unsigned char arr_40 [14] [14] [14] ;
short arr_43 [14] ;
short arr_50 [14] ;
short arr_54 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_55 [14] ;
unsigned long long int arr_62 [25] ;
unsigned long long int arr_63 [25] ;
long long int arr_64 [25] ;
int arr_65 [25] ;
int arr_69 [25] [25] ;
unsigned char arr_75 [25] [25] ;
short arr_77 [25] ;
unsigned char arr_82 [12] ;
unsigned long long int arr_84 [12] [12] [12] ;
long long int arr_13 [14] ;
unsigned long long int arr_14 [14] ;
long long int arr_18 [14] [14] ;
short arr_34 [14] [14] [14] [14] [14] ;
unsigned int arr_37 [14] ;
short arr_44 [14] ;
short arr_53 [14] [14] ;
unsigned int arr_56 [14] [14] [14] [14] ;
int arr_60 [14] ;
long long int arr_61 [14] [14] ;
unsigned char arr_66 [25] ;
short arr_67 [25] ;
short arr_68 [25] ;
unsigned long long int arr_78 [25] [25] [25] [25] ;
short arr_79 [25] [25] ;
unsigned int arr_80 [25] [25] [25] ;
unsigned long long int arr_81 [25] ;
unsigned char arr_90 [12] [12] [12] ;
unsigned long long int arr_95 [12] [12] [12] ;
unsigned char arr_96 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -447048592;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)10406;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 8175731935148878096ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 13243649742573854677ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)24997;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 2120473301741323785ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = -1168462439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 9790546610761944128ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-27597;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -3421396433695757379LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 3803718816U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 3172936309294097151LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = -2368028187243224854LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2574209141555657925ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6231103967432378045ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = (short)17103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = 4361172181491459847ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (short)25105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_50 [i_0] = (short)-26783;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)-25152 : (short)-2844;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_55 [i_0] = 8020971053682933935ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_62 [i_0] = 9166550621964355336ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_63 [i_0] = 2002976788436387001ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_64 [i_0] = 5381320878844704541LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_65 [i_0] = 2132931939;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_69 [i_0] [i_1] = -760044576;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_75 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_77 [i_0] = (short)1020;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_82 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_84 [i_0] [i_1] [i_2] = 3361104989806538481ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -8528838782691377837LL : -3352083984737903440LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 13105533333176244772ULL : 12082919910663912805ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -3580443162139340195LL : 6947380830153738529LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-24400 : (short)5002;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = 3166695407U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_44 [i_0] = (short)2917;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_53 [i_0] [i_1] = (short)-3679;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1559446486U : 2956259280U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_60 [i_0] = -495189511;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_61 [i_0] [i_1] = -6235645564253085963LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_66 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_67 [i_0] = (short)16254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_68 [i_0] = (short)20451;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 14541393908509034289ULL : 4241564110159191756ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_79 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23058 : (short)-27688;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_80 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1154355242U : 471636010U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_81 [i_0] = 11870051837654068875ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_90 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_95 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3840193938412978962ULL : 1959048118947751745ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_96 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)231 : (unsigned char)46;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_78 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_79 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_80 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_81 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_90 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_95 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_96 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
