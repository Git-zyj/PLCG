/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233269
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
    var_11 = (!(var_7));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
                    arr_7 [i_0] [i_0 + 2] [i_0] [i_2] |= ((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [16U]);
                }
            } 
        } 
    } 
    var_12 = min(((+(min((4294967286U), (((/* implicit */unsigned int) var_10)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_8))))) : (((((/* implicit */_Bool) 2U)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
}
