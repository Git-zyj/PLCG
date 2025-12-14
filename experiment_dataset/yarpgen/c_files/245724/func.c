/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245724
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
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_4 [i_1 + 3])))) ? (min((((/* implicit */unsigned int) var_0)), (arr_4 [i_1 + 2]))) : (((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 2]))))))));
                var_18 = ((/* implicit */long long int) arr_4 [i_0]);
            }
        } 
    } 
}
