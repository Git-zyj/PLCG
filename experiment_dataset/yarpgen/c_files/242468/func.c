/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242468
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
    var_18 *= ((/* implicit */short) (~(var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_1)))))))));
                var_20 |= ((/* implicit */long long int) arr_3 [i_0] [(signed char)4] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_15))));
    var_22 = ((/* implicit */_Bool) ((int) max((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (6431584508488043393LL))), (((/* implicit */long long int) max((var_16), (((/* implicit */int) var_4))))))));
}
