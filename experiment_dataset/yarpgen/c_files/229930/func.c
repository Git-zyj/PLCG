/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229930
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1])) < (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1])))))) != (((unsigned long long int) (_Bool)1)))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)104))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)22062)))))))))))));
                            var_17 = ((/* implicit */_Bool) 690448485U);
                            var_18 |= min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */unsigned long long int) 1125899906838528LL)) & (15890682395530196596ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_0])));
                        }
                        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)3))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (arr_3 [i_0] [i_0] [i_3 + 2])));
                    }
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((7690268610592038835ULL) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)63)))))))));
            var_21 = ((/* implicit */long long int) (~(((7690268610592038826ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))))))));
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_22 *= ((/* implicit */unsigned int) var_2);
            arr_17 [i_0] = ((8589655926596438653ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) max(((-(min((5ULL), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)220))))) ? ((+(((/* implicit */int) (unsigned char)68)))) : ((-(((/* implicit */int) (short)-11440)))))))));
                var_24 = ((/* implicit */unsigned long long int) ((((arr_4 [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (1606512635U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_21 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) (-(arr_7 [i_5] [i_5] [i_0])));
                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (5362907473548335238ULL))))) != (((((/* implicit */long long int) ((/* implicit */int) ((var_13) > (2794480851U))))) ^ (((-1125899906838524LL) | (-7LL)))))));
            }
            for (unsigned char i_7 = 2; i_7 < 21; i_7 += 3) 
            {
                arr_24 [i_0] [i_7] [10U] [i_0] = ((/* implicit */signed char) var_9);
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(8077227141338355910ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (3961949557020720099LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (8700503717687488258ULL)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 626486272U)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_5] [i_5] [i_7]))) >= (var_2)))) : (((/* implicit */int) var_8)))))));
                var_27 = ((/* implicit */short) (((-(arr_7 [(unsigned char)11] [i_5] [i_5]))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4))))) | ((-(arr_7 [i_7] [(unsigned char)18] [i_0])))))));
            }
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned int i_9 = 3; i_9 < 21; i_9 += 2) 
            {
                for (unsigned int i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_28 -= 758946111U;
                        arr_34 [i_8] = var_11;
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 3) 
    {
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                {
                    var_29 ^= ((max((((/* implicit */unsigned long long int) arr_26 [i_12 - 1])), (arr_41 [i_13 + 1]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13522)) | (((/* implicit */int) arr_16 [i_11 - 2] [i_12 - 1]))))));
                    var_30 = ((/* implicit */short) (signed char)125);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 1; i_14 < 11; i_14 += 1) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_16 = 1; i_16 < 12; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_17 = 3; i_17 < 11; i_17 += 4) 
                    {
                        arr_51 [i_17 - 1] [i_15] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) 3536021184U)) ? (3ULL) : (0ULL)))));
                        arr_52 [i_15] [i_15] [i_17] [i_17] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5657914154981365000ULL)) && ((_Bool)0)));
                        var_31 ^= ((/* implicit */unsigned int) 8700503717687488258ULL);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        arr_55 [i_15] [i_15] = (-(((unsigned long long int) var_0)));
                        arr_56 [0ULL] [i_15] [i_16] [i_18] [i_18] [i_18] = ((/* implicit */short) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (4182878481444601942LL))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) | (2163028215893569096LL))))));
                    }
                }
                for (unsigned int i_19 = 4; i_19 < 11; i_19 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), ((((_Bool)1) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 4182878481444601950LL))))));
                    arr_59 [i_15] [i_15] [i_15] [i_19 + 2] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)1561), (((/* implicit */short) (_Bool)1)))))) & (((18446744073709551579ULL) & (((/* implicit */unsigned long long int) 140737488355327LL)))))));
                    var_33 = ((/* implicit */unsigned int) (_Bool)1);
                }
                /* LoopSeq 3 */
                for (unsigned char i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) var_7);
                    var_35 = ((/* implicit */short) ((((/* implicit */int) ((arr_63 [i_20]) && (((/* implicit */_Bool) arr_62 [i_15] [(signed char)12] [i_20] [i_14 - 1]))))) * (((/* implicit */int) arr_23 [i_14 - 1]))));
                    var_36 = ((/* implicit */unsigned char) (-(min((3250921620551510068ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_15] [(signed char)15])) * (((/* implicit */int) (_Bool)0)))))))));
                }
                for (unsigned char i_21 = 1; i_21 < 12; i_21 += 2) 
                {
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_41 [i_21 - 1]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        arr_71 [i_15] [i_21] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_11);
                        var_38 = min(((+(max((18446744073709551606ULL), (14173689399262746404ULL))))), (((/* implicit */unsigned long long int) ((arr_43 [i_14]) < (((/* implicit */unsigned long long int) var_13))))));
                        var_39 ^= ((/* implicit */unsigned char) (_Bool)1);
                        arr_72 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) var_1);
                    }
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        arr_76 [i_15] [i_15] [i_21 - 1] [i_23] = ((/* implicit */_Bool) var_11);
                        var_40 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_73 [i_21 + 1])))));
                        var_41 *= ((/* implicit */unsigned long long int) arr_18 [i_14] [i_14]);
                        var_42 = ((/* implicit */short) (signed char)-104);
                        arr_77 [i_23] [i_15] [i_15] [i_15] [i_15] [i_14] = ((/* implicit */long long int) 1645301116U);
                    }
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        arr_81 [i_21] [i_15] [i_15] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3519370754333925871ULL)) ? (2758615206972056095ULL) : (1ULL))))));
                        arr_82 [i_15] [i_15] = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 1; i_26 < 12; i_26 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned char) 144347715U);
                            var_44 = ((/* implicit */long long int) var_11);
                            arr_87 [i_14] [i_15] [i_21 - 1] [i_21] [i_25] [i_25] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11042244176524089987ULL))));
                        }
                        arr_88 [i_14] [i_15] [i_21 - 1] [i_15] = ((/* implicit */long long int) max((((/* implicit */signed char) ((-5705761934011058927LL) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))), ((signed char)105)));
                        var_45 ^= ((/* implicit */unsigned long long int) arr_26 [i_14]);
                        var_46 ^= ((/* implicit */short) 3519370754333925871ULL);
                    }
                    var_47 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (18446744073709551579ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (18446744073709551615ULL))))) : (4191226161432615119ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_4)) + (((/* implicit */int) var_10)))), (((/* implicit */int) ((var_12) == (3273718574U)))))))));
                    var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_2))) : (((/* implicit */unsigned long long int) ((arr_80 [i_14] [i_14 + 1] [i_15] [(_Bool)1] [12ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) | (arr_19 [i_15]))))));
                    var_49 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)127))))), (528482304U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                }
                for (unsigned char i_27 = 0; i_27 < 13; i_27 += 3) 
                {
                    var_50 += min(((short)-1), (((/* implicit */short) (unsigned char)28)));
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        for (short i_29 = 2; i_29 < 10; i_29 += 4) 
                        {
                            {
                                var_51 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) | (((arr_65 [i_15] [i_14 - 1] [i_14 + 1] [i_15]) & (var_2)))));
                                var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) var_6)) : (6166652485655243160LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)169))))))) >> (((/* implicit */int) (_Bool)1)))))));
                                arr_98 [i_14] [i_15] = ((/* implicit */unsigned long long int) 2055833840U);
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_97 [i_14 + 2] [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 2]))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (var_1))))))))));
                }
                arr_99 [i_15] [i_15] = ((/* implicit */unsigned int) (short)16);
            }
        } 
    } 
    var_54 = (((_Bool)1) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23911))));
}
