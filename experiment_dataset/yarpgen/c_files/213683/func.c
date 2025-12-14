/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213683
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
    var_14 = ((/* implicit */short) ((1855143619) >= (((/* implicit */int) (short)-30798))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((((/* implicit */_Bool) (+((-(2147483647)))))) ? (((/* implicit */int) min(((short)30799), (((/* implicit */short) arr_5 [i_1]))))) : (((/* implicit */int) max((arr_5 [i_0]), (var_9)))));
                arr_7 [11] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) < (((/* implicit */int) (unsigned char)20))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) min(((unsigned char)235), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */int) arr_3 [i_0])) << (((((/* implicit */int) var_4)) - (35553)))))));
            }
        } 
    } 
}
