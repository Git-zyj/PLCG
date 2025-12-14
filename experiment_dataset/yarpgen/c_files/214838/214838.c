/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_1] [i_2] [i_3] = (((432345564227567616 ? (arr_9 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4]) : (arr_1 [i_2] [i_2]))));
                        arr_14 [i_1] = var_10;
                    }
                }
            }
        }
        var_17 -= ((~(arr_6 [i_0 + 3] [i_0 + 4] [i_0 - 2])));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_5] [i_5] = (arr_4 [i_4] [i_5]);
            arr_21 [i_5] [i_5] = (arr_4 [i_4] [i_5]);
        }
        arr_22 [i_4] = var_11;
        var_18 ^= arr_6 [i_4] [i_4] [i_4];
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_19 ^= (((((var_1 ? var_13 : var_16))) ? -var_5 : ((-60 ? var_1 : var_3))));
        arr_25 [i_6] = ((((((arr_23 [i_6]) ? 14468 : (arr_24 [i_6] [i_6])))) != (~var_12)));
        arr_26 [i_6] = (arr_24 [i_6] [i_6]);
        var_20 += ((14468 && (arr_24 [i_6] [i_6])));
        var_21 |= (18446744073709551615 != var_0);
    }
    var_22 = var_16;
    var_23 = ((((-28328 ? 0 : 28211))));
    #pragma endscop
}
