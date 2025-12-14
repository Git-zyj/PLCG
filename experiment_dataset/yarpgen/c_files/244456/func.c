/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244456
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((max((var_7), (var_2))), (var_10))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1]))))) != (max((((/* implicit */unsigned long long int) (short)-2390)), (arr_4 [i_0 - 2] [i_0 - 1])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))) - ((+(((/* implicit */int) (unsigned short)63966))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0 + 2] [9LL] [i_0] [i_0])) ? (9298311250281628670ULL) : (11497788926890984801ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0])) >> (((((/* implicit */int) (short)-7263)) + (7281))))))))));
                                var_18 &= ((/* implicit */short) (unsigned short)32640);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] &= ((/* implicit */unsigned int) arr_6 [i_0] [i_5] [i_5] [i_5 - 1]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_5 - 1] [i_1 + 2] [i_5 - 1] [i_5 - 1] [i_1 + 2] [i_0 - 2])) * (((/* implicit */int) arr_16 [i_5 - 1] [i_5]))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_8 [i_1 + 2])))) : (((/* implicit */int) (short)-19184)))) : (((((/* implicit */_Bool) ((arr_10 [(short)0] [i_1] [i_1] [i_0] [i_0] [i_5]) ? (((/* implicit */int) (unsigned short)1557)) : (((/* implicit */int) (short)-7263))))) ? (((((/* implicit */_Bool) (short)4864)) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 3] [i_5] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)63966)))))));
                                arr_23 [i_7] [i_7] [i_6] [i_5] [i_7] [i_0] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (short)20711)) : (((/* implicit */int) (unsigned char)0))))), (arr_7 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_30 [i_0] [10U] [i_0] [i_0 - 2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)68)) ? (677671995U) : (((/* implicit */unsigned int) max((115237797), (((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1569)))))));
                                arr_31 [i_0 + 2] [i_1] [i_5] [i_8] [i_8] [i_5] = arr_25 [12LL];
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_0 + 1] [i_1 + 1] [i_5] [i_8])), (var_11)))) ? (((int) (((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) 3371356884U)) / (arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 3; i_10 < 10; i_10 += 1) 
    {
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) arr_26 [i_10] [i_11] [(unsigned short)17] [i_10] [i_11]);
                arr_38 [i_10 - 3] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((17952402507414280668ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((arr_25 [i_10]) % (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)63991))))))));
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_20 [i_10] [i_10 - 2] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_20 [i_10 + 1] [i_10 + 1] [i_10 - 1])))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_10 - 1])) ? (((/* implicit */int) arr_34 [i_10 - 1] [(short)1])) : (((/* implicit */int) arr_8 [i_10 - 1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10 - 1] [i_14 - 1] [i_13 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_10 + 1] [i_14 - 1] [i_13 + 2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10 - 1] [i_14 - 1] [i_13 + 2])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10 + 2] [i_14 - 1] [i_13 - 1]))) : (-7071427777748509037LL)))));
                                arr_46 [i_12] [i_12] [10LL] &= ((/* implicit */unsigned short) arr_33 [i_10]);
                                var_26 += ((/* implicit */unsigned char) ((115237813) | (max((arr_44 [i_12] [i_14 - 1] [i_14] [i_14] [i_14 - 1]), ((-2147483647 - 1))))));
                            }
                        } 
                    } 
                    arr_47 [i_10] [i_11] [i_10] [i_11] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_2 [i_10 - 1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_22 [i_12] [i_12] [i_11] [i_11] [i_12] [i_12])) < (((/* implicit */int) arr_22 [i_12] [i_12] [i_11] [i_11] [i_10] [i_12])))))));
                }
                for (short i_15 = 2; i_15 < 9; i_15 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        arr_52 [i_10] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */unsigned char) ((((arr_4 [i_10 - 1] [i_11]) ^ (((/* implicit */unsigned long long int) -3000264149122702577LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-27570)) > (((/* implicit */int) (short)-15315))))))));
                        var_27 = ((/* implicit */_Bool) arr_51 [i_15] [i_11] [i_15] [i_16]);
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((_Bool) ((int) (_Bool)1)));
                            arr_55 [i_15] [i_16] [i_15] [i_15] [i_15] = var_1;
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_37 [i_10] [i_10])), (arr_7 [19ULL] [i_11] [i_16] [i_17]))) >= (((/* implicit */unsigned long long int) max((1792456746698384520LL), (-1343138135380598685LL))))))), (max((max((12419176841443042030ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_11] [i_15])), (arr_17 [i_10] [i_17] [i_15 + 1] [i_11])))))))))));
                            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65053)) <= (((/* implicit */int) (short)-29111)))))));
                        }
                        arr_56 [i_10] [i_15] [i_10] [i_15] [i_11] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) : (402450290U)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_31 *= ((/* implicit */unsigned long long int) (signed char)-18);
                            var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned short)1245))))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            var_33 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) | (((((/* implicit */_Bool) (unsigned short)0)) ? (2147221504) : (((/* implicit */int) var_1))))))), (min((min((((/* implicit */unsigned long long int) arr_1 [i_19] [i_19])), (var_3))), (((/* implicit */unsigned long long int) arr_54 [i_15] [i_16] [i_15] [(short)2] [i_15]))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_44 [i_10] [8U] [i_10 - 3] [i_16] [i_19])) ? (((/* implicit */int) (signed char)-1)) : (arr_44 [i_10] [i_11] [i_15 + 2] [i_15 + 2] [i_19]))) | (((/* implicit */int) (short)15432))));
                            arr_63 [i_15] = ((/* implicit */unsigned short) ((unsigned char) ((int) (unsigned char)82)));
                            arr_64 [i_10 - 1] [i_15] [9U] [i_16] [9U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((((/* implicit */int) (unsigned char)11)) << (((17323342916296421865ULL) - (17323342916296421854ULL))))) : (((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)18)) % (((/* implicit */int) (unsigned short)15754))))) ? (3594435125647373384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_15] [i_15 + 3] [i_15 + 1] [i_10 + 1] [i_19] [i_15 + 1])))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        arr_68 [i_10] [i_15] [i_15] [i_15 - 2] [i_15] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_10 + 2] [i_15] [i_15 + 1] [i_20])) << (((((/* implicit */int) (unsigned char)185)) - (177)))));
                        arr_69 [i_10] [i_11] [i_15] = (((!(arr_39 [i_20] [7LL] [i_11]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_10] [i_15] [i_15])) == (((/* implicit */int) arr_48 [i_10] [i_15])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10] [i_11]))) & (17155102759093252561ULL))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) arr_1 [i_11] [i_15 + 1]);
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4037457334U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 402450290U)) ? (3892517005U) : (var_5)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) min((arr_33 [i_10]), (var_11)))) + (2147483647))) >> (((4095LL) - (4082LL)))))) : (((((/* implicit */_Bool) 2291811266U)) ? (max((((/* implicit */unsigned long long int) var_12)), (5307125627104728748ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))))));
                    }
                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 8; i_22 += 3) 
                    {
                        arr_75 [11LL] [i_11] [11LL] [i_15 - 1] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) arr_74 [i_22 + 3] [i_22 + 1] [i_22] [i_22 + 2] [i_22 - 1]))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (-(arr_44 [i_15] [(signed char)3] [i_15] [i_22 + 1] [(short)10]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 8; i_23 += 1) 
                    {
                        for (unsigned long long int i_24 = 3; i_24 < 8; i_24 += 1) 
                        {
                            {
                                arr_80 [i_10] [i_10 - 2] [i_10] [i_15] [7LL] = ((/* implicit */short) 2147483647);
                                arr_81 [i_10] [i_11] [i_15] [i_15] [i_23] [i_24 - 2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-1)), (var_4)))) ? ((~(arr_25 [i_15]))) : ((+(4099LL))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_24] [(short)0] [(short)0] [i_23 + 1]))))) ? (((((/* implicit */_Bool) arr_45 [i_10 + 1] [i_10] [i_10 + 1] [i_10] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10 - 1] [i_11] [i_11] [i_23]))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) 3892517037U))));
                                var_39 += ((/* implicit */unsigned int) arr_71 [i_10] [(signed char)0] [i_15 + 3] [i_24]);
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */unsigned short) ((int) var_2));
                }
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15752)) <= (((/* implicit */int) max((((/* implicit */unsigned short) arr_65 [i_10] [i_11] [i_11] [i_11])), ((unsigned short)25156))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */long long int) -1122932634)) != (9223372036854775783LL)))) : (((/* implicit */int) var_1))))) | (((((unsigned int) (signed char)16)) >> ((((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)21096)))) - (65)))))));
}
