/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205732
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
    var_19 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-3152)) : (((/* implicit */int) var_17))))) + (((unsigned int) var_15)))), (((1432913760U) / (412786425U)))));
    var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) 3882180877U))) ? (((((/* implicit */_Bool) var_13)) ? (var_11) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((unsigned int) (+(412786416U)));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_4))) % (((/* implicit */int) ((var_10) != (4168347895U))))))) ? (((((/* implicit */_Bool) ((unsigned int) (short)-15089))) ? (min((412786443U), (((/* implicit */unsigned int) (short)10778)))) : (max((((/* implicit */unsigned int) var_6)), (var_9))))) : (((((/* implicit */_Bool) 1045240094U)) ? (((((/* implicit */_Bool) (short)-3839)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (4231043502U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15088))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        var_22 |= ((/* implicit */unsigned int) arr_9 [i_1] [i_2]);
                        var_23 = ((/* implicit */short) arr_3 [i_0] [i_1]);
                        var_24 = arr_6 [i_0] [i_1];
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        arr_13 [i_0] = ((short) ((((arr_2 [(short)7] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2] [(short)8] [i_0] [i_0] [i_0]))))) + (1441229057U)));
                        var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) arr_7 [i_2] [i_4 - 1] [i_4 - 1])) : (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0] [1U] [i_4])) >> (((arr_11 [i_0] [i_0] [(short)2] [i_4]) - (2355874025U))))))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_26 = (~(var_9));
                            arr_17 [i_0] [i_2] [i_0] [i_4 - 1] [i_5] [i_5] = ((/* implicit */short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [7U]))) / (var_10))), ((~(3681309775U))))) != (max((((/* implicit */unsigned int) ((short) 25U))), ((+(581846711U)))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = ((short) ((((/* implicit */_Bool) 2666986618U)) ? (arr_6 [i_0] [(short)5]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(short)8] [i_0])) * (((/* implicit */int) arr_5 [i_1] [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_21 [i_6] [i_4] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15063))) + (412786406U));
                            var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777088U)) ? (((/* implicit */int) (short)-14274)) : (((/* implicit */int) arr_20 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 1]))))) ? (412786406U) : (((((/* implicit */_Bool) var_1)) ? (4055332863U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31553)))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_16))) ? (((((/* implicit */int) arr_12 [(short)1] [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2])) << (((((/* implicit */int) arr_12 [4U] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 - 1])) - (27484))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [(short)4] [i_4 - 1] [i_4 - 1])))))));
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) 1289620896U))));
                        }
                        /* vectorizable */
                        for (short i_7 = 2; i_7 < 7; i_7 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)23320)) * (((/* implicit */int) ((short) (short)18060)))));
                            arr_24 [5U] [i_1] [i_0] [i_7 - 2] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_3 [i_0] [i_1]))) && (((/* implicit */_Bool) arr_15 [i_1] [(short)8] [i_1] [i_4 - 1] [i_7 - 2]))));
                            var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14280))) - (arr_15 [i_4 - 1] [i_7 + 2] [i_1] [i_1] [i_1])));
                        }
                    }
                    for (short i_8 = 2; i_8 < 8; i_8 += 2) 
                    {
                        var_32 = max((arr_23 [(short)9] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) ((1906028022U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((65535U) > (16777215U)))))))));
                        arr_27 [i_0] [(short)9] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)6] [i_2] [i_2] [i_1] [i_0] [(short)5]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [3U] [i_1] [i_2] [3U] [2U] [3U]))) - (((3882180886U) - (var_18)))))));
                        var_33 = ((/* implicit */short) var_1);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 3; i_9 < 7; i_9 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [9U] [i_2] [i_8] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [0U] [i_0])) ? (((((/* implicit */_Bool) 8323072U)) ? (arr_10 [i_9] [i_1] [i_1]) : (var_18))) : (((((/* implicit */_Bool) 412786429U)) ? (var_7) : (arr_3 [i_0] [7U])))));
                            var_34 += ((/* implicit */unsigned int) var_12);
                        }
                        for (short i_10 = 3; i_10 < 7; i_10 += 4) /* same iter space */
                        {
                            var_35 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_10 - 3] [i_10 - 2] [i_10 - 2] [i_8 - 2] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_10 - 3] [i_8 - 2] [i_10] [i_8 - 2] [i_8 - 2] [(short)9])) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_12 [i_10 - 3] [i_10 + 2] [i_8] [i_8 - 2] [i_8] [i_8 + 1])) / (((/* implicit */int) arr_12 [i_10 - 3] [i_2] [i_8 - 2] [i_8 - 2] [i_2] [i_2]))))));
                            var_36 *= arr_12 [i_10] [i_8] [(short)6] [i_2] [i_0] [i_0];
                            arr_34 [i_0] [5U] [i_2] [i_8 + 1] [i_10] [i_0] = ((/* implicit */short) min((((((((/* implicit */_Bool) 412786456U)) ? (4286644223U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [(short)1] [i_8 + 1] [i_10]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)21386)))))), (((/* implicit */unsigned int) (short)-15121))));
                            arr_35 [i_2] [i_0] [(short)4] [i_0] [i_2] [i_2] [i_2] = var_17;
                            arr_36 [i_10 + 1] [i_0] [i_2] [5U] [i_0] [2U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)15872)) ? (((/* implicit */int) (short)-7916)) : (((/* implicit */int) (short)(-32767 - 1))))) > (((/* implicit */int) ((short) arr_22 [i_0] [i_10 - 1] [6U] [i_0] [i_10])))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 1; i_12 < 7; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_2] [i_1] [i_2] [i_11] [i_12] [i_11] [i_12 + 2])) ? (((/* implicit */int) arr_29 [i_0] [3U] [i_2] [i_0] [i_12 - 1] [i_12 - 1] [i_12 + 2])) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_2] [i_11] [i_1] [i_11] [i_12 + 2])))))));
                            var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_12 - 1]))));
                            arr_44 [i_0] [i_0] = ((((/* implicit */_Bool) arr_16 [i_12 + 2] [i_12 - 1] [i_12] [i_12 - 1] [(short)7])) ? (((unsigned int) var_6)) : (arr_22 [i_0] [i_12 + 1] [i_12 + 1] [i_0] [i_12 + 1]));
                            arr_45 [i_0] [i_1] [i_2] [i_11] [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25))) - (1U));
                        }
                        var_39 |= (~(arr_15 [i_11] [i_2] [i_1] [i_1] [(short)5]));
                    }
                }
                var_40 = ((short) ((((/* implicit */_Bool) ((7U) ^ (2982086698U)))) ? (4277277977U) : (((((/* implicit */_Bool) 3501853488U)) ? (var_7) : (var_11)))));
                arr_46 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_26 [(short)9] [i_0]) > (arr_6 [i_0] [i_0])))) / (((((/* implicit */int) var_0)) << (((var_8) - (1609930848U)))))))) ? (min((((/* implicit */unsigned int) (short)32745)), (447000577U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((arr_43 [i_0]), (var_13)))))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (3159382663U) : (4294967295U)))) || (((/* implicit */_Bool) var_7))))) * (((/* implicit */int) ((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) >= ((+(var_11))))))));
}
