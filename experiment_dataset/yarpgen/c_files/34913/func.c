/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34913
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
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((unsigned int) var_1));
                arr_5 [i_0] [i_1] = ((/* implicit */short) var_10);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */short) var_0)), (var_1))))));
            }
        } 
    } 
}
