/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36101
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(785324292U)));
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (((((-(((/* implicit */int) arr_0 [i_1])))) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1 - 1])) - (20103))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) 785324285U);
    var_12 = ((/* implicit */unsigned short) var_0);
}
