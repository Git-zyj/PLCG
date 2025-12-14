/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (1 && 510);
        arr_5 [i_0] = (min(-30250, -792468985877206632));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_11 = 5103879198877316165;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_1] = ((((min((arr_0 [i_1]), (arr_3 [i_1])))) > ((((arr_8 [i_1]) && (arr_7 [i_1]))))));
            var_12 = (((-2056330771 ? -1 : 5144365686722089291)));
        }
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    arr_20 [i_4] [i_3] [i_5 + 3] [1] = (((arr_19 [i_3] [i_4] [i_4] [i_5]) ? (min((arr_17 [i_5] [i_4] [i_3 + 1]), (arr_17 [0] [0] [i_3 + 1]))) : ((((arr_17 [i_5 + 2] [i_5 + 3] [i_5]) ? (arr_18 [i_5] [i_4] [i_3]) : (arr_17 [i_5] [i_3] [i_3]))))));
                    var_13 = (((arr_15 [i_3 - 1] [i_4 - 1]) ? (((arr_15 [i_3 - 1] [i_4 - 1]) ? (arr_15 [i_3 - 1] [i_4 - 1]) : (arr_15 [i_3 - 1] [i_4 - 1]))) : (((arr_15 [i_3 - 1] [i_4 - 1]) ? (arr_15 [i_3 - 1] [i_4 - 1]) : (arr_15 [i_3 - 1] [i_4 - 1])))));
                    arr_21 [i_3 - 1] [i_4] [1] = (((arr_15 [i_3] [i_4]) ? ((min(((((arr_17 [i_3] [i_3] [i_3]) || (arr_19 [i_3] [i_3] [i_3] [i_5])))), (arr_16 [i_4] [i_3 + 1])))) : (arr_18 [i_3] [i_4] [i_5 + 1])));
                }
            }
        }
        var_14 = arr_19 [i_3 + 1] [i_3] [i_3] [i_3];
    }
    var_15 = ((var_9 < (max(var_10, 14702))));
    var_16 = var_0;
    #pragma endscop
}
