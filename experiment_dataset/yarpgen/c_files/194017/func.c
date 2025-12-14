/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194017
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (min((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)60)))))))), ((+((~(((/* implicit */int) (unsigned char)195))))))))));
                var_20 = ((/* implicit */unsigned short) (~(max((var_8), (((/* implicit */int) var_15))))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) (unsigned char)196)), (var_17)))), (max((min((((/* implicit */int) var_10)), (var_14))), (((/* implicit */int) (unsigned char)57))))));
                var_21 = ((/* implicit */long long int) (unsigned char)29);
                var_22 = ((/* implicit */unsigned char) (~(var_9)));
            }
        } 
    } 
    var_23 &= ((/* implicit */signed char) 1591721888U);
}
