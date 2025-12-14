/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216572
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
    var_14 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_6));
    var_15 += ((/* implicit */short) (-(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                var_17 = ((/* implicit */signed char) max((max((var_12), (((/* implicit */long long int) (short)-22950)))), (max((((-4921082629944308867LL) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))), ((~(arr_1 [i_1 - 1])))))));
            }
        } 
    } 
}
