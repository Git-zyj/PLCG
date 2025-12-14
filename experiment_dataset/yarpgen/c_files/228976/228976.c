/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(var_3, 0)))) | (max(var_10, (var_9 & var_5)))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 *= ((((-((var_8 ? 1 : 0))))) ? (((((arr_0 [i_1]) / (arr_3 [i_1] [i_1]))) / var_1)) : 1);
                    var_15 = ((1 | ((min(var_8, -16)))));
                    var_16 = (max(var_16, ((((((arr_0 [i_1]) ? (arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 3]) : 48654)) - var_8)))));
                }
            }
        }
        var_17 ^= ((var_9 ? var_0 : -12));
        var_18 ^= (((arr_3 [0] [0]) ? 40 : ((-(arr_0 [1])))));
    }
    var_19 ^= (max(var_9, (((1466561145 <= ((var_0 ? var_4 : 252)))))));
    #pragma endscop
}
