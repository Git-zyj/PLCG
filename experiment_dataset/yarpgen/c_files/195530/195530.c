/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((var_9 ? var_5 : (min(var_12, 4))));
    var_15 = ((((((-1 != 4824817244584716777) - var_1))) ? var_12 : (((-(130 % var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = 1;
                arr_8 [i_1] [i_0] = ((-((var_0 + (arr_6 [i_0])))));
                arr_9 [i_0] [i_0] [i_0] = 0;
                var_16 = (max(var_16, (arr_2 [i_1 - 1])));
            }
        }
    }
    var_17 ^= var_1;
    #pragma endscop
}
