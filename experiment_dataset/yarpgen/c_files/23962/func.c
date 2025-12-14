/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23962
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
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) (-(arr_6 [i_1])));
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(short)2])) - (((/* implicit */int) (short)-16320))))), (arr_3 [i_0] [i_0 + 2] [i_0])))));
                arr_7 [i_1] = ((/* implicit */_Bool) (short)-16320);
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_3);
    var_16 = (!(((/* implicit */_Bool) var_11)));
}
