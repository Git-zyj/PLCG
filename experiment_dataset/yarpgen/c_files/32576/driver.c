#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4088974189U;
short var_2 = (short)-29334;
short var_3 = (short)-24926;
long long int var_4 = -8549824032613868840LL;
unsigned int var_5 = 1126450386U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)35526;
long long int var_9 = -7810646401176265036LL;
long long int var_10 = 6540204396180838411LL;
int zero = 0;
unsigned int var_11 = 2719701279U;
int var_12 = 407301871;
unsigned long long int var_13 = 10638748591066809708ULL;
unsigned int var_14 = 4290766038U;
unsigned long long int var_15 = 10567823818109113530ULL;
unsigned long long int var_16 = 16378458681927628356ULL;
unsigned int var_17 = 3339832888U;
short var_18 = (short)-13659;
unsigned short var_19 = (unsigned short)25688;
long long int var_20 = 7472339458641220878LL;
unsigned int var_21 = 3145847859U;
unsigned long long int var_22 = 16057150684089188476ULL;
int var_23 = -1120790652;
unsigned short var_24 = (unsigned short)51570;
short var_25 = (short)7011;
unsigned int var_26 = 1894630284U;
unsigned short var_27 = (unsigned short)50028;
unsigned short var_28 = (unsigned short)25756;
unsigned int var_29 = 749943104U;
unsigned int var_30 = 3854070445U;
unsigned long long int var_31 = 14998191529300337121ULL;
short var_32 = (short)24798;
int var_33 = -733665794;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
unsigned int var_36 = 2719958649U;
unsigned long long int var_37 = 14495826988226875980ULL;
unsigned int var_38 = 2242400368U;
unsigned short var_39 = (unsigned short)8812;
unsigned short var_40 = (unsigned short)36932;
int var_41 = 131674852;
unsigned long long int var_42 = 3434694816112929298ULL;
unsigned int var_43 = 3294742716U;
unsigned long long int var_44 = 5431563918290503793ULL;
unsigned short var_45 = (unsigned short)41989;
signed char var_46 = (signed char)-80;
long long int var_47 = 4945976060119293918LL;
unsigned short var_48 = (unsigned short)3672;
_Bool var_49 = (_Bool)1;
unsigned short var_50 = (unsigned short)11354;
unsigned int var_51 = 2508342345U;
unsigned short var_52 = (unsigned short)37988;
_Bool var_53 = (_Bool)0;
_Bool var_54 = (_Bool)0;
unsigned char var_55 = (unsigned char)129;
unsigned int var_56 = 2928134498U;
unsigned int var_57 = 3712968119U;
long long int var_58 = 4798653523253438185LL;
unsigned char var_59 = (unsigned char)19;
_Bool var_60 = (_Bool)1;
unsigned char var_61 = (unsigned char)183;
int var_62 = 231886267;
unsigned long long int var_63 = 16376316904454442792ULL;
unsigned int var_64 = 1799618890U;
short var_65 = (short)23130;
_Bool var_66 = (_Bool)0;
unsigned int var_67 = 782813189U;
short var_68 = (short)-3962;
unsigned int var_69 = 3807968806U;
unsigned int var_70 = 2892317359U;
signed char var_71 = (signed char)-11;
long long int var_72 = -6465617164658827818LL;
_Bool var_73 = (_Bool)1;
short var_74 = (short)24950;
unsigned int var_75 = 617247358U;
short var_76 = (short)1580;
unsigned short var_77 = (unsigned short)64915;
short var_78 = (short)1843;
unsigned short var_79 = (unsigned short)47965;
unsigned short var_80 = (unsigned short)62320;
_Bool var_81 = (_Bool)1;
unsigned int var_82 = 3857021377U;
_Bool var_83 = (_Bool)0;
long long int var_84 = -8729017772001913431LL;
long long int var_85 = 5017052010190994018LL;
unsigned int var_86 = 2864762194U;
short var_87 = (short)32604;
unsigned char var_88 = (unsigned char)228;
_Bool var_89 = (_Bool)0;
_Bool var_90 = (_Bool)0;
unsigned char var_91 = (unsigned char)49;
_Bool var_92 = (_Bool)0;
long long int var_93 = -451160979857796394LL;
unsigned int var_94 = 871206972U;
short var_95 = (short)23353;
unsigned int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
_Bool arr_2 [19] ;
unsigned long long int arr_3 [19] ;
_Bool arr_5 [19] ;
unsigned short arr_6 [19] [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
unsigned short arr_9 [19] [19] [19] [19] ;
unsigned short arr_14 [19] ;
unsigned int arr_15 [19] ;
long long int arr_18 [19] ;
long long int arr_21 [19] [19] [19] [19] ;
unsigned short arr_22 [19] [19] [19] [19] [19] ;
unsigned int arr_23 [19] [19] [19] ;
long long int arr_24 [19] [19] [19] [19] [19] [19] [19] ;
_Bool arr_26 [19] [19] [19] [19] [19] ;
unsigned short arr_27 [19] [19] ;
int arr_28 [19] [19] [19] [19] ;
unsigned long long int arr_29 [19] [19] [19] [19] [19] ;
unsigned long long int arr_32 [19] [19] [19] [19] [19] ;
unsigned int arr_33 [19] [19] [19] [19] [19] ;
unsigned long long int arr_35 [19] [19] ;
long long int arr_38 [19] [19] [19] [19] ;
_Bool arr_41 [19] [19] [19] [19] ;
unsigned int arr_43 [19] [19] ;
unsigned int arr_47 [19] [19] ;
_Bool arr_48 [19] [19] [19] [19] [19] [19] ;
long long int arr_50 [19] [19] [19] [19] [19] ;
unsigned long long int arr_51 [19] [19] [19] [19] ;
unsigned short arr_52 [19] [19] [19] [19] ;
unsigned short arr_62 [19] [19] [19] ;
unsigned char arr_63 [19] ;
unsigned int arr_64 [19] ;
unsigned int arr_67 [19] [19] [19] [19] ;
unsigned long long int arr_71 [19] [19] [19] ;
int arr_73 [19] [19] [19] ;
unsigned int arr_80 [19] [19] ;
unsigned int arr_83 [19] [19] ;
long long int arr_85 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2812002479U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 12539016365502270495ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 6388922148187289778ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)34755;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8025957438799919564ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62908;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned short)49611;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 1436600465U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = -7950018617745232121LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -859180330391962292LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)59975;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 2551517026U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -383167961358289546LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18890 : (unsigned short)28368;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -1899717299;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 9655546836293941557ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 13570898840576652335ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 3982431866U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = 9882049024641329133ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = -2522246114619298060LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_43 [i_0] [i_1] = 3118389958U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_47 [i_0] [i_1] = (i_1 % 2 == 0) ? 3859513227U : 2247944037U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = -4250489458357252323LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = 14848406175884522284ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59650;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (unsigned short)45932;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_63 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_64 [i_0] = 3946747118U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = 3154555496U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_71 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3348062080066107947ULL : 852833809784982995ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 745321529 : 533254722;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_80 [i_0] [i_1] = 3414831639U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_83 [i_0] [i_1] = 3309788048U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_85 [i_0] = -8952945605973557006LL;
}

void checksum() {
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
    hash(&seed, var_95);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
