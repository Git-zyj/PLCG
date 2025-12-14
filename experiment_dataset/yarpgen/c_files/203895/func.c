/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203895
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
    var_11 = ((/* implicit */int) ((((/* implicit */int) (short)-23984)) != (-2009447271)));
    var_12 = ((/* implicit */int) 4294967295U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_2 [i_1 - 1] [i_1] [i_1 - 1])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_14 = max((var_3), ((~(var_3))));
}
