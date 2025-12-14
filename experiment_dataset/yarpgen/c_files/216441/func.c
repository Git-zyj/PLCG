/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216441
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
    var_14 += ((/* implicit */short) var_5);
    var_15 = 8767269581742099783ULL;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) (short)-17649);
                arr_7 [i_1] [1LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32)) ? ((~(arr_2 [i_0]))) : (min((((/* implicit */long long int) (short)-17649)), (arr_3 [i_0] [i_0])))));
            }
        } 
    } 
}
