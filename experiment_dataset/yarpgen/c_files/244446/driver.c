#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8077;
int var_1 = -2129661631;
unsigned long long int var_2 = 6720610768144753663ULL;
unsigned int var_3 = 4155901772U;
unsigned long long int var_4 = 2374177369571183429ULL;
signed char var_5 = (signed char)-61;
unsigned int var_6 = 2187848259U;
int var_7 = -262079011;
long long int var_8 = -352917491526182049LL;
unsigned long long int var_9 = 4689647436507172327ULL;
signed char var_10 = (signed char)-56;
signed char var_11 = (signed char)-94;
unsigned int var_12 = 2411459870U;
unsigned long long int var_13 = 1530342187060944852ULL;
unsigned int var_14 = 628692714U;
unsigned long long int var_15 = 7488271490397504939ULL;
int zero = 0;
int var_16 = -2002186214;
long long int var_17 = -5500688502385060440LL;
int var_18 = -1844276855;
int var_19 = -986423454;
unsigned int var_20 = 2544046016U;
unsigned long long int var_21 = 14926815401087731723ULL;
signed char var_22 = (signed char)-127;
unsigned int var_23 = 2892793062U;
unsigned char var_24 = (unsigned char)170;
unsigned long long int var_25 = 9883546270771629049ULL;
unsigned int var_26 = 3152887920U;
unsigned int var_27 = 3844268660U;
unsigned long long int var_28 = 16988302236800041107ULL;
signed char var_29 = (signed char)-32;
signed char var_30 = (signed char)26;
unsigned long long int var_31 = 4560945180139421188ULL;
unsigned int var_32 = 3210478244U;
int var_33 = 1538256228;
signed char var_34 = (signed char)2;
signed char var_35 = (signed char)5;
unsigned int var_36 = 4252915868U;
unsigned int var_37 = 953871407U;
unsigned long long int var_38 = 2146199815529702420ULL;
short var_39 = (short)-22770;
unsigned long long int var_40 = 9256734307427477237ULL;
unsigned long long int var_41 = 4650738120057627229ULL;
signed char var_42 = (signed char)-12;
unsigned int var_43 = 559967947U;
unsigned int var_44 = 3237619043U;
unsigned char var_45 = (unsigned char)51;
unsigned long long int var_46 = 12824061734184679126ULL;
unsigned long long int var_47 = 10689709986481967841ULL;
unsigned int var_48 = 2134355729U;
unsigned long long int var_49 = 1109095965460003564ULL;
unsigned short var_50 = (unsigned short)37875;
unsigned long long int var_51 = 14603307960664976846ULL;
unsigned long long int var_52 = 11474107102209928899ULL;
signed char var_53 = (signed char)18;
unsigned int var_54 = 780782243U;
signed char var_55 = (signed char)124;
unsigned int var_56 = 231971591U;
signed char var_57 = (signed char)109;
unsigned long long int var_58 = 5658385166884123612ULL;
unsigned long long int var_59 = 14182262998656667540ULL;
unsigned short var_60 = (unsigned short)33617;
_Bool var_61 = (_Bool)1;
unsigned int var_62 = 50058485U;
unsigned long long int var_63 = 7382860770981668058ULL;
unsigned char var_64 = (unsigned char)12;
_Bool var_65 = (_Bool)0;
signed char var_66 = (signed char)-2;
unsigned char var_67 = (unsigned char)129;
unsigned long long int var_68 = 1862109435201771920ULL;
signed char var_69 = (signed char)88;
unsigned long long int var_70 = 17687710601036882360ULL;
int var_71 = 1209131079;
unsigned short var_72 = (unsigned short)57790;
unsigned long long int var_73 = 16155799325109891089ULL;
_Bool var_74 = (_Bool)0;
unsigned long long int arr_0 [11] [11] ;
unsigned long long int arr_2 [11] [11] [11] ;
signed char arr_3 [11] ;
unsigned char arr_4 [11] [11] [11] ;
unsigned long long int arr_8 [11] ;
unsigned int arr_12 [11] [11] [11] ;
unsigned int arr_13 [11] [11] [11] [11] ;
unsigned char arr_14 [11] [11] [11] [11] ;
unsigned long long int arr_32 [20] ;
short arr_33 [20] [20] ;
unsigned char arr_34 [17] ;
unsigned long long int arr_35 [17] ;
unsigned long long int arr_36 [17] [17] ;
signed char arr_37 [17] [17] ;
unsigned char arr_38 [17] ;
int arr_39 [17] ;
unsigned int arr_40 [17] [17] [17] [17] ;
unsigned long long int arr_42 [17] [17] [17] [17] ;
unsigned long long int arr_43 [17] [17] [17] [17] ;
unsigned short arr_45 [17] [17] [17] [17] ;
short arr_46 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_47 [17] [17] [17] [17] ;
signed char arr_49 [17] [17] [17] [17] [17] ;
unsigned long long int arr_51 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_52 [17] ;
signed char arr_54 [17] [17] ;
unsigned long long int arr_55 [17] [17] [17] ;
unsigned int arr_58 [17] ;
unsigned long long int arr_59 [17] [17] [17] [17] [17] ;
unsigned long long int arr_60 [17] ;
unsigned int arr_63 [17] [17] [17] ;
unsigned int arr_64 [17] [17] [17] [17] ;
unsigned long long int arr_68 [17] [17] [17] [17] [17] [17] ;
signed char arr_70 [17] [17] [17] [17] [17] ;
unsigned long long int arr_75 [17] [17] [17] ;
unsigned long long int arr_76 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_81 [24] [24] ;
unsigned int arr_82 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 10658003555059967794ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11279614167427814697ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 11001420991412860560ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 417365289U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3360055462U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = 6846039460041132799ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = (short)29328;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_34 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = 13660946704465245779ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 9548745354899992302ULL : 3623232647125932069ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-11 : (signed char)108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_38 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_39 [i_0] = -540783818;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 1757510210U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 5215429779569249302ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 1767329917686774216ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11176;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-10235;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4170143595U : 4071586479U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-33 : (signed char)-96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 11883155072797602270ULL : 12975222288943971622ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 553294959903438646ULL : 10914204799521518047ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_54 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = 15208417854899050196ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_58 [i_0] = 1654243646U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = 5983314125067071229ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_60 [i_0] = 308749376153391495ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = 872630521U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2007206157U : 3807441225U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 12506624946407795560ULL : 3176346419587498132ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = 12843336885919522724ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7441805690260725211ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_81 [i_0] [i_1] = 11353156189340667721ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_82 [i_0] [i_1] = 1651895412U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
