/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189808
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
    var_12 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)2272))))) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)80))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = arr_0 [i_0];
                var_14 = ((/* implicit */signed char) (unsigned short)43797);
                var_15 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-22900))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-24402)) : (((/* implicit */int) (signed char)57))))))));
}
