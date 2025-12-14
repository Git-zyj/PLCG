/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249947
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (134217720U))) >> (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (4160749576U)))))));
    var_11 = max((((/* implicit */unsigned int) var_0)), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4160749597U))) << (((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */unsigned int) var_2);
                var_13 = ((/* implicit */short) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */int) 134217699U);
}
