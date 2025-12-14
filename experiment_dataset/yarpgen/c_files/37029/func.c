/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37029
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((var_10), (((/* implicit */short) var_2)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_4);
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_1))));
                    var_14 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) min((((/* implicit */int) var_2)), (max((var_3), (((/* implicit */int) var_8))))));
}
