/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231622
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
    var_16 = ((/* implicit */int) ((signed char) 218481476));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned short) var_8);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_1 [i_1] [i_0]))));
                var_19 &= min((((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (var_12)))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (max((1238046716U), (3056920579U))))), (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [16U] [i_0] [i_0])))) ? (((((/* implicit */_Bool) 891824535)) ? (((/* implicit */unsigned int) var_9)) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17456)) && (((/* implicit */_Bool) var_6))));
}
