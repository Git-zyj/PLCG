/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242150
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
    var_20 = var_12;
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) 2041898818U);
        arr_4 [i_0 + 1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-9048144864160584722LL))))), (((/* implicit */long long int) (~(((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */signed char) (_Bool)0))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */signed char) arr_2 [i_1]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(arr_7 [i_1] [i_1])));
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_20 [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((unsigned short) arr_13 [i_1] [i_4 - 1] [i_5] [i_5] [i_1]));
                            arr_21 [i_1] [i_1] [i_1] [i_3] [i_4 - 1] [i_5] = ((/* implicit */_Bool) (+((-(2253068501U)))));
                        }
                    } 
                } 
            } 
            var_22 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)57))));
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) arr_18 [i_1 + 1] [i_1 + 1] [i_6] [i_6] [i_6]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [8U] [8U])) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_6 [i_1] [i_6]))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_14 [i_1 + 1] [(signed char)2] [i_1 + 1] [i_1 + 1]))));
                /* LoopSeq 4 */
                for (signed char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_6] [i_8])) ? (arr_15 [i_6] [i_7] [i_8]) : (((/* implicit */int) arr_16 [i_6] [i_1])))));
                    arr_30 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-4))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((long long int) arr_19 [i_1] [i_8] [i_8 + 1] [i_8 + 2] [i_8 - 2] [i_1]));
                        arr_33 [i_1] [i_8] [i_7] [i_1 + 1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)7))));
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_28 [i_9] [i_8 + 2] [i_7] [i_6])) : (((/* implicit */int) (signed char)81)))))));
                        arr_34 [i_1] [i_6] [i_1] [i_8] [i_9] = ((/* implicit */_Bool) 167800409);
                    }
                    for (short i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) arr_18 [i_7] [i_1] [i_7] [i_6] [i_1]);
                        var_28 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 - 1] [i_8] [i_8 - 1] [i_10] [i_10 + 2]))) - ((+(var_2)))));
                        var_29 = ((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_6]);
                        arr_38 [i_10] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) arr_37 [i_1] [i_6] [i_7] [i_7] [i_8] [i_10]);
                    }
                }
                for (short i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                {
                    var_30 = arr_24 [i_1];
                    arr_41 [i_7] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 2011642894U)) ? (2283324412U) : (((/* implicit */unsigned int) arr_15 [i_1] [i_6] [i_7])))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_6] [i_6] [i_1])) ? (2869735065U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26499)))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) arr_27 [i_1] [i_7] [i_1])) : ((+(((/* implicit */int) arr_35 [i_11] [i_7] [i_6] [i_1]))))));
                    var_32 = ((/* implicit */signed char) ((unsigned char) arr_12 [i_6] [i_6] [i_6]));
                }
                for (short i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                {
                    arr_44 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2253068478U)))) ? (((/* implicit */int) ((short) arr_37 [i_1] [i_6] [i_7] [i_12] [i_1] [i_6]))) : ((+(((/* implicit */int) arr_40 [i_6]))))));
                    arr_45 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-41))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_12] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 + 1])) + (((/* implicit */int) arr_37 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1]))));
                }
                for (short i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (arr_13 [i_13] [i_7] [i_7] [i_6] [i_13])));
                    var_35 = ((/* implicit */unsigned short) arr_24 [i_1 + 1]);
                }
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_51 [i_1])) ? (-1903219162) : (((/* implicit */int) var_0)))) > (arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                arr_52 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (short)25853))) ? ((-(((/* implicit */int) (signed char)115)))) : (((/* implicit */int) arr_7 [i_1] [i_1]))));
                /* LoopSeq 1 */
                for (short i_15 = 3; i_15 < 12; i_15 += 1) 
                {
                    arr_55 [i_1] [i_14] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_27 [i_6] [i_14] [i_1])) : (((/* implicit */int) (unsigned short)22096))));
                    arr_56 [i_1] [i_14] [i_6] [i_1] = ((/* implicit */signed char) (_Bool)0);
                }
            }
        }
        for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            arr_61 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) arr_27 [i_1] [i_1] [i_1]));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((var_19) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)42))))) : (1530605496U))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_17 = 1; i_17 < 11; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_17 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_17 + 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_17 + 1] [i_1 + 1]))));
                            arr_69 [i_1] [i_16] [i_17] [i_17 + 2] [i_1] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)40449)) : (((((((/* implicit */int) (signed char)-18)) + (2147483647))) << (((((/* implicit */int) arr_46 [i_1] [i_19])) - (42904)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 4; i_20 < 13; i_20 += 2) 
                {
                    for (unsigned short i_21 = 2; i_21 < 12; i_21 += 3) 
                    {
                        {
                            arr_76 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_36 [i_20 - 1] [i_17 - 1]);
                            arr_77 [i_21] [i_20] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_51 [i_17 - 1]))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_1 + 1])) ? (arr_75 [i_17 - 1] [i_21] [i_21 - 1] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_20 - 4])))));
                            arr_78 [i_1 + 1] [i_20] [i_17] |= ((/* implicit */_Bool) arr_53 [i_21 + 2] [i_20] [i_1] [i_1]);
                            arr_79 [i_1 + 1] [i_1 + 1] [i_17 + 3] [i_1] [i_21 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_54 [i_21 - 2] [i_20 - 1] [i_17] [i_1]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                arr_83 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_1] [i_1] [i_1 + 1] [i_1] [i_1])) ? (arr_59 [i_1 + 1] [i_1 + 1]) : (arr_59 [i_1] [i_1 + 1])));
                arr_84 [i_1 + 1] [i_1] [i_1] [i_1 + 1] = var_13;
                var_40 = ((/* implicit */long long int) (-(((/* implicit */int) arr_62 [i_1] [i_1] [i_1] [i_1]))));
                arr_85 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1417264390819776068LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_71 [i_1] [i_16] [i_16] [i_22])))) ? (-612232902) : ((+(((/* implicit */int) arr_63 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
        var_41 = ((/* implicit */unsigned short) max((arr_64 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) max((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_16 [i_1 + 1] [i_1]))))), ((+(((/* implicit */int) var_19)))))))));
    }
    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
    {
        arr_88 [i_23] = ((/* implicit */_Bool) min((arr_39 [i_23 + 1]), (max((arr_39 [i_23 + 1]), (((/* implicit */unsigned int) (signed char)34))))));
        arr_89 [i_23] = ((/* implicit */_Bool) ((unsigned short) -1831054412095392252LL));
    }
    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) /* same iter space */
    {
        arr_92 [i_24] = ((/* implicit */unsigned int) max((((/* implicit */long long int) -612232900)), (1831054412095392270LL)));
        arr_93 [i_24] [(short)2] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_24 + 1] [i_24]), (((/* implicit */short) arr_29 [(signed char)12] [i_24] [i_24] [i_24] [i_24] [(signed char)12])))))) / (max((1831054412095392266LL), (((/* implicit */long long int) arr_27 [8U] [i_24 + 1] [8U]))))));
        /* LoopNest 3 */
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            for (short i_26 = 2; i_26 < 12; i_26 += 3) 
            {
                for (signed char i_27 = 0; i_27 < 14; i_27 += 2) 
                {
                    {
                        var_42 = ((/* implicit */_Bool) arr_71 [i_24] [i_25] [i_25] [i_25]);
                        /* LoopSeq 3 */
                        for (unsigned int i_28 = 0; i_28 < 14; i_28 += 2) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_32 [i_24 + 1] [i_24] [i_24] [i_26] [i_24] [i_28] [i_28]), (((/* implicit */int) var_6))))), (max((3667444624U), (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned int) ((((arr_1 [i_27]) || (((/* implicit */_Bool) 627522678U)))) ? (((/* implicit */int) arr_28 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24 + 1])) : (((/* implicit */int) arr_100 [i_27] [i_27] [i_26 - 2] [i_25 + 1] [i_24 + 1] [i_24]))))) : (((arr_74 [i_24] [i_25 + 1] [i_24] [i_24] [i_24] [i_28]) ? (((/* implicit */unsigned int) max((arr_15 [i_24 + 1] [i_26] [i_26]), (-1345450372)))) : (arr_90 [i_28])))));
                            var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -612232899)) ? (-1831054412095392252LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27447))))), (((/* implicit */long long int) min((-612232880), (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_24] [i_25 + 1] [i_26 + 1] [i_25] [i_28]))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_96 [i_26])) ? (((/* implicit */int) arr_42 [i_25 + 1] [i_28])) : (((/* implicit */int) arr_94 [i_25] [i_26] [i_26]))))) : (1831054412095392251LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_29 = 0; i_29 < 14; i_29 += 2) /* same iter space */
                        {
                            arr_106 [i_24] [i_27] [i_27] [i_26] [i_25 + 1] [i_24] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3667444618U)));
                            var_45 = ((/* implicit */_Bool) (short)-22397);
                        }
                        for (unsigned int i_30 = 0; i_30 < 14; i_30 += 2) /* same iter space */
                        {
                            var_46 = ((/* implicit */unsigned int) arr_12 [i_26 + 2] [i_26 + 2] [i_26]);
                            arr_110 [i_24] [i_24] [i_26] [i_27] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_48 [i_24] [i_25 + 1] [i_26] [i_27] [i_30]), (((/* implicit */long long int) (signed char)-123))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_24 + 1]))) | (627522682U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_99 [i_24 + 1] [i_25 + 1] [i_26 - 2] [i_26 + 1])) ? (((/* implicit */int) arr_66 [i_30] [i_24] [i_24] [i_25 + 1] [i_24])) : (((/* implicit */int) arr_29 [i_24] [i_24 + 1] [i_25 + 1] [i_26] [i_27] [i_24])))))));
                            var_47 = ((/* implicit */signed char) arr_98 [i_24]);
                        }
                        arr_111 [i_24] [i_26] [i_25] [i_24] = ((/* implicit */signed char) (+((+(((/* implicit */int) max((arr_8 [i_25] [i_25]), (((/* implicit */unsigned short) (signed char)-12)))))))));
                        var_48 ^= ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
    }
}
