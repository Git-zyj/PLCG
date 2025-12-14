/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247912
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */int) var_7);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_2])))) : (max((((/* implicit */int) (signed char)73)), (var_2)))));
                    var_20 = ((/* implicit */long long int) (signed char)76);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
    var_22 = ((/* implicit */short) max((var_16), (((/* implicit */long long int) (signed char)76))));
}
