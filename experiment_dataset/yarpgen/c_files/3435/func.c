/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3435
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
    var_15 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (var_5)))))) ? (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)14)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [(short)1])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)71);
            }
        } 
    } 
}
