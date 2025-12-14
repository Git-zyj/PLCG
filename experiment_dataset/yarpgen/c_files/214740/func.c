/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214740
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                    var_17 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_3)) + (59))))))));
                    var_18 = ((unsigned int) ((signed char) (unsigned char)255));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_2);
}
