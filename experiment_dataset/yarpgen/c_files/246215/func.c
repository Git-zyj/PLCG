/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246215
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
    var_14 = ((/* implicit */int) (+((+(var_0)))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_13), ((~(((/* implicit */int) (signed char)76))))))), (((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) var_12)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [3LL] = ((/* implicit */long long int) arr_5 [14ULL] [i_0] [i_1]);
                var_16 = ((/* implicit */unsigned char) var_7);
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
