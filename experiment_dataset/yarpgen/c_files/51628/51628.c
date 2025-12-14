/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [2] [i_1 + 3] [i_1 + 3] [i_0] [i_0] = min((arr_2 [i_1]), 7160957486271000757);
                        var_17 |= (((min((((arr_2 [i_1]) * var_9)), (arr_1 [i_2])))) ? (arr_0 [i_1 + 4] [i_3]) : var_2);
                        var_18 -= (((((arr_7 [i_1 + 4] [10] [i_0 - 1]) & (arr_7 [i_1 + 4] [18] [i_0 - 1])))) ? ((var_9 ? 19 : (arr_7 [i_1 - 1] [0] [i_0 + 1]))) : (arr_7 [i_1 - 1] [0] [i_0 - 1]));
                    }
                    var_19 += 7411156195482968151;
                    var_20 = var_9;
                }
            }
        }
    }
    var_21 = var_12;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (max(var_22, ((((((~2) ? (arr_1 [i_4]) : (max(1691542328272538529, var_5)))) == (((arr_13 [i_4]) ? ((13498032594099229748 + (arr_5 [10]))) : (arr_0 [i_4] [i_4]))))))));
        arr_15 [i_4] = 0;
        var_23 = (max(var_23, (~12698232224270203758)));
    }
    var_24 &= var_5;
    #pragma endscop
}
