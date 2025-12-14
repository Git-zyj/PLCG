/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_3 ? var_11 : -1690769836));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += (arr_0 [i_1]);
                arr_4 [i_1] [i_1] [i_1] |= (~-var_10);
                var_19 = ((!(((1 ? 0 : -101)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_20 -= (((arr_10 [i_2 - 2]) + (arr_5 [10])));
                    arr_14 [i_2] [i_2] [i_4 - 1] [i_2] = 121;
                    var_21 = var_13;
                }
            }
        }
    }
    var_22 = 118;
    var_23 = (max(var_11, var_12));
    #pragma endscop
}
