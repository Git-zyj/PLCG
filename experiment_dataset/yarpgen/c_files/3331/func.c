/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3331
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
    var_19 = var_5;
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0 + 2] = ((/* implicit */signed char) (-(max(((~(arr_5 [i_2] [i_0]))), (arr_6 [i_0] [i_0 - 1] [i_0])))));
                    arr_9 [i_2] [i_2] [i_2] = (-(arr_5 [i_0 + 1] [i_2]));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((max((((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) var_8)))))), (((/* implicit */int) (unsigned char)145))));
}
