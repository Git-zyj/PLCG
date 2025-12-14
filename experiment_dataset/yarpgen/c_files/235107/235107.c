/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, 4279736980));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] = ((~(arr_3 [i_0])));
            var_19 = (((arr_2 [i_1 + 1] [i_1 + 1]) || (arr_2 [i_1 - 1] [i_1 + 1])));
            var_20 = var_5;
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = (min((arr_1 [i_4]), 26403));
                    arr_16 [i_4] [i_2] [i_4] = (max(((((((~(arr_2 [i_2] [i_4 - 3])))) ? -426569138 : (min(1, -108420077))))), (min(((min((arr_13 [i_4] [i_3] [i_2]), (arr_7 [i_4])))), (var_9 | 1274200737316659360)))));
                    var_21 = min((((((var_4 ? (arr_4 [10]) : var_8))) ? var_10 : ((var_2 ? var_3 : -39)))), var_11);
                    arr_17 [i_2] [i_2] [i_2] [i_2] = 148;
                }
            }
        }
        var_22 = (arr_13 [i_2] [i_2] [i_2]);
    }
    var_23 = ((((((var_5 * 0) ? var_6 : (var_17 - var_2)))) == (((15809 == var_17) | (min(var_17, var_3))))));
    #pragma endscop
}
