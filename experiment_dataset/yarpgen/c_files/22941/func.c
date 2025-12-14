/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22941
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
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-29440)) : ((((!(((/* implicit */_Bool) arr_5 [i_0])))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_5 [i_0]))))));
                arr_7 [i_0] = var_1;
            }
        } 
    } 
    var_11 += ((/* implicit */short) ((((/* implicit */_Bool) (short)15400)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
    var_12 = var_6;
}
