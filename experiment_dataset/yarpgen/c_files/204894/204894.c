/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [18] [i_3] [14] [i_1] [i_0] = (max(var_6, (1 < var_5)));
                        arr_13 [i_0] [i_1] = ((var_1 ? -6614386811295959257 : (min((var_5 < 1), 17179865088))));
                        arr_14 [i_2] [i_2] [i_2] [5] = min((((var_3 || (arr_3 [i_0 + 2] [i_2] [i_0 + 2])))), (arr_9 [i_0 + 1]));
                        arr_15 [i_0] [i_1] = var_5;
                    }
                }
            }
        }
        var_10 = (max(var_10, var_1));
        arr_16 [4] = (((((((((arr_9 [1]) + 9223372036854775807)) << (((var_5 + 115) - 46)))) / (arr_7 [i_0 + 1] [i_0 + 2] [i_0 - 1]))) - (((((-5287061287610745925 && var_1) && (arr_2 [i_0 + 2])))))));
    }
    var_11 = (((max((var_5 > 1), (~var_7)))) ? ((var_0 / ((var_4 ? var_6 : -98)))) : var_7);
    var_12 = var_2;

    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_13 = (~(arr_0 [i_4 - 1] [i_4]));

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            arr_23 [1] [8] [i_4] |= (max(((1 ? (((-98 - (arr_2 [i_4])))) : ((var_9 ? 1 : (arr_7 [i_4] [i_5] [i_5]))))), (57 != var_5)));
            var_14 -= var_2;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_15 = (max(var_15, var_4));
            var_16 ^= 43;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_31 [i_4] &= (min(var_3, (1 / -7523839806320410322)));
                    var_17 |= 0;
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_34 [0] [i_9] = (((((~(arr_18 [i_9 + 1])))) <= (~var_4)));
        arr_35 [5] [i_9] = (max(((min(-22, -35))), (arr_6 [i_9 + 1] [i_9 - 1] [i_9])));
    }
    #pragma endscop
}
