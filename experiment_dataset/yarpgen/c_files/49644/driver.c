#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3158689039053494044LL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)16193;
long long int var_8 = 4664782312114564159LL;
unsigned int var_9 = 986080958U;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-357;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4073745240U;
short var_15 = (short)28780;
unsigned int var_16 = 3438246763U;
long long int var_17 = -467535481824341817LL;
long long int var_18 = -6226116805912918488LL;
int zero = 0;
long long int var_19 = 7478371698947136860LL;
long long int var_20 = -4766712543697805953LL;
long long int var_21 = 9058758202608845309LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = 6509085800058396677LL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
long long int var_26 = -83273717208250031LL;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
short var_29 = (short)12765;
short var_30 = (short)-20139;
long long int var_31 = -3209775209610440384LL;
short var_32 = (short)28620;
unsigned int var_33 = 1683274616U;
unsigned int var_34 = 3268845553U;
_Bool var_35 = (_Bool)1;
long long int var_36 = 1026501112826387745LL;
_Bool var_37 = (_Bool)0;
long long int var_38 = 2531662724201007564LL;
long long int var_39 = 3287737733696850323LL;
long long int var_40 = 2927648467405026914LL;
unsigned int var_41 = 2784294253U;
unsigned int var_42 = 1301840754U;
long long int var_43 = -2364443054105389518LL;
unsigned int var_44 = 3474971983U;
_Bool var_45 = (_Bool)0;
long long int var_46 = -5491350871861843488LL;
long long int var_47 = -4055355058205873592LL;
long long int var_48 = 2915241893029510076LL;
_Bool var_49 = (_Bool)0;
unsigned int var_50 = 901455806U;
long long int var_51 = 6641005942592888233LL;
_Bool var_52 = (_Bool)0;
short var_53 = (short)-28399;
long long int var_54 = -7467827106577710926LL;
short var_55 = (short)26566;
_Bool var_56 = (_Bool)0;
long long int var_57 = 5077437293271922037LL;
long long int var_58 = 9038865461839542585LL;
long long int var_59 = -4072670879079023707LL;
long long int var_60 = 5069881053899669315LL;
_Bool var_61 = (_Bool)1;
long long int var_62 = 4507579753526397615LL;
unsigned int var_63 = 210560297U;
long long int var_64 = 6624154150465617246LL;
_Bool var_65 = (_Bool)1;
long long int var_66 = -5007109667869747985LL;
long long int var_67 = -9092041856767444941LL;
_Bool var_68 = (_Bool)1;
short var_69 = (short)15433;
_Bool var_70 = (_Bool)0;
long long int var_71 = -4671165156785742562LL;
short var_72 = (short)10185;
unsigned int var_73 = 3654851449U;
long long int var_74 = -4526742113980309570LL;
long long int var_75 = -254100113312154957LL;
unsigned int var_76 = 100600319U;
unsigned int var_77 = 2363674885U;
unsigned int var_78 = 1259951154U;
long long int var_79 = -7710903934167479369LL;
long long int var_80 = -8257586813726659031LL;
short var_81 = (short)19561;
unsigned int var_82 = 297891206U;
long long int var_83 = 792887922393866431LL;
long long int var_84 = -7651280923109206028LL;
_Bool var_85 = (_Bool)1;
_Bool var_86 = (_Bool)1;
long long int var_87 = -6221987967946231652LL;
_Bool var_88 = (_Bool)1;
long long int var_89 = 461770444334875435LL;
_Bool var_90 = (_Bool)0;
long long int var_91 = -2611441783590309998LL;
long long int var_92 = 2775222699749622512LL;
long long int var_93 = 2781198682118644809LL;
short var_94 = (short)12315;
unsigned int arr_0 [15] [15] ;
long long int arr_2 [15] [15] ;
long long int arr_4 [15] [15] ;
long long int arr_9 [15] [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_11 [15] [15] [15] [15] ;
long long int arr_14 [15] [15] [15] ;
short arr_17 [15] [15] [15] [15] [15] [15] ;
long long int arr_19 [15] [15] [15] [15] ;
long long int arr_21 [15] [15] ;
unsigned int arr_22 [15] [15] [15] [15] [15] [15] ;
short arr_25 [15] [15] [15] [15] ;
long long int arr_28 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_29 [15] [15] [15] [15] [15] ;
_Bool arr_35 [15] [15] [15] [15] ;
unsigned int arr_48 [15] [15] [15] [15] ;
_Bool arr_65 [16] [16] ;
long long int arr_72 [16] [16] [16] [16] ;
short arr_73 [16] [16] [16] [16] [16] ;
_Bool arr_75 [16] [16] [16] [16] [16] ;
unsigned int arr_76 [16] [16] [16] [16] [16] [16] [16] ;
short arr_78 [16] [16] [16] [16] [16] ;
_Bool arr_79 [16] [16] [16] [16] ;
_Bool arr_86 [16] [16] ;
long long int arr_88 [16] [16] [16] [16] [16] ;
unsigned int arr_95 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 1141681220U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 2346971948816899400LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -2786956621055235353LL : 7321417548419233401LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7038945327777612755LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -3981858660607629878LL : -1043823288048957245LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1659648939570360298LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-5240;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -8165403164371635823LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = 381176697670814794LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1932611100U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (short)1421;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -9007136569396487593LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 895759032808881981LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 3545440102U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_65 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = -3477626415808142558LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-7093;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3157529632U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-29888;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_79 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_86 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_88 [i_0] [i_1] [i_2] [i_3] [i_4] = 230003160534441490LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_95 [i_0] [i_1] [i_2] [i_3] [i_4] = 4028321554U;
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
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
