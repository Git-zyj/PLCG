/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53980
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = (signed char)-28;
                arr_6 [(signed char)6] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_16))))) ? ((~(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_9))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)79))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (((+(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)-9)))))) / (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) max((var_14), ((signed char)1)))) : (((/* implicit */int) var_4))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((var_6), (var_15))))) ? (((((/* implicit */int) var_18)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
}
