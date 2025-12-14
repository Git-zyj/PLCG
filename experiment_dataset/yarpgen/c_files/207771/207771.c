/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 &= ((-114 * (arr_0 [i_0] [i_0])));
        var_14 = ((((arr_1 [i_0] [i_0]) ? var_5 : (arr_0 [i_0] [i_0]))));
        var_15 = (0 * 1);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = max(-1, var_3);
        arr_7 [i_1] [i_1] = 11550;
        arr_8 [i_1] [i_1] = 1;
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_16 = var_6;
            var_17 = ((~((~(arr_9 [i_2 - 2])))));
            var_18 = (max(1, 121));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_19 = (min(var_19, 0));
                arr_16 [i_3] = (~121);
                var_20 ^= (arr_0 [i_2 - 1] [i_2 + 1]);
                arr_17 [i_3] [i_3] [i_3] = (((arr_14 [i_2] [i_2 + 1]) >= (((~(arr_1 [i_4] [i_3]))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_21 = (max(var_21, (((~(arr_14 [i_2] [i_5]))))));
                arr_20 [7] [i_3] = ((var_11 ? 0 : (arr_0 [i_2 - 2] [i_2 - 2])));
            }
        }
        var_22 = 121;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            {
                arr_26 [i_7] = (((~1) ? ((((arr_23 [i_7] [i_7 - 1] [i_6 - 1]) ? (arr_23 [i_6 + 2] [i_7 + 2] [i_6 + 2]) : 1))) : (arr_21 [8])));
                var_23 = var_2;
            }
        }
    }
    #pragma endscop
}
