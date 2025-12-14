/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23539
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) arr_0 [i_1]);
                var_10 ^= ((/* implicit */_Bool) ((unsigned short) arr_4 [i_1]));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)1422))))))));
    var_12 = ((/* implicit */short) var_6);
}
