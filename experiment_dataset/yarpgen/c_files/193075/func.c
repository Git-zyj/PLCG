/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193075
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
                var_15 = ((/* implicit */int) min((var_15), (((((((/* implicit */int) arr_0 [i_0] [7])) / (((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_1] [(unsigned char)13]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_16 &= ((/* implicit */unsigned char) var_1);
                        arr_10 [i_3] [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((var_6) >= (((/* implicit */int) var_11))));
                        arr_11 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) ((1732470490) <= (((var_5) & (((/* implicit */int) var_8))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 506029530))));
                            arr_17 [i_0] [(unsigned char)2] [i_2] [(unsigned char)4] [i_0] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_5 + 1])) ? (((/* implicit */int) var_3)) : (var_13)));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)3)) >= (arr_6 [i_2])))))));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_6] |= -700167788;
                            var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_2 - 1] [i_4] [i_6] [0]))));
                        }
                        for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                        {
                            arr_24 [i_0] [15] [i_2] [i_2] [i_4] [i_2] [i_7] = ((/* implicit */unsigned char) ((int) var_11));
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (var_14))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_0)))));
                        }
                        arr_25 [i_4] [i_2] [i_2] [i_0] = ((((int) var_9)) >> (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned char)252))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        arr_30 [i_8] [0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) -1732470473);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1074172175)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)246))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            var_22 &= ((/* implicit */unsigned char) ((int) ((arr_14 [i_0] [i_0] [i_1]) ^ (var_5))));
                            arr_33 [i_2] = (i_2 % 2 == 0) ? (((arr_14 [i_1] [i_2 + 2] [i_2]) << (((arr_14 [i_2] [(unsigned char)14] [i_2]) - (987652668))))) : (((arr_14 [i_1] [i_2 + 2] [i_2]) << (((((arr_14 [i_2] [(unsigned char)14] [i_2]) - (987652668))) + (877491663)))));
                            var_23 = (+(var_0));
                        }
                    }
                    for (int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */int) ((arr_22 [i_2 - 1] [12] [i_2 - 1] [i_2 + 1] [i_2] [i_2]) <= (arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_0])));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)27)) : (var_0)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1])) ? (arr_14 [i_2 - 1] [i_2 + 1] [i_1]) : (var_6)));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            arr_43 [(unsigned char)2] [i_1] [i_2] [(unsigned char)2] [i_12] = ((unsigned char) (unsigned char)0);
                            arr_44 [i_2] [i_1] [i_2] [i_1] [i_12] = ((int) var_11);
                            var_27 -= ((/* implicit */int) arr_41 [i_0] [i_1] [i_2] [i_11] [14]);
                            arr_45 [i_2] [i_2] [8] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((unsigned char) var_11));
                        }
                        for (int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)9)) > (((/* implicit */int) var_9))));
                            arr_48 [i_13] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -340460525))) ? (((/* implicit */int) (unsigned char)59)) : (((var_4) ^ (((/* implicit */int) var_11))))));
                            arr_49 [i_0] [i_2] [i_11] = ((/* implicit */int) ((((/* implicit */int) arr_23 [(unsigned char)4] [i_1] [i_13] [i_11] [i_13] [(unsigned char)17])) != (((/* implicit */int) arr_23 [i_13] [i_11] [i_0] [i_1] [i_1] [i_0]))));
                        }
                        arr_50 [i_0] [i_11] [i_2] [i_1] [i_0] &= 694721798;
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            arr_54 [i_0] [i_1] [i_0] [i_0] [i_0] &= (~(((/* implicit */int) var_8)));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_39 [i_14] [i_0] [i_2 - 1] [i_0] [14]))));
                            arr_55 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((arr_31 [i_0] [i_2] [i_2 + 2]) | (1410311736)));
                        }
                    }
                    for (int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2 - 1] [i_15]))));
                        arr_59 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((var_14) + (var_6)));
                        var_31 -= ((/* implicit */unsigned char) ((-905349526) >= (((/* implicit */int) var_8))));
                        var_32 |= ((/* implicit */int) ((arr_52 [i_2 + 2] [i_2] [i_2 - 1] [1]) >= (-1074172176)));
                    }
                }
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    var_33 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_16] [i_1])) ? (arr_1 [i_16]) : (var_1))) > (((/* implicit */int) arr_8 [i_0]))));
                    arr_63 [i_0] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_36 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_0] [i_1] [i_16]))))))));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (var_9)));
                }
                arr_64 [i_0] [i_0] [i_1] = var_0;
            }
        } 
    } 
    var_35 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1732470468)) ? (((/* implicit */int) (unsigned char)248)) : (820205707))), (var_4)));
    var_36 -= ((/* implicit */unsigned char) var_10);
}
