/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37162
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
    var_20 = ((unsigned short) min((((var_0) + (((/* implicit */int) var_19)))), (((/* implicit */int) var_17))));
    var_21 = max((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))), (max((var_3), (((/* implicit */unsigned short) (short)0)))))), (var_12));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)8888)) * (((/* implicit */int) (unsigned short)11897)))), (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)12] [i_2] [i_3] [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((short)-1), (arr_6 [i_0] [i_1] [i_2] [i_0])))))))))));
                        var_24 = arr_0 [i_1];
                        var_25 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_0])))));
                    }
                } 
            } 
        } 
        var_26 |= ((/* implicit */int) ((unsigned short) var_3));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
    {
        var_27 = ((/* implicit */int) arr_3 [i_4] [i_4] [i_4]);
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_4 - 2] [i_4] [i_4 - 2])))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_13 [i_4 - 2])) > (((/* implicit */int) var_7)))) ? (((/* implicit */int) arr_2 [i_4] [i_4 + 1] [i_4])) : (var_5))))));
    }
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min(((short)14191), (var_14))))));
}
