/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((2147483647 ? var_1 : var_10));
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) ? (((!(arr_3 [i_0])))) : (~var_8)));
        var_14 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = (arr_6 [i_1 + 1] [i_1 + 1]);
            var_16 = var_0;
            var_17 = (min(var_17, ((((arr_1 [i_2]) ? var_9 : var_8)))));
        }
        arr_10 [2] |= (arr_5 [10] [i_1 + 1]);
        var_18 = (max(var_18, ((((2147483648 ? -110739161 : -1))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_19 = (((arr_11 [i_3]) ? (arr_3 [i_4 - 2]) : (arr_11 [i_3])));
                arr_17 [i_3] [i_3] [i_4 - 2] [i_5] = ((!(arr_11 [i_3])));
                arr_18 [i_3] [i_4 - 1] = ((!((!(arr_0 [i_4 - 1])))));
            }
            arr_19 [i_3] [i_3] [i_3] = ((!(arr_4 [i_3])));
            var_20 = (min(var_20, (arr_9 [0] [i_3] [i_4 - 3])));
            arr_20 [i_3] = var_8;
        }
        arr_21 [i_3] [i_3] = 3096096720;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    arr_32 [i_7] [i_6] = var_5;
                    var_21 += ((0 ? 1 : (((((3522989018 ? 1 : 1))) ? var_0 : var_3))));
                    var_22 = (min(var_22, (arr_2 [i_6] [i_8 + 1])));
                }
            }
        }
        arr_33 [i_6] = var_1;
    }
    #pragma endscop
}
