/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = 1;
        var_13 = (max(var_13, ((((((arr_1 [i_0]) <= (!-1))) ? (arr_0 [i_0] [i_0]) : var_8)))));
        arr_2 [i_0] = (((-(arr_1 [i_0]))));
        var_14 = arr_1 [i_0];
        var_15 |= ((((((arr_1 [12]) * (arr_1 [i_0])))) && var_0));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = -23;
        arr_6 [i_1] = ((1 ? 7 : -49));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_16 = (arr_4 [i_2]);
            var_17 = ((((((((~(arr_4 [i_2]))) <= (arr_7 [i_2]))))) != (arr_10 [i_2])));
            arr_12 [i_3] = ((((((arr_9 [i_3] [i_3] [i_2]) ^ (arr_8 [i_2]))) ^ ((-5 ? (arr_8 [i_3]) : (arr_0 [i_2] [i_2]))))));
            var_18 = ((-(arr_7 [i_2])));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            var_19 *= (((arr_13 [i_4 - 3] [i_2]) ? -1 : -10));
            arr_16 [i_2] = (arr_3 [i_4 - 3]);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_20 += max(2, (((!(((-(arr_18 [i_2]))))))));
            var_21 ^= (arr_7 [i_2]);
            arr_19 [i_2] [i_2] = var_1;
            arr_20 [i_2] [8] [i_5] = (max(-1, (((~var_9) & (min((arr_4 [11]), (arr_11 [i_2] [8] [i_5])))))));
        }
        var_22 = (max(var_22, (arr_13 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                {
                    var_23 = ((-874000999267497764 ? 0 : (max((min(874000999267497764, -27763)), (arr_3 [i_7])))));
                    var_24 = ((((0 ? -874000999267497764 : (arr_26 [i_6 - 1] [9]))) - (min((min(-874000999267497764, (arr_17 [i_2] [i_6 + 3] [i_6 + 3]))), (172 <= var_0)))));
                    var_25 |= (((-((min((arr_0 [i_2] [0]), 20))))));
                }
            }
        }
        arr_27 [i_2] = -874000999267497764;

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 ^= ((~(max((~1), ((~(arr_28 [i_2] [0])))))));
            var_27 = ((((((arr_29 [i_2] [i_8] [i_2]) ? 8589934591 : -31))) || (min((var_10 || -8478202194845642512), ((var_0 || (arr_13 [i_2] [i_2])))))));
        }
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_28 = (max(var_28, ((((arr_32 [1]) <= ((((0 ? -1 : (arr_4 [i_2]))) % var_7)))))));
                            var_29 = (min(var_29, var_5));
                            var_30 *= (min(((((((arr_23 [i_12] [7] [i_9] [7]) * var_11))) ? var_8 : 57302)), (((!(~0))))));
                        }
                    }
                }
            }
            var_31 = var_1;
            arr_39 [i_2] [i_2] = ((~(((((min(1, 1))) <= -54)))));
            var_32 = (min(var_32, (arr_35 [i_2] [4] [i_9] [i_2])));
        }
    }
    var_33 = ((78 ? 15516 : (((1 >= (~var_2))))));
    #pragma endscop
}
