/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39211
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
    var_12 = ((/* implicit */_Bool) (unsigned char)30);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) min((var_2), (((/* implicit */int) var_7)))))), (min((((/* implicit */int) var_6)), ((-(arr_1 [(_Bool)1])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_3))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -860257533)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_16 = ((/* implicit */unsigned char) ((arr_3 [i_3 + 1] [i_3 + 1]) < (arr_3 [i_3 - 2] [i_3 - 2])));
                    }
                    for (unsigned char i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (-(((1180774566) + (((/* implicit */int) (unsigned char)15))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
                    }
                    arr_13 [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_17 [9] = min((min((((/* implicit */int) var_0)), (max((((/* implicit */int) (unsigned char)15)), (1180774582))))), (min(((-(var_2))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (_Bool)1)))))));
        arr_18 [i_5] = ((/* implicit */_Bool) min((var_11), ((((+(var_2))) + (min((var_4), (1180774566)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_30 [i_7] [i_8] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -1180774594)) ? (((/* implicit */int) (unsigned char)15)) : (-1180774566))), ((((!(((/* implicit */_Bool) var_2)))) ? ((-(((/* implicit */int) var_8)))) : (var_3)))));
                            var_19 = ((/* implicit */int) ((_Bool) 2147483630));
                            var_20 = var_9;
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 4) 
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((int) ((arr_20 [i_10] [i_7] [i_6]) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_8)))));
                            var_21 = ((_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_4))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        arr_39 [(unsigned char)12] [i_11] [i_7] [(unsigned char)11] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) ^ (-1)))) ? (((((/* implicit */_Bool) min((var_2), (var_11)))) ? (arr_26 [i_6] [i_6] [i_7] [i_11] [i_7] [i_5]) : (((/* implicit */int) min(((_Bool)1), (arr_36 [i_5] [i_5] [i_7] [i_11])))))) : ((~(arr_26 [(_Bool)1] [i_7] [i_7] [i_6] [(unsigned char)16] [(unsigned char)1])))));
                        var_23 = ((/* implicit */unsigned char) ((_Bool) var_11));
                        var_24 = ((int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_35 [i_5] [i_6] [(_Bool)1] [i_11] [i_6] [i_6])) : (var_5))) >> (((((-4) - (var_10))) - (961256594)))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) min((arr_26 [(unsigned char)4] [i_6] [(_Bool)1] [i_7] [i_7] [(_Bool)1]), (var_11)))))));
                        var_26 = ((/* implicit */int) var_8);
                    }
                    var_27 = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_49 [i_13] = var_7;
                            arr_50 [i_7] [(unsigned char)0] [i_7] [i_7] [i_7] [i_7] [(unsigned char)1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 905274083)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_35 [i_5] [i_5] [10] [i_5] [i_5] [i_5])))), (((/* implicit */int) min((var_9), (var_1))))));
                            var_28 = ((/* implicit */_Bool) var_9);
                            arr_51 [i_5] [i_6] [i_7] [i_13] [i_14] [i_13] = min((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_41 [i_5] [i_6] [i_7] [(_Bool)1])))) : (((/* implicit */int) ((unsigned char) var_6))))), ((+(((/* implicit */int) var_1)))));
                            arr_52 [i_5] = ((/* implicit */int) var_0);
                        }
                        var_29 = ((unsigned char) (+((-(var_4)))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_31 [i_5] [(unsigned char)18] [(unsigned char)16] [i_7] [i_5] [(unsigned char)16])), (var_3)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [(_Bool)1] [i_6] [7])) : (((/* implicit */int) var_6)))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (arr_43 [(_Bool)1] [(unsigned char)18] [i_7] [i_7] [i_7] [6]))))), ((+(var_11)))));
                        var_31 = min(((+(1160559569))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_4))))))));
                        arr_56 [i_5] [i_5] [(unsigned char)15] [i_5] [(_Bool)1] [i_5] = max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)246))))) ? (var_2) : (max((((/* implicit */int) (_Bool)1)), (var_3))))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_8))))));
                        var_32 = min((-1227419789), (2147483647));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned char) (((((_Bool)1) ? ((-(var_2))) : (((((/* implicit */_Bool) var_9)) ? (arr_55 [i_5] [i_5]) : (var_3))))) ^ (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_16 = 2; i_16 < 24; i_16 += 4) 
    {
        var_34 = ((/* implicit */unsigned char) ((max((var_5), (arr_57 [i_16 - 2]))) | (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_58 [i_16 - 2])))))));
        var_35 = ((_Bool) var_10);
    }
    /* LoopNest 2 */
    for (unsigned char i_17 = 3; i_17 < 17; i_17 += 4) 
    {
        for (int i_18 = 2; i_18 < 17; i_18 += 4) 
        {
            {
                var_36 = ((/* implicit */unsigned char) min((var_36), (arr_53 [i_17] [i_18] [i_17] [i_17])));
                var_37 = var_4;
                var_38 = ((unsigned char) (unsigned char)47);
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned char) var_6);
}
