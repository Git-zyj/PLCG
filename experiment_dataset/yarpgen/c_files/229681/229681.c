/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(var_2 != var_12)));
    var_14 = 253680967;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [9] [i_1] [i_1] [i_1] = ((var_4 ? -20886 : 44649));
                    arr_9 [i_2] [i_2] [i_0] &= (~7330082629690946814);
                }
            }
        }

        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_15 *= (-(((arr_5 [10] [i_3]) ^ (arr_5 [i_0] [i_3 + 3]))));
            var_16 = (max(var_16, ((((arr_7 [i_0] [i_3 + 3]) ? (arr_7 [i_0] [i_0]) : 30)))));
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_17 += (!var_12);
            arr_17 [i_4] = ((2141685596 ? (arr_15 [i_4] [i_0] [i_0 + 1]) : (arr_15 [i_4] [i_4] [i_0 + 1])));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] [8] = ((!(arr_7 [i_5] [i_0 - 2])));
            arr_21 [10] [i_5] = ((999879231 ? (arr_0 [i_0 + 1]) : 14932758823546342096));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_18 += ((~(arr_15 [i_0] [i_5] [i_6])));
                        var_19 ^= 10386;
                    }
                }
            }
            arr_26 [i_0] &= (arr_15 [i_0] [i_0 + 1] [i_5 + 1]);
        }
    }
    var_20 = -7330082629690946814;
    #pragma endscop
}
