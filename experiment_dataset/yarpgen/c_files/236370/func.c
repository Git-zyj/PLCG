/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236370
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
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 = max((((/* implicit */unsigned int) max((arr_1 [i_0] [i_0 + 2]), (var_10)))), (min((((/* implicit */unsigned int) (unsigned char)41)), (843550531U))));
                    arr_8 [i_2] [i_1] [i_2 - 2] [i_2 - 2] = max((max((arr_4 [i_2 - 4] [i_2 - 4] [i_2 + 3] [i_2 - 4]), (((/* implicit */long long int) (short)-2048)))), (max((arr_4 [i_2 + 2] [i_2 + 4] [i_2 - 4] [i_2 + 3]), (arr_4 [i_2 + 1] [i_2 - 4] [i_2 + 1] [i_2 - 2]))));
                    arr_9 [i_2] [i_1] [i_2 + 2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned int) var_0)), (var_9)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) var_8);
}
