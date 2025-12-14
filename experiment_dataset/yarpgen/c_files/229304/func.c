/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229304
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
    var_10 = ((31U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14873))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (~(24U))))));
        var_12 *= ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */_Bool) 33U);
                    arr_6 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */int) ((_Bool) -2LL));
                }
            } 
        } 
    }
}
