/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((max(1, var_17)) ^ 17776196728048597678);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 = 3353788372;

            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_21 = var_9;
                            var_22 = (min(var_22, -var_4));
                            var_23 = (max((18 < 1), (arr_7 [2] [2] [i_2] [i_2 - 2])));
                            var_24 = 1;
                        }
                    }
                }
                arr_14 [i_0] [7] [i_1] [i_1] = ((((((arr_12 [i_0] [0] [i_2 + 1] [i_0] [i_0] [i_0]) ? 1 : (arr_12 [i_0] [i_1] [i_2 + 1] [i_0] [i_2 - 2] [i_0])))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (min(1, -520841575958659632))));
                var_25 = var_6;
                var_26 = 201;
            }
            var_27 = var_2;
            arr_15 [12] [i_0] [i_0] = (max((((arr_0 [i_0] [i_1]) ? var_13 : (arr_9 [i_0] [11] [i_1] [i_0]))), var_4));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_28 = 1;
                            var_29 = ((((((arr_5 [i_7 + 3] [i_0] [0] [i_6]) ? -1991027653 : -61))) ? 2394078899 : (arr_5 [i_7 + 1] [i_0] [i_0] [i_6])));
                        }
                    }
                }
            }
        }
        var_30 = 12308343837730677892;
        var_31 = var_3;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_32 -= var_4;
        arr_24 [i_8] [i_8 + 1] = ((!(arr_3 [i_8 + 1] [i_8 + 1] [i_8 + 1])));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_28 [i_8] [i_8] = (var_9 ? var_7 : (arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1]));
            arr_29 [i_8] = (arr_13 [i_8] [i_8 + 1] [i_8 + 1]);
            arr_30 [i_8] [i_9] = var_6;
        }
    }
    var_33 = 42;
    var_34 = (max(var_34, ((max(131071, ((~(-131072 < var_15))))))));
    #pragma endscop
}
