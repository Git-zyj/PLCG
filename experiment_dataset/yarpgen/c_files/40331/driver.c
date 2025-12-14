#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12408178433930226865ULL;
unsigned long long int var_1 = 4915349486542508760ULL;
unsigned int var_2 = 2624364834U;
short var_3 = (short)-24897;
unsigned int var_4 = 1972803480U;
unsigned char var_5 = (unsigned char)106;
unsigned long long int var_6 = 6807252667331381763ULL;
unsigned int var_7 = 1277021095U;
unsigned int var_8 = 63334684U;
unsigned int var_9 = 2654958764U;
short var_10 = (short)-21133;
unsigned int var_11 = 3365338202U;
short var_12 = (short)-24317;
unsigned int var_13 = 1011219842U;
unsigned int var_15 = 3251305721U;
unsigned char var_16 = (unsigned char)188;
unsigned char var_17 = (unsigned char)30;
short var_18 = (short)-30780;
int zero = 0;
unsigned long long int var_19 = 2001347128242567859ULL;
unsigned int var_20 = 1391031640U;
unsigned long long int var_21 = 6601026973403011990ULL;
unsigned int var_22 = 903291692U;
unsigned long long int var_23 = 5772008101761090116ULL;
unsigned long long int var_24 = 12428768883005963815ULL;
short var_25 = (short)9683;
unsigned long long int var_26 = 12874849300108389990ULL;
short var_27 = (short)27415;
unsigned int var_28 = 3402563721U;
short var_29 = (short)-15706;
short var_30 = (short)-24733;
unsigned long long int var_31 = 5807320981514429906ULL;
short var_32 = (short)30150;
unsigned long long int var_33 = 15718885039737428511ULL;
short var_34 = (short)21985;
unsigned char var_35 = (unsigned char)130;
unsigned long long int var_36 = 6718976454792475111ULL;
short var_37 = (short)14351;
short var_38 = (short)30929;
unsigned int var_39 = 1444109872U;
short var_40 = (short)-8534;
unsigned int var_41 = 495175001U;
unsigned char var_42 = (unsigned char)34;
unsigned int var_43 = 195582034U;
short var_44 = (short)-12305;
unsigned int var_45 = 3976860197U;
unsigned char var_46 = (unsigned char)242;
unsigned int var_47 = 1582283268U;
unsigned int var_48 = 54269645U;
short var_49 = (short)20777;
short var_50 = (short)-11051;
short var_51 = (short)-30541;
unsigned long long int var_52 = 4729781423420394524ULL;
unsigned char var_53 = (unsigned char)202;
unsigned int var_54 = 916192760U;
unsigned char var_55 = (unsigned char)42;
unsigned long long int var_56 = 6295807298564192369ULL;
unsigned long long int var_57 = 3209553179208021660ULL;
short var_58 = (short)-6637;
unsigned char var_59 = (unsigned char)77;
unsigned int var_60 = 2310915397U;
unsigned long long int var_61 = 6129214931427767099ULL;
unsigned int var_62 = 2210758774U;
unsigned int var_63 = 512005659U;
short var_64 = (short)-29960;
unsigned char var_65 = (unsigned char)169;
unsigned long long int var_66 = 6606600054420181963ULL;
unsigned long long int var_67 = 4359086356522102673ULL;
unsigned int var_68 = 3523885098U;
unsigned int var_69 = 633719039U;
unsigned int var_70 = 2867508029U;
unsigned long long int var_71 = 13096445679601971376ULL;
unsigned long long int var_72 = 12386402225386491022ULL;
unsigned char var_73 = (unsigned char)211;
unsigned int var_74 = 3097828014U;
unsigned long long int var_75 = 14104642213539769008ULL;
unsigned char var_76 = (unsigned char)72;
short var_77 = (short)-27882;
short var_78 = (short)-26320;
short var_79 = (short)-11621;
short var_80 = (short)4187;
unsigned int var_81 = 1736598824U;
unsigned long long int var_82 = 18034027397888317473ULL;
unsigned int var_83 = 796735677U;
short var_84 = (short)14814;
unsigned int var_85 = 2879424126U;
unsigned int var_86 = 55478160U;
unsigned int var_87 = 2810631713U;
short arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
short arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
short arr_5 [21] [21] [21] ;
short arr_6 [21] ;
unsigned int arr_7 [21] [21] [21] [21] [21] ;
unsigned int arr_10 [21] [21] [21] [21] ;
unsigned long long int arr_11 [21] [21] ;
unsigned char arr_12 [21] [21] ;
unsigned char arr_13 [21] [21] [21] [21] ;
unsigned int arr_15 [21] [21] [21] [21] ;
unsigned char arr_18 [21] ;
unsigned long long int arr_20 [21] [21] ;
unsigned int arr_21 [21] [21] [21] [21] [21] [21] ;
short arr_23 [21] [21] ;
unsigned int arr_26 [21] [21] ;
short arr_28 [21] [21] [21] ;
short arr_29 [21] [21] ;
unsigned int arr_31 [21] [21] [21] [21] ;
unsigned long long int arr_33 [21] [21] [21] [21] ;
unsigned int arr_34 [21] [21] [21] ;
unsigned char arr_35 [21] [21] ;
unsigned char arr_36 [21] [21] [21] ;
unsigned char arr_39 [12] [12] ;
unsigned long long int arr_41 [12] [12] [12] ;
unsigned long long int arr_42 [12] [12] ;
unsigned char arr_47 [12] [12] [12] ;
unsigned char arr_51 [12] ;
short arr_52 [12] [12] [12] ;
short arr_55 [12] [12] [12] ;
unsigned long long int arr_60 [12] [12] [12] [12] ;
unsigned char arr_67 [12] [12] [12] [12] [12] [12] [12] ;
unsigned int arr_70 [12] [12] [12] [12] [12] ;
unsigned int arr_71 [12] [12] [12] [12] [12] ;
unsigned char arr_72 [12] [12] [12] [12] ;
unsigned char arr_75 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_8 [21] [21] [21] [21] ;
unsigned int arr_9 [21] [21] ;
unsigned int arr_32 [21] ;
unsigned char arr_37 [21] ;
unsigned long long int arr_45 [12] ;
unsigned char arr_46 [12] [12] ;
short arr_53 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)30877;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 10242199013286569979ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 72023541U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)3883;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 5242395607191136673ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)13736;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)31273;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 4132687464U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2768720275U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 4590948314280215930ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2782918309U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 1076850288304067842ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2193408541U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (short)14312;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = 2528007564U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)25731;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = (short)-25187;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 1032887986U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 17250222762347772435ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 3333401905U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)115 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 14370986001466885924ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? 7708641540187082603ULL : 10034876288838384604ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)135 : (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_51 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (short)24266;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (short)-24377;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = 328190434441594193ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)91 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2359322008U : 604584174U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = 1474740022U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)215 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)203 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 7235265113505307992ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 145192916U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 773781587U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 8183566608999091320ULL : 15336460421688587093ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)89 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)26978 : (short)-3850;
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
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
