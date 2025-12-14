/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35787
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
    var_20 = ((/* implicit */unsigned long long int) var_14);
    var_21 = ((/* implicit */unsigned short) var_15);
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned short)45646))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */signed char) 11818557244284556188ULL);
                arr_5 [i_0] [i_1] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((10948751292304103253ULL), (((/* implicit */unsigned long long int) var_3))))) ? (arr_1 [i_0]) : (((((/* implicit */int) (unsigned short)17)) >> (((((/* implicit */int) (unsigned short)19867)) - (19848))))))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                var_24 = arr_4 [i_0];
            }
        } 
    } 
}
