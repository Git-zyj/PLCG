/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219153
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_7 [i_0] [i_0] [i_1] [i_2]), ((short)22741))), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(short)3])) || (((/* implicit */_Bool) (short)-1409)))))))) ? ((-(((/* implicit */int) arr_3 [(short)6] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(short)16] [(short)16])) ^ (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_5 [(short)14] [i_1])) : (((/* implicit */int) (short)32767))))));
                    var_21 = max((max((min((arr_7 [i_2] [i_1 + 1] [i_1] [i_0]), ((short)(-32767 - 1)))), (max((arr_4 [i_0] [i_0] [i_0] [(short)2]), (var_9))))), (arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 + 1]));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_22 = arr_5 [i_3] [i_3];
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_3]))));
    }
    var_24 = ((/* implicit */short) (+(((/* implicit */int) ((short) var_7)))));
    var_25 = ((short) ((short) (short)28502));
}
