/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50961
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
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 &= arr_3 [i_0 - 4];
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 3] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) (~(239951863)))), (var_3)))));
}
