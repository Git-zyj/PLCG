/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28610
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
    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_9), (var_11)))) : (((/* implicit */int) ((short) var_10)))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_8))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (short)-7246)) ? (((/* implicit */int) (short)-7729)) : (((/* implicit */int) (signed char)124))))))) || (((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] &= arr_7 [i_0] [i_0] [i_0];
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_0] [i_0])) | (((/* implicit */int) arr_2 [i_2] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)1])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-43)), (arr_6 [(short)3] [(signed char)5]))))))));
                }
            } 
        } 
    } 
}
