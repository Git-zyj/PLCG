/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33992
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
    var_14 *= ((/* implicit */unsigned long long int) (unsigned short)8593);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)56943))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                var_16 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 3])))) > (((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))))));
                var_17 = ((/* implicit */unsigned long long int) (short)7);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_8);
}
