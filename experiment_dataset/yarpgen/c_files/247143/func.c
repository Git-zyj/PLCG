/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247143
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
    var_14 = var_5;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-1273)) : (((/* implicit */int) arr_2 [i_0])))) > (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (min((((/* implicit */int) max((arr_0 [i_0] [i_0]), (var_10)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-3372))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [10U] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(short)10] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_9))) : (((((/* implicit */_Bool) arr_3 [14U] [(short)13] [(short)13])) ? (2925596659U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17844)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [7U] [i_2])) ? (arr_6 [(short)11] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3378))))) < (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (var_4) : (arr_3 [i_0] [(short)6] [(short)6]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) / (((/* implicit */int) (short)13684))))) | (arr_6 [14U] [i_1] [i_2] [i_0]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) var_10)))))));
                        var_18 = ((/* implicit */short) 3877392982U);
                    }
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        var_19 -= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) min((var_0), (var_10)))))));
                        var_20 = ((unsigned int) arr_13 [i_0] [(short)13] [i_2] [7U]);
                        var_21 ^= var_1;
                        var_22 = (+(arr_13 [i_0] [i_0] [8U] [i_0]));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned int) arr_19 [7U] [i_6 + 4] [i_6] [i_6 - 1] [i_6 - 1]);
                                var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_10 [0U] [i_6 + 3] [i_6 - 3] [i_6 - 1] [i_6 - 3])) ? (((/* implicit */int) arr_10 [i_0] [i_6 + 4] [i_6 - 2] [i_6 - 1] [i_6 + 2])) : (((/* implicit */int) arr_10 [i_2] [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned int) min(((short)-3372), (var_12)));
                                var_26 = max(((+((+(var_1))))), (((/* implicit */unsigned int) max((arr_18 [i_7] [i_8 + 1] [1U] [i_8 + 2] [i_8 + 1] [i_8 - 2]), (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8 + 1])))));
                                var_27 = var_13;
                                var_28 -= arr_16 [i_0] [(short)7] [i_0] [i_8 + 2];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
