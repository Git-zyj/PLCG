/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247268
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
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)27927)) : (((((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0] [i_0])), ((signed char)100)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_10))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_5)))))))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
}
