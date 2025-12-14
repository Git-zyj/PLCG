/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199817
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) 33554431LL);
                    arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_5 [2])) + (((var_8) ? (1856074702) : (arr_10 [i_1] [i_2])))));
                    arr_14 [i_2] = ((int) min((min((((/* implicit */unsigned int) var_7)), (2365335140U))), (((/* implicit */unsigned int) ((_Bool) arr_8 [i_0] [i_2] [i_1])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (+(7771237081585045687LL)));
}
