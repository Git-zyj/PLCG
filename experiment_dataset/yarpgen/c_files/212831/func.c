/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212831
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31448)) ? (252201579132747776LL) : (((/* implicit */long long int) var_0))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) ((491668336062440405LL) * (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (1015149013))))));
                            arr_15 [i_3] = ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */long long int) arr_1 [i_3 - 1])) : (var_7));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3096309271234809149LL)) || (((/* implicit */_Bool) (unsigned char)40))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (-768914131) : (((/* implicit */int) (signed char)-49))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_11);
                            var_17 = ((/* implicit */short) arr_18 [i_6] [i_5] [i_1 - 2]);
                            var_18 = var_9;
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7] [i_0] [i_7] [i_7 + 1] [i_1])) || (((/* implicit */_Bool) arr_22 [i_1 - 2] [i_5 + 2] [i_5 + 2] [i_7 - 3] [i_7 - 3] [i_1]))));
                            arr_26 [i_0] [i_1] [i_1] [i_7] [i_7] = (~(var_0));
                        }
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_21 |= ((/* implicit */unsigned long long int) (unsigned char)130);
                            arr_29 [i_8] [i_6] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (signed char)32);
                        }
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0 + 2] [i_0 - 1] [i_5 + 1] [i_6]))) == (var_0));
                            arr_33 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_28 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_5 + 2])) : (((/* implicit */int) arr_28 [i_0 + 2] [i_1 + 1] [i_1 - 1] [i_5 - 1]))));
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_5] [i_6] [i_10] = ((/* implicit */int) arr_12 [i_10] [i_0] [i_1] [i_1] [i_0]);
                            arr_37 [i_0] [i_0] [i_5 - 1] [i_6] [i_10] = (_Bool)1;
                            var_22 -= ((/* implicit */long long int) (((+(65847978U))) << (((((/* implicit */int) arr_20 [i_10])) + (3033)))));
                            var_23 -= ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0]);
                        }
                        arr_38 [i_0 - 1] = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
        }
    }
    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_12 = 4; i_12 < 17; i_12 += 4) 
        {
            var_24 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) 12269238064738787506ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11360))) : (555940113U))))), (((/* implicit */unsigned int) (short)31134))));
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 19; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17390)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13]))) : (6493623864892935094LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-3523233656240828579LL)))) : (max((var_8), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) max((0), (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_2)) : (var_0))))))));
                            arr_50 [i_11] [i_12] [i_11] [i_14 - 1] [i_15] = ((/* implicit */short) max((((arr_43 [i_11] [i_14 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) -519839861))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (~(var_1)))), (arr_47 [i_12] [i_12] [i_12 - 2] [i_12 - 4]))), (((max((((/* implicit */long long int) arr_45 [i_11] [i_12] [i_13])), (266338304LL))) / (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)212)), (var_2)))))))))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
            {
                arr_53 [i_12] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (short)-734)) < (((((/* implicit */int) (unsigned short)26629)) % (((/* implicit */int) var_12)))))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 2; i_17 < 18; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            arr_60 [i_11] [i_11] [i_11] [i_16] [i_16] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_11] [i_12 - 1] [i_12]))) < (var_7)));
                            arr_61 [i_11] [i_12] [i_12 + 2] [i_12] [i_17 - 1] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) arr_46 [i_11] [i_11] [i_11]))));
                            arr_62 [i_11] [i_11] [i_16] [i_17 + 2] [i_17 + 2] [i_18] = max((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-25422)), ((+(-1)))))));
                        }
                    } 
                } 
                var_27 = (-(max((((/* implicit */unsigned int) arr_46 [i_11] [i_12] [i_16])), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) + (var_1))))));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_66 [i_19 - 1] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_40 [i_11])))), (((/* implicit */int) (unsigned short)29072))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)4964))) & (281474976710655LL)))) ? (((/* implicit */unsigned int) ((arr_48 [i_12] [i_19] [i_19] [i_12 + 2] [i_19]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2380))))) : (((((/* implicit */_Bool) -1642922198)) ? (1399811728U) : (var_14)))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_11]))))) - (((arr_42 [i_11] [i_11] [i_11]) - (var_8)))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        {
                            arr_71 [i_11] [i_20] [i_19] [i_12 - 4] [i_12] [i_11] = ((/* implicit */_Bool) (signed char)101);
                            arr_72 [i_12] [i_12] [i_12] [i_11] = ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned short)63488)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_19] [i_11]))) : (13887790769167548062ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 3670016)), (803597653U)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2102601647)) ? (-1173055026) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)4)))))))));
                            arr_73 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((max((arr_68 [i_12] [i_19] [i_12 - 3] [i_12]), (((/* implicit */int) (short)11409)))), (((/* implicit */int) (short)-9748)))))));
                            arr_74 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) max((((((((/* implicit */_Bool) 3761082042819262780LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55297))))) - (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) max((((/* implicit */int) (short)-32763)), (0))))));
            }
        }
        for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (max((((((/* implicit */_Bool) arr_43 [10U] [10U])) ? (((arr_46 [i_22] [i_22] [i_11]) ? (31ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7542849478603991486LL)) ? (var_0) : (var_14)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) arr_68 [18U] [i_11] [i_11] [i_11])) + (1440040476184177378LL))), (((/* implicit */long long int) ((unsigned int) -9223372036854775794LL))))))))));
            arr_77 [i_11] [i_22] = ((/* implicit */unsigned int) 10368989564542450520ULL);
        }
        arr_78 [i_11] = ((/* implicit */short) var_7);
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 20; i_24 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (signed char i_26 = 2; i_26 < 19; i_26 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)36291))))))) <= ((((-(1081871741U))) + (((/* implicit */unsigned int) max((1054783973), (((/* implicit */int) arr_40 [i_11])))))))));
                                arr_91 [i_11] [i_11] [i_11] = ((/* implicit */long long int) (unsigned char)172);
                                var_32 = (~(((/* implicit */int) arr_64 [i_11] [i_11] [i_11])));
                                var_33 = ((/* implicit */long long int) max((var_33), (((4200273530039919495LL) >> ((+(((/* implicit */int) (unsigned char)28))))))));
                                arr_92 [i_11] [i_11] [i_24] = ((/* implicit */unsigned int) arr_42 [i_25] [i_11] [i_11]);
                            }
                        } 
                    } 
                    arr_93 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_79 [i_11] [i_11]), (((2863256276944702998LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228)))))))) ? (max((((/* implicit */unsigned long long int) var_12)), (min((((/* implicit */unsigned long long int) arr_70 [i_11])), (var_8))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_87 [i_11] [i_11] [i_11] [i_11] [i_23] [i_24])), (var_2))))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */long long int) var_8);
    var_35 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (min((8759803790220818411ULL), (((/* implicit */unsigned long long int) 63))))));
}
