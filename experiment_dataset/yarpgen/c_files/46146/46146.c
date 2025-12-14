/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = ((((!var_0) ? (!var_5) : var_11)));
        var_15 = ((32 && 32) == (min((((arr_2 [i_0 - 2]) ? var_12 : var_2)), (1 + 44))));
        arr_3 [i_0] = var_5;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (min(var_16, ((min(var_2, (min(var_12, (arr_1 [i_1]))))))));
        var_17 = var_8;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_5] [i_3] [i_1] [i_4] [2] = (((arr_16 [i_5] [i_4 + 2] [0] [1]) ? 1 : var_12));
                            var_18 |= (((arr_9 [i_4] [i_4 - 3] [9] [i_1]) * (arr_9 [i_2] [i_4 - 3] [i_2] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            arr_23 [9] [i_2] [i_3] [i_3] [i_6] = ((-((var_2 ? (arr_8 [i_3] [i_1]) : (arr_22 [i_1] [i_2] [i_3] [i_4] [i_3] [i_6] [0])))));
                            var_19 = (((((var_9 ? var_6 : var_7))) ? (~65535) : -984834569));
                        }
                        var_20 = (((((10007620949898636104 ^ (~var_6)))) || (arr_22 [i_4] [4] [i_4 + 1] [i_4 + 2] [2] [i_4 + 1] [i_4 - 2])));
                    }
                }
            }
        }
        var_21 = (((((min(65535, -16185)))) - (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            arr_29 [i_7] [i_7] = (arr_28 [i_7]);
            var_22 = ((~(arr_1 [i_7])));
        }
        arr_30 [i_7] = 217;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_23 |= (~1);
        arr_33 [i_9] [i_9] = var_6;
    }
    #pragma endscop
}
