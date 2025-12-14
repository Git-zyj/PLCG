#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2264853612050227191LL;
int var_1 = 1262471475;
long long int var_2 = -4747667824808963851LL;
long long int var_3 = -3756444535423888919LL;
unsigned short var_4 = (unsigned short)55880;
long long int var_5 = -4794201434900606519LL;
unsigned short var_6 = (unsigned short)38271;
long long int var_7 = -6162953894148656911LL;
unsigned short var_8 = (unsigned short)57310;
long long int var_9 = 5056267900588604895LL;
int zero = 0;
int var_10 = -761550746;
int var_11 = 1236844373;
long long int var_12 = -707172787401311094LL;
unsigned short var_13 = (unsigned short)42179;
long long int var_14 = -425913679348398425LL;
long long int var_15 = -6026527901803493736LL;
unsigned short var_16 = (unsigned short)17683;
int var_17 = 1855159801;
long long int var_18 = -7916935488932851904LL;
long long int var_19 = -3757000907714528497LL;
long long int var_20 = 2210820233647846995LL;
unsigned short var_21 = (unsigned short)29821;
long long int var_22 = 5693386610887068456LL;
unsigned short var_23 = (unsigned short)7710;
unsigned short var_24 = (unsigned short)39467;
int var_25 = 413403926;
long long int var_26 = -1797931846026947026LL;
unsigned short var_27 = (unsigned short)43472;
int var_28 = 2004261017;
long long int var_29 = 5614577866213229006LL;
long long int var_30 = 5483791898560987289LL;
unsigned short var_31 = (unsigned short)29681;
int var_32 = 766605296;
long long int var_33 = -6894434794120659219LL;
int var_34 = 2014580884;
long long int var_35 = -2635265169618049276LL;
unsigned short var_36 = (unsigned short)32710;
unsigned short var_37 = (unsigned short)54138;
long long int var_38 = -505417602118932025LL;
long long int var_39 = -8829536307683980473LL;
long long int var_40 = -4024346790307864459LL;
unsigned short var_41 = (unsigned short)26608;
long long int var_42 = -4590817994174653843LL;
long long int var_43 = -6839208088484888528LL;
long long int var_44 = -9154854918499968076LL;
long long int var_45 = 6228896297158088595LL;
long long int var_46 = -5634474288663620538LL;
unsigned short var_47 = (unsigned short)50997;
long long int var_48 = 3337671866495956997LL;
unsigned short var_49 = (unsigned short)49450;
long long int var_50 = 8811006172286192017LL;
int var_51 = -25733320;
long long int var_52 = 5731673396656088747LL;
unsigned short var_53 = (unsigned short)46863;
long long int var_54 = -4620630231806702874LL;
int var_55 = 410040586;
unsigned short var_56 = (unsigned short)28177;
int var_57 = 785078712;
long long int var_58 = -2994130384387430513LL;
int var_59 = 1709609378;
long long int var_60 = -2852847458106834330LL;
unsigned short var_61 = (unsigned short)24838;
int var_62 = 1815797084;
long long int var_63 = 5908935542069178481LL;
unsigned short var_64 = (unsigned short)58489;
int var_65 = 1184778421;
long long int var_66 = 3151832368430637411LL;
long long int var_67 = 4231531337728050431LL;
long long int var_68 = -3012038113619181408LL;
unsigned short var_69 = (unsigned short)65453;
long long int var_70 = 5865542350252354826LL;
long long int var_71 = 4749788791864666377LL;
long long int var_72 = 4572948117114075855LL;
unsigned short var_73 = (unsigned short)51232;
unsigned short var_74 = (unsigned short)979;
unsigned short var_75 = (unsigned short)63460;
long long int var_76 = 3254777105989335537LL;
long long int var_77 = -5617639140452424301LL;
long long int var_78 = -4990655549418445276LL;
int var_79 = 1458695656;
long long int var_80 = 271913285804463436LL;
unsigned short var_81 = (unsigned short)49660;
long long int var_82 = 2165531977721631436LL;
long long int var_83 = 3247070351272938698LL;
long long int var_84 = -6233303227251606855LL;
long long int var_85 = -3273915694439043045LL;
unsigned short var_86 = (unsigned short)53104;
long long int var_87 = -7056774946928839066LL;
long long int var_88 = -6211041381872704583LL;
long long int arr_0 [14] ;
long long int arr_1 [14] ;
int arr_2 [14] ;
long long int arr_3 [14] ;
unsigned short arr_4 [14] [14] ;
long long int arr_5 [14] [14] [14] [14] ;
unsigned short arr_6 [14] [14] [14] [14] ;
long long int arr_7 [14] [14] [14] [14] ;
long long int arr_9 [14] [14] ;
int arr_10 [14] [14] [14] ;
long long int arr_11 [14] [14] [14] [14] ;
int arr_13 [14] [14] [14] [14] [14] [14] ;
long long int arr_14 [14] ;
long long int arr_16 [14] [14] [14] [14] [14] ;
unsigned short arr_17 [14] [14] [14] [14] ;
unsigned short arr_19 [14] [14] [14] [14] ;
int arr_20 [14] [14] [14] ;
long long int arr_21 [14] [14] [14] [14] ;
unsigned short arr_23 [14] [14] [14] ;
unsigned short arr_24 [14] [14] [14] [14] ;
unsigned short arr_25 [14] ;
long long int arr_26 [14] [14] [14] ;
long long int arr_28 [14] ;
int arr_29 [22] ;
int arr_30 [22] ;
long long int arr_31 [22] [22] ;
int arr_32 [22] ;
long long int arr_33 [22] [22] ;
long long int arr_34 [22] [22] [22] ;
long long int arr_35 [22] [22] [22] [22] ;
int arr_36 [22] [22] [22] ;
int arr_37 [22] [22] [22] [22] ;
long long int arr_38 [22] [22] [22] [22] [22] [22] ;
long long int arr_40 [22] ;
long long int arr_41 [22] [22] [22] ;
int arr_42 [22] [22] [22] ;
long long int arr_43 [22] [22] ;
long long int arr_44 [22] [22] ;
unsigned short arr_45 [22] [22] ;
long long int arr_46 [22] [22] [22] ;
long long int arr_47 [22] [22] ;
long long int arr_48 [22] ;
int arr_49 [22] [22] ;
long long int arr_50 [11] [11] ;
long long int arr_51 [11] [11] ;
unsigned short arr_54 [11] ;
int arr_55 [11] [11] ;
unsigned short arr_56 [11] [11] [11] ;
int arr_57 [11] [11] [11] ;
unsigned short arr_58 [11] [11] [11] ;
long long int arr_59 [11] [11] [11] ;
long long int arr_61 [11] [11] [11] ;
unsigned short arr_62 [11] [11] [11] ;
long long int arr_63 [11] [11] ;
int arr_64 [11] [11] [11] [11] [11] [11] ;
long long int arr_65 [11] [11] [11] ;
unsigned short arr_67 [11] [11] [11] [11] ;
long long int arr_68 [11] [11] [11] [11] [11] ;
int arr_69 [11] [11] [11] ;
unsigned short arr_71 [11] [11] ;
long long int arr_72 [11] [11] [11] ;
int arr_73 [11] ;
int arr_76 [11] [11] [11] ;
int arr_78 [11] [11] [11] ;
long long int arr_79 [11] ;
unsigned short arr_80 [11] [11] [11] [11] ;
int arr_82 [11] [11] [11] ;
unsigned short arr_84 [11] [11] [11] [11] ;
int arr_85 [11] [11] [11] ;
long long int arr_94 [11] ;
long long int arr_97 [11] [11] [11] [11] ;
int arr_98 [11] ;
long long int arr_99 [11] [11] ;
long long int arr_101 [11] [11] [11] [11] [11] ;
long long int arr_105 [11] [11] [11] [11] [11] ;
unsigned short arr_113 [11] [11] [11] [11] [11] ;
int arr_118 [11] ;
long long int arr_121 [11] [11] [11] [11] [11] ;
long long int arr_8 [14] [14] [14] ;
long long int arr_18 [14] [14] ;
long long int arr_22 [14] ;
int arr_52 [11] ;
int arr_53 [11] ;
int arr_74 [11] ;
int arr_88 [11] [11] [11] ;
long long int arr_89 [11] ;
unsigned short arr_90 [11] ;
unsigned short arr_96 [11] [11] [11] [11] ;
long long int arr_115 [11] ;
unsigned short arr_119 [11] [11] [11] [11] ;
unsigned short arr_123 [11] [11] [11] [11] ;
unsigned short arr_128 [11] [11] ;
long long int arr_132 [11] [11] ;
unsigned short arr_133 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -5989471185967813978LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8545604323911724645LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 63551659;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 132235849431181234LL : -4793526166331580809LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)28601;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6958943177714902752LL : 7688646268134994650LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8766;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 394720568049836966LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 3269366897461676887LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1419909550;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -263773988271402901LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -132935920;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -6961904663777235376LL : -8534620108044868009LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1384771402471155617LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37838;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1667641755 : -1254971309;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -440364261254128316LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)56069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25804;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60428 : (unsigned short)61451;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -7946158968787842170LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = -2377603002752678890LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = 512710729;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = 1219926574;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = -1192377596008960346LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = 1914193234;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = -9209509544260526528LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 6324506681913443018LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 6542264248384996697LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 739026164;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 324003010;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -6728243970938613689LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = -3437085497253808973LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 7247901786183233308LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = 111069958;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_43 [i_0] [i_1] = 8823033601276073517LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_44 [i_0] [i_1] = 8400444183425908573LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_45 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3335 : (unsigned short)16898;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = -148165525872433271LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_47 [i_0] [i_1] = -4782300202443882466LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_48 [i_0] = -2613772684945147143LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_49 [i_0] [i_1] = -118539830;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_50 [i_0] [i_1] = 1958921009690564867LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_51 [i_0] [i_1] = 3738378021063318332LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_54 [i_0] = (unsigned short)34255;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_55 [i_0] [i_1] = 1314114571;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)5171 : (unsigned short)25753;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = -1862583379;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (unsigned short)3009;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = 798652064951023958LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8378856689860347414LL : -8268033290591079277LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (unsigned short)54080;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_63 [i_0] [i_1] = -7254919385392684286LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 730154166 : -421122803;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = 5382956499673637982LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)48020 : (unsigned short)25438;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = -8798601515639780934LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = 1215828006;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_71 [i_0] [i_1] = (unsigned short)14963;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = 3785238846925223452LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_73 [i_0] = -2034698535;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = 1054693464;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = 1031618890;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_79 [i_0] = 108156328722219508LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_80 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6853;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_82 [i_0] [i_1] [i_2] = -1909468670;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)20675 : (unsigned short)52899;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_85 [i_0] [i_1] [i_2] = -2056110096;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_94 [i_0] = 2393286313443560198LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_97 [i_0] [i_1] [i_2] [i_3] = 5367745255162643154LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_98 [i_0] = 791910142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_99 [i_0] [i_1] = 8068517390350991508LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_101 [i_0] [i_1] [i_2] [i_3] [i_4] = -1151753170138110019LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_105 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 7437029908248158357LL : 1924529742728615076LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_113 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)28235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_118 [i_0] = 735577986;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_121 [i_0] [i_1] [i_2] [i_3] [i_4] = -7423946598929165438LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6220765737490459556LL : -2548090386823200685LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 7197890957178254843LL : -144202836000014973LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -2511619475758111970LL : 5866956475592234852LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_52 [i_0] = 1115983914;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_53 [i_0] = 1576366794;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? 615573490 : 1052274278;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_88 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2092428317 : -1651319857;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_89 [i_0] = (i_0 % 2 == 0) ? 1681033456387667989LL : -3863642601026105263LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_90 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3230 : (unsigned short)37428;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_96 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11285;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_115 [i_0] = -6364851472275587678LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_119 [i_0] [i_1] [i_2] [i_3] = (unsigned short)35518;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_123 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58290;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_128 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)63879 : (unsigned short)48897;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_132 [i_0] [i_1] = (i_1 % 2 == 0) ? -2237844901634145060LL : -3149178865507680657LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_133 [i_0] [i_1] = (unsigned short)908;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_88 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_89 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_90 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_96 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_115 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_119 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_123 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_128 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_132 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_133 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
