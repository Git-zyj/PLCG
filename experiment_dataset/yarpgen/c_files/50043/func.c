/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50043
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)4] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) var_11)) : (max((25403867), (((/* implicit */int) var_15))))));
                arr_7 [i_0] = max((((/* implicit */int) arr_4 [i_0])), (((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) arr_5 [i_0] [(short)4] [i_0]))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_5 [i_0] [(unsigned char)8] [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min((max((-448918258), (-797945814))), (((/* implicit */int) var_15)))))));
}
