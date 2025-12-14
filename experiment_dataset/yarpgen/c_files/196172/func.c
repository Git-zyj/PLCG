/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196172
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
    var_15 = ((/* implicit */unsigned char) (((_Bool)0) ? (var_4) : (((/* implicit */int) (unsigned char)151))));
    var_16 = ((/* implicit */_Bool) min((((var_12) * (((/* implicit */int) (_Bool)0)))), ((-(var_12)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1])))) && (((/* implicit */_Bool) ((int) 121494600))))) ? (min((arr_3 [i_1]), ((+(var_12))))) : (min(((+(((/* implicit */int) var_7)))), (arr_4 [i_0] [i_1])))));
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned char) (+(arr_4 [(_Bool)1] [8])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */int) arr_2 [i_1]);
                        arr_15 [i_2] = ((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                        arr_16 [i_2] [i_1] [i_1] [i_1] = (-(((/* implicit */int) (_Bool)1)));
                        arr_17 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)78))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_21 [i_2] = ((((/* implicit */int) arr_7 [i_2 + 2])) / (((/* implicit */int) var_0)));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_26 [i_2] = arr_0 [i_0];
                            var_19 ^= ((/* implicit */_Bool) ((unsigned char) var_12));
                        }
                        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            var_20 = 367116052;
                            arr_31 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (-(((int) var_12))));
                        }
                        var_21 = ((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            arr_34 [i_2] [(_Bool)1] = arr_33 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 2];
                            arr_35 [i_2] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] = (-(((/* implicit */int) var_9)));
                            var_22 = ((/* implicit */unsigned char) var_11);
                            arr_36 [(_Bool)1] [i_2] [i_2 + 1] = (!((_Bool)1));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_39 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_9);
                            var_23 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned char)73)) >> (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_29 [i_0])))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)255))))));
                            arr_40 [i_0] [(unsigned char)7] [i_2] [(unsigned char)7] [i_4] [i_2] = ((/* implicit */_Bool) arr_38 [i_2] [i_1] [(_Bool)1]);
                        }
                    }
                    arr_41 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-502290068) <= (((/* implicit */int) (_Bool)1))))) <= (arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2])));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_2])) ? (arr_14 [i_0] [i_2]) : (arr_14 [i_2] [i_2])));
                    var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
                for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((int) (unsigned char)46)), (((((/* implicit */int) var_13)) & (var_12)))))) ? ((~(((/* implicit */int) (unsigned char)7)))) : (var_2)));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) 50331648)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned char) var_14))))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_9))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_9])) : (-371133619)))) ? (((/* implicit */int) max((arr_20 [i_0] [i_1] [i_9]), (arr_20 [i_1] [0] [3])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_20 [i_0] [i_1] [i_9]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            arr_53 [i_9] [(unsigned char)0] [i_9] [1] [i_0] = ((/* implicit */_Bool) -502290073);
                            arr_54 [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned char)7] [i_10] [i_11] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]);
                        }
                        var_31 = ((/* implicit */int) var_11);
                    }
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        arr_57 [6] [i_0] = ((/* implicit */unsigned char) ((arr_52 [i_0] [i_0] [i_9] [10] [i_12]) ? (((var_7) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_0] [i_0])))) : (((int) ((_Bool) var_10)))));
                        var_32 += ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((max((((/* implicit */int) arr_32 [i_0] [i_0] [(unsigned char)7] [i_0] [i_9] [i_12])), (arr_14 [i_0] [i_9]))), (min((var_4), (((/* implicit */int) var_5))))))));
                    }
                }
            }
        } 
    } 
    var_33 = ((int) min((-1224326312), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    var_34 = ((/* implicit */unsigned char) var_11);
}
