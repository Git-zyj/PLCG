/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236038
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) ^ ((-(arr_5 [i_0] [i_1] [i_2])))));
                    var_16 = ((/* implicit */int) max((((/* implicit */long long int) var_3)), (((arr_7 [i_0] [i_0] [i_0 - 3] [i_1]) | (max((4484745263318255118LL), (((/* implicit */long long int) var_14))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((short) var_7));
    var_18 = ((/* implicit */unsigned int) var_9);
}
