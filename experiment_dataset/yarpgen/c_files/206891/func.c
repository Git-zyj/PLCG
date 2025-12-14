/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206891
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (1U)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_11))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) arr_6 [i_1] [i_0]);
                    arr_8 [i_1] = arr_5 [i_2 + 1] [i_0 + 1];
                }
            } 
        } 
    } 
}
