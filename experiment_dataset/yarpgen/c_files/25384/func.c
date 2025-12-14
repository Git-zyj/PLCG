/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25384
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min(((signed char)113), ((signed char)-17)))) ? (((/* implicit */int) max((var_3), (var_15)))) : (((/* implicit */int) var_0)))) / ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_15))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+((((-(((/* implicit */int) (signed char)-113)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)0))))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_7)))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1])))) + (126))) - (13)))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_16)))) & (((/* implicit */int) arr_2 [i_1])))) : ((+((~(((/* implicit */int) arr_0 [(signed char)11]))))))));
                arr_6 [i_1] [i_1] [i_0] = arr_1 [i_0];
            }
        } 
    } 
    var_20 = min(((signed char)58), ((signed char)-104));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */int) max((var_11), (var_2)))) << (((((((/* implicit */int) var_12)) + (76))) - (13))))) : ((~(((/* implicit */int) var_13)))))))));
}
