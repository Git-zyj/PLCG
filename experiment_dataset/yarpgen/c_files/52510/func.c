/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52510
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
    var_17 = var_11;
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((signed char)30), ((signed char)95)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) % (((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))) + (2147483647))) << (((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))) + (41))) - (16)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = arr_2 [i_0] [i_1];
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((signed char) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)112)))))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_8)))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
}
