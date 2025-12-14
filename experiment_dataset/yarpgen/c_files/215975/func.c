/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215975
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = max((((((/* implicit */_Bool) var_7)) ? (var_3) : (max((((/* implicit */unsigned int) 1637083209)), (12U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || ((!(((/* implicit */_Bool) -2574074473230596900LL))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 += ((unsigned long long int) ((((/* implicit */unsigned long long int) 3932526368158481953LL)) | (22ULL)));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) % (-5589026352180655118LL))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) 3106258017802533402LL)) + (36028728299487232ULL))) > (((/* implicit */unsigned long long int) ((int) 669382089U))))) && (((/* implicit */_Bool) ((unsigned long long int) -1LL)))));
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) 1073741823LL)) | (max((1079268411406431600ULL), (((/* implicit */unsigned long long int) -21123974)))))), (max((((((/* implicit */_Bool) 576460751766552576ULL)) ? (7698823475608002910ULL) : (((/* implicit */unsigned long long int) -8101460673160277284LL)))), ((-(3153095049264211680ULL)))))));
            arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(4294967295U)))) >= (((arr_4 [i_1]) | (arr_4 [i_1])))));
        }
        for (long long int i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4398046511103LL)))))))))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_23 |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6420)) ? (((/* implicit */long long int) 2507552425U)) : (-1LL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1838015551)), (18003137673261011544ULL)))))))));
                var_24 = var_7;
                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) (short)-1))))), (9007199187632128ULL))))));
            }
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_26 = (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047ULL)) && (((/* implicit */_Bool) -3307846423285276790LL))))), (((((/* implicit */unsigned long long int) 4056083842U)) % (arr_4 [i_1]))))));
                            var_27 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-31856))))), (min((((/* implicit */int) (short)-32748)), (1839725951))))));
                            arr_26 [i_1] [i_5] [i_5] [i_5] [(short)1] [i_1] = ((/* implicit */unsigned int) (+((-(max((((/* implicit */unsigned long long int) arr_2 [i_3 + 3] [i_5])), (10391629657790625168ULL)))))));
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_1 + 3] [i_3 + 3] [i_6 + 3] [i_6 - 1] [i_6 + 1]))));
                            var_29 += (~(min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -2077743007)), (4294967295U)))), (arr_13 [i_7]))));
                        }
                    } 
                } 
                arr_27 [i_5] [i_5] [4] &= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775799LL) ^ (-7685334235515069469LL)))) && (((/* implicit */_Bool) 5671369237937599840LL)))))));
                arr_28 [i_1 - 1] [i_3] [i_1] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8241797757439273019LL)) ? (2939434667U) : (((/* implicit */unsigned int) arr_11 [i_1] [i_3] [i_5]))))), (((((/* implicit */_Bool) 8135602420567894970LL)) ? (11772706212654194049ULL) : (144115188075854848ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 6234332400963704621ULL))))), (arr_18 [i_1] [i_1 + 1] [i_1 + 2]))))));
                arr_29 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */int) ((18446744073709551604ULL) > (((/* implicit */unsigned long long int) -3822103783645441869LL))));
                var_30 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (17048117950484883339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24712)))))) ? (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_3]) : (((long long int) 8174307765155264486LL))))));
            }
        }
        for (long long int i_8 = 1; i_8 < 11; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        arr_37 [i_1] [i_9] [i_8 + 2] [i_1] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7397310737630877205ULL)) ? (((/* implicit */long long int) 4194303)) : (((-1746914919291585075LL) - (-5341962146395830418LL)))))), (((((/* implicit */unsigned long long int) (+(4228088931U)))) + (7032904894798134066ULL))));
                        var_31 = ((/* implicit */short) (~(var_5)));
                        var_32 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_8]);
                        var_33 = ((/* implicit */unsigned int) (~(13791257833360516332ULL)));
                        arr_38 [i_1 + 3] [i_1] [i_8 - 1] [i_1] [i_10] = ((unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                var_34 = ((/* implicit */unsigned long long int) min(((~(9223372036854775792LL))), (9223372036854775807LL)));
                var_35 -= ((/* implicit */unsigned long long int) (((+(((-1845634154) / (((/* implicit */int) (short)32767)))))) + (((/* implicit */int) ((short) 9562640573589693057ULL)))));
                arr_41 [i_1] = ((/* implicit */unsigned long long int) min((((-16LL) & (370680369370573277LL))), (((long long int) ((2758609022578790164LL) ^ (((/* implicit */long long int) 2147483647)))))));
            }
            for (int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) (-(-8671364061092396679LL)));
                var_37 *= max((((unsigned long long int) ((((/* implicit */_Bool) 833115277121867999LL)) ? (((/* implicit */long long int) 1920)) : (-1980634582027522548LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 2147483647)) : (7639526763594752829LL)))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (unsigned int i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            var_39 = ((/* implicit */long long int) 7130582658636031595ULL);
                            var_40 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_14)), (arr_20 [i_8 + 1] [i_8 + 1] [i_14 + 1] [i_8 - 1] [i_1 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24719)))));
                            var_41 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((3240843970123297840ULL) ^ (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -946623398))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                arr_50 [i_1] [2LL] [i_1] [2LL] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) 4071341421U)), (14571416725365108132ULL)));
                var_42 = ((/* implicit */int) ((unsigned long long int) var_6));
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) ((5154268693992287319LL) > (-5958809904564730616LL))))) != (((((/* implicit */_Bool) 7358943066615767589ULL)) ? (arr_14 [i_1] [i_1]) : (((/* implicit */long long int) 2851751106U)))))));
                            var_44 = ((/* implicit */long long int) 2970686279989368786ULL);
                            var_45 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) -275837213)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5659703177666053258LL)) ? (5525022479878623920ULL) : (((/* implicit */unsigned long long int) -1042411848))))) ? (min((576459652791795712LL), (-1612929003067270286LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)21863))))));
                        }
                        /* vectorizable */
                        for (short i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
                        {
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) var_16)) : (2892624377U))))));
                            var_47 = ((/* implicit */unsigned int) 6404723445640107768LL);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 2) 
                        {
                            var_48 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-433870508)))) ? (((/* implicit */long long int) 18U)) : (((((/* implicit */long long int) 1298257274)) + (1966080LL)))))), (max((((/* implicit */unsigned long long int) (short)16738)), (11931001272086301105ULL)))));
                            var_49 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) max((4013296168U), (((/* implicit */unsigned int) 21516047))))), (((((/* implicit */long long int) var_2)) + (1215166946315148980LL))))) != (min((var_11), (((/* implicit */long long int) (short)22646))))));
                            var_50 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 15492271025151653649ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6067))))))))), (((((/* implicit */long long int) 2147483647)) | (arr_23 [i_1] [i_16] [i_17] [i_17] [i_21])))));
                        }
                        var_51 |= ((/* implicit */long long int) var_4);
                        var_52 = ((long long int) max((((/* implicit */unsigned long long int) ((unsigned int) (short)32762))), (min((18446744073709551615ULL), (8953014689619163624ULL)))));
                        var_53 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 15LL)))))) - (arr_54 [i_1] [i_16]))));
                    }
                    var_54 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 591484497072420453ULL)) || (((/* implicit */_Bool) -4670027321307432777LL))))), (max((((/* implicit */unsigned long long int) ((576458553280167936ULL) > (((/* implicit */unsigned long long int) -809737963))))), (((2147483647ULL) | (var_0)))))));
                }
            } 
        } 
    }
    for (int i_22 = 0; i_22 < 12; i_22 += 1) 
    {
        var_55 = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) (~(arr_11 [i_22] [i_22] [i_22])))));
        var_56 = (+(((min((((/* implicit */unsigned long long int) -8331861144562672203LL)), (9669124402858224175ULL))) | (((/* implicit */unsigned long long int) var_8)))));
    }
    /* LoopNest 3 */
    for (short i_23 = 0; i_23 < 11; i_23 += 1) 
    {
        for (unsigned long long int i_24 = 1; i_24 < 10; i_24 += 4) 
        {
            for (long long int i_25 = 3; i_25 < 9; i_25 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_26 = 0; i_26 < 11; i_26 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_34 [i_25 + 2] [i_25 + 1] [i_25 + 2])), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_25 + 2] [i_25 + 1] [i_25])) && (((/* implicit */_Bool) 4194304U)))))) : (max((((/* implicit */long long int) arr_34 [i_25 - 3] [i_25 + 2] [i_25])), (9223372036854775779LL)))));
                        arr_80 [i_24] [i_25] [i_26] [i_26] = ((((/* implicit */_Bool) min((((18446744073709551598ULL) ^ (((/* implicit */unsigned long long int) -5386333397756934160LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 15728640)), (468991794U))))))) ? (((/* implicit */long long int) -1789444376)) : (max((((/* implicit */long long int) 2545668196U)), ((~(3819497582216880947LL))))));
                        arr_81 [i_24] [i_24] = ((/* implicit */int) ((unsigned long long int) var_8));
                    }
                    for (unsigned int i_27 = 2; i_27 < 10; i_27 += 2) 
                    {
                        var_58 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) (short)13160))))) >= (((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) 117440512))))) ? (((((/* implicit */_Bool) 18446744073709551589ULL)) ? (13011869397805922301ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) : (max((((/* implicit */unsigned long long int) -1152921504606846976LL)), (arr_46 [13ULL] [i_24] [13ULL] [9U] [i_25 - 3])))))));
                        var_59 = ((/* implicit */short) ((max((((/* implicit */long long int) (short)3977)), ((~(-3005018667944940207LL))))) - (((((/* implicit */_Bool) min((arr_35 [i_23] [i_24] [i_23] [1ULL]), (((/* implicit */unsigned long long int) var_11))))) ? (min((arr_56 [i_23]), (((/* implicit */long long int) (short)-5300)))) : (((long long int) arr_42 [i_24] [i_24] [i_25] [i_23]))))));
                        arr_85 [i_24] = ((/* implicit */unsigned long long int) (short)32163);
                    }
                    for (int i_28 = 0; i_28 < 11; i_28 += 2) 
                    {
                        var_60 = min((((unsigned long long int) -5365012426451731051LL)), (((unsigned long long int) -1283727564500987659LL)));
                        arr_90 [i_23] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 32760LL)) ? ((+(((((/* implicit */_Bool) arr_76 [i_24] [8LL] [i_24] [5ULL])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_3)))))) : (-1524893897800547149LL)));
                    }
                    var_61 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) -8))), (2012667180444858267ULL)));
                }
            } 
        } 
    } 
    var_62 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)5726)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-8281)) : (62914560)))) ? (11688645258429809837ULL) : (((((/* implicit */_Bool) -4896657148301932051LL)) ? (1073741823ULL) : (8071319541347433951ULL)))))));
}
