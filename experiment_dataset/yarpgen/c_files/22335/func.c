/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22335
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((int) var_7)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((long long int) ((signed char) arr_5 [i_0])));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_2))));
                var_14 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((-3282861275610525767LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (163680038U))))))), ((+(12593023272179683006ULL)))));
    var_16 = ((/* implicit */short) (~(max((((((/* implicit */_Bool) 8178858334108588379LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((var_7), ((unsigned short)32))))))));
}
