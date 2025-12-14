/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242821
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((-289487307), (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) ((922313195) >= (arr_2 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 27ULL)))))))));
                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_20 &= ((/* implicit */int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
}
