/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3028
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
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(_Bool)1] = ((/* implicit */long long int) max(((+(((((/* implicit */int) arr_2 [i_0])) ^ (arr_4 [i_0]))))), (((/* implicit */int) var_11))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (_Bool)1))));
            }
        } 
    } 
    var_16 &= ((/* implicit */_Bool) var_1);
    var_17 = ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */int) (short)25603);
    var_19 = ((/* implicit */unsigned long long int) (unsigned short)48080);
}
