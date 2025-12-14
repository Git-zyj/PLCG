/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246110
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 - 1]))))) : ((~(arr_3 [i_2]))))));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_10);
                    arr_9 [i_0 - 1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) - (max((((/* implicit */long long int) min((-1271781688), (1524212842)))), ((~(-8795111070270605010LL)))))));
    var_20 = var_5;
}
