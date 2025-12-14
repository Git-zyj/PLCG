/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217264
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) (-(1073741760)));
                var_18 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                var_19 = ((/* implicit */int) (+(max((arr_4 [i_0 + 2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 349071430)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((/* implicit */int) (short)-26123)), (715656747)));
}
