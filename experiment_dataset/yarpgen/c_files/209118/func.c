/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209118
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) <= (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) arr_2 [(short)2] [i_1] [(short)2])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)0))))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned short) var_9)))));
            }
        } 
    } 
    var_13 &= ((/* implicit */signed char) (_Bool)0);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (_Bool)1))));
}
