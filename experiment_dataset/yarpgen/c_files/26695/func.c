/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26695
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                var_14 ^= ((/* implicit */signed char) arr_3 [(signed char)3] [i_1]);
                var_15 = ((signed char) var_8);
            }
        } 
    } 
    var_16 = var_0;
    var_17 += var_6;
}
