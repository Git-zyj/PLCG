/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48426
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)124)));
                    var_19 -= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_5 [i_2 - 1] [(unsigned char)4] [i_2 + 3])))) & (var_14)));
                }
            } 
        } 
    } 
    var_20 |= var_5;
}
