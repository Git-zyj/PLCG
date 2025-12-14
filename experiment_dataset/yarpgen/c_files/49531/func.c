/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49531
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 *= ((/* implicit */int) ((_Bool) ((var_4) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) + (arr_5 [10U])))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_0 [i_2] [i_0]);
                        arr_14 [i_1] [i_1] [i_0] [7] = (((_Bool)1) ? (524422272U) : (1170235320U));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_17 [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) 2777412598U))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((/* implicit */int) arr_13 [i_4 + 1] [i_0] [i_2] [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        for (int i_5 = 3; i_5 < 14; i_5 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned short) (-(arr_16 [i_1] [i_4 + 1] [i_4] [i_4] [i_5] [i_5])));
                            arr_22 [(unsigned short)0] [i_5] [i_4] [i_2] [i_0] = ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                            var_23 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((arr_16 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [9] [(unsigned short)15]) >= (arr_16 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4]));
                            arr_25 [i_0] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */_Bool) arr_20 [4] [i_1] [i_2] [i_4 + 1] [i_6 - 1]);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2402103489U)) ? (16383U) : (1551796114U)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_8 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [(unsigned short)14] [i_7]))) | (((((/* implicit */_Bool) (unsigned short)49843)) ? (568500982U) : (((/* implicit */unsigned int) -1026573768))))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2017197907U)) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_0])) : ((-(2147483647)))));
                        }
                    }
                    arr_29 [i_2] [i_1] [i_0] = ((((/* implicit */unsigned int) arr_2 [i_0])) & (var_6));
                    var_29 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2])) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2]))));
                    var_30 = min((arr_8 [i_2] [i_1] [i_2]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (arr_7 [i_0])));
                    arr_32 [12] [i_0] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [13U] [i_8]) : (((/* implicit */int) arr_3 [i_0] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0])))))));
                    arr_33 [i_0] [9] [i_0] [i_8] = arr_8 [i_0] [i_1] [i_8];
                    arr_34 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2277769398U)) ? (((/* implicit */unsigned int) 0)) : (1551796114U)));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((_Bool) min((var_1), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [7] [i_9 - 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_33 = ((arr_10 [i_10] [i_9] [i_1] [i_0]) > (((/* implicit */int) arr_15 [i_0] [i_0] [i_9] [i_10])));
                        arr_40 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((unsigned int) arr_12 [i_0])) << (((var_5) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_39 [i_10] [14U]))));
                        var_35 = ((/* implicit */unsigned int) ((_Bool) arr_11 [i_10] [i_9 - 1] [i_1] [i_0]));
                    }
                }
                arr_41 [i_0] = ((_Bool) (unsigned short)65535);
                var_36 = ((/* implicit */int) min((((/* implicit */unsigned short) min((arr_19 [i_0] [(unsigned short)13] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0] [8U] [i_0] [i_0])))), (arr_9 [i_0] [i_1] [i_1])));
                arr_42 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) arr_21 [i_0] [i_1] [i_1] [i_0] [i_0]));
            }
        } 
    } 
    var_37 = ((/* implicit */_Bool) var_13);
    var_38 = var_9;
}
