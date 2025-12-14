/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222256
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
    var_18 = ((/* implicit */signed char) 4029579360U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) <= (((arr_3 [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1]))) : (var_3)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    var_21 = ((/* implicit */signed char) ((_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_4 [(short)8] [(short)8] [i_2]))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 1]))));
                    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30718)) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) 4029579360U);
                                arr_15 [i_0] = ((/* implicit */_Bool) var_12);
                                var_24 += ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4])) && (arr_3 [i_3])));
                                var_25 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_12 [i_4] [i_2])) * (((/* implicit */int) arr_7 [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) arr_22 [i_5 + 1] [i_6] [i_5 - 1] [i_5 + 1]);
                    var_28 = ((/* implicit */short) arr_20 [i_5] [i_5] [i_7]);
                }
            } 
        } 
    } 
    var_29 *= ((unsigned int) min((((signed char) var_1)), (((/* implicit */signed char) ((_Bool) var_13)))));
    var_30 = ((/* implicit */_Bool) var_12);
}
