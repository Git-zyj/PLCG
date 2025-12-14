/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32443
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), ((unsigned short)35370)))))))));
                    arr_10 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    var_20 = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) -4611686018427387904LL);
}
