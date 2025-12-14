/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45039
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = (_Bool)1;
                            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((/* implicit */short) (-(((/* implicit */int) min((max((var_2), (var_4))), (arr_2 [i_0] [i_3]))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((_Bool) ((var_8) * ((((-2147483647 - 1)) / (arr_7 [i_0] [i_1] [i_0])))));
                var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)103))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (_Bool)1);
    var_18 = ((/* implicit */short) max((var_18), (var_9)));
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (_Bool)1);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) - (((/* implicit */int) max((((/* implicit */short) max(((_Bool)1), (arr_17 [i_4])))), (((short) -2147483646)))))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    var_21 = arr_13 [i_4];
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        for (int i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_22 = (+(((/* implicit */int) ((((-1259290712) + (((/* implicit */int) (unsigned char)200)))) != (max((((/* implicit */int) var_10)), (2022674173)))))));
                                arr_28 [i_8] [i_4] [i_6] [i_5] [i_5] [i_4] [i_4] = ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) (unsigned char)15)) : (arr_15 [i_4] [i_5])))) ? ((~(((/* implicit */int) arr_26 [(unsigned char)8] [i_6 + 1] [i_7 - 1] [i_7] [i_8 + 3] [i_4 - 1])))) : (min((((/* implicit */int) ((var_3) || ((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_5] [(short)19])))))));
                                var_23 -= ((/* implicit */_Bool) (((_Bool)1) ? (max((((arr_16 [i_4 - 1]) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_4)))) : (-775768420)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+((+(((/* implicit */int) arr_22 [i_6] [i_6])))))))));
                        arr_31 [(unsigned char)8] [i_4] [i_9] [i_9 + 2] [i_9] = (+(((/* implicit */int) (!((_Bool)1)))));
                        var_25 += ((((/* implicit */int) arr_14 [i_4 - 1] [i_9])) % (((/* implicit */int) (unsigned char)70)));
                        arr_32 [i_5] [i_5] [i_4] [i_9] [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)212);
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_35 [i_4] [i_5] [i_6] [i_4] = ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) + (-255552878))), (((/* implicit */int) arr_20 [i_10] [i_5]))))) ? ((((_Bool)1) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) (_Bool)1)))) : (((((var_4) ? (((/* implicit */int) (_Bool)1)) : (var_1))) | (((/* implicit */int) arr_17 [i_4])))));
                        /* LoopSeq 3 */
                        for (int i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) (((_Bool)1) ? (arr_29 [i_11] [(unsigned char)3] [i_6 + 1] [(short)3] [i_4]) : ((-(((/* implicit */int) arr_18 [i_4 - 1] [i_6 - 1] [i_10 + 1]))))));
                            var_27 = max((min((min((((/* implicit */int) (_Bool)1)), (-855987067))), (max((arr_39 [i_4] [i_4] [i_6] [(unsigned char)20] [i_5]), (((/* implicit */int) arr_36 [i_4] [(short)22] [i_5] [i_6] [i_10] [(short)22])))))), ((-(max((arr_37 [i_4] [i_5] [i_10 + 1]), (((/* implicit */int) arr_25 [8] [8] [(_Bool)1] [(short)6] [i_11])))))));
                            arr_40 [i_4] [i_6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_4 - 1] [i_4 - 1] [i_6] [i_10 + 1] [i_6])) ? (var_7) : (((/* implicit */int) max((arr_36 [i_4 - 1] [i_4 - 1] [i_5] [2] [(unsigned char)11] [i_11 + 1]), (((_Bool) var_2)))))));
                            arr_41 [i_4] [i_10] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)-17237)) % (max((var_5), (((/* implicit */int) arr_34 [i_4] [i_5] [i_11] [i_10]))))))));
                        }
                        for (int i_12 = 2; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            arr_45 [(_Bool)1] [i_4] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_3) ? (-1948162574) : (((/* implicit */int) arr_13 [6])))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_23 [i_4] [i_4] [i_6] [i_6] [8] [i_12]))))) ? (((/* implicit */int) (unsigned char)22)) : ((~(-1376346512))))) : (((((int) (_Bool)1)) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)71))))))));
                            var_28 |= ((/* implicit */short) (+(arr_39 [9] [i_6] [i_6] [i_6 - 2] [i_6 - 2])));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_13 [i_4]))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_38 [i_5] [i_5])) ? (((/* implicit */int) arr_26 [i_4 - 1] [i_4 - 1] [i_6] [i_10] [(_Bool)1] [12])) : (var_6))) % (((/* implicit */int) var_12)))))));
                        }
                        for (int i_13 = 2; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            arr_49 [i_6 + 2] [i_4] [i_4] [i_5] [i_13] [i_4] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)58)) != (((((/* implicit */int) (!(((/* implicit */_Bool) -2136579684))))) * (arr_42 [i_4] [i_5] [i_6] [(_Bool)1] [i_13])))));
                            arr_50 [i_4 - 1] [i_5] [i_6] [i_4] [i_13] = ((/* implicit */unsigned char) (~(max(((+(((/* implicit */int) var_13)))), ((((_Bool)1) ? (85692960) : (2109760135)))))));
                        }
                        arr_51 [i_4] [i_10] = ((/* implicit */unsigned char) 1387388704);
                    }
                }
            }
        } 
    } 
}
