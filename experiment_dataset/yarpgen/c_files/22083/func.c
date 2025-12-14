/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22083
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) ((int) arr_2 [i_0]));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (!(var_15))))) ? ((-(((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) var_7)))))) : (max((((/* implicit */int) arr_2 [i_1])), (arr_0 [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((signed char) (unsigned short)64663)))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_11))));
    var_23 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_9)))) / (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_16)) : (var_14)))))));
}
