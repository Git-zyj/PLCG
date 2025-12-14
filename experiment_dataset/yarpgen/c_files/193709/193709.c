/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] = ((((((arr_3 [i_1] [i_3 + 1]) ? var_15 : var_9))) ? -var_0 : (arr_1 [i_3 + 1])));
                            arr_9 [i_0] [1] [i_1] = ((5 ? ((-65 ? 17454713829048389340 : -65)) : (((((arr_1 [i_3]) > -80))))));
                            arr_10 [i_0] [i_1] [i_1] [17] = ((1 ? (((((max((arr_5 [i_0]), var_14))) ? ((var_2 ? var_0 : (arr_3 [i_1] [i_1]))) : -32132))) : ((-((1 ? (arr_7 [19] [i_2] [0] [i_0]) : var_13))))));
                        }
                    }
                }
                arr_11 [i_1] = 1;
                arr_12 [1] [1] &= var_0;
            }
        }
    }
    var_16 = ((var_8 ? (((((var_9 ? var_15 : var_7))) ? var_2 : (49379 < 2147483643))) : (max(var_5, (min(var_1, var_2))))));
    #pragma endscop
}
