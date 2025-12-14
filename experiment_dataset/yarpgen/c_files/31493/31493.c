/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (202 | 18);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 += (var_16 - (arr_1 [i_0]));
        var_21 = (((arr_0 [i_0] [i_0]) / -var_2));
        var_22 = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [6] = (var_12 ^ var_15);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_23 = (arr_1 [i_2]);
            arr_8 [i_1] [3] [i_2] = 1;
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_20 [i_4] [i_5] [i_6] &= 7574845863410420144;
                            var_24 = ((36 ^ (!174)));
                            var_25 = (max(var_25, (arr_17 [i_6 - 1] [i_3 + 1] [i_3] [i_3 + 2])));
                        }
                    }
                }
            }
            arr_21 [3] [i_1] [i_3] = (var_9 && var_12);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_25 [i_7] [i_7] = (var_4 ^ 2021479171753509590);
            arr_26 [i_7] [i_1] [i_7] = (((~(arr_4 [i_1]))));
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_26 = ((-((1 ? 65535 : 0))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_9] [i_9] = (-(((-(arr_27 [i_9])))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_27 &= (arr_35 [i_11 - 1] [i_10 + 1] [i_12 + 1]);
                            arr_43 [17] [i_8] [i_8] [17] [i_8] [17] [i_8] |= (max((min(var_11, var_10)), (((-(arr_30 [i_8] [i_8]))))));
                        }
                    }
                }
            }
            var_28 = ((max((-4361996484558866919 || 1), (arr_27 [i_9]))));
            arr_44 [i_8] [i_8] [i_8] &= var_16;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_29 = var_6;
                        arr_50 [0] [i_9] [14] [i_14] = ((max(1, 70368743129088)));
                    }
                }
            }
        }
        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {
            var_30 = var_11;
            arr_53 [i_15] = (((((-1 ? (arr_0 [1] [i_8]) : ((65535 + (arr_49 [i_8])))))) ? (((var_8 < (arr_49 [i_8])))) : var_9));
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 19;i_18 += 1)
                {
                    {
                        var_31 = (arr_0 [i_8] [i_8]);
                        arr_60 [i_8] [i_16] [i_17] [i_17] [1] = (arr_0 [i_18 - 2] [i_18]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    {
                        var_32 = (min(var_17, var_17));
                        arr_67 [i_8] [i_16] [i_16] [i_16] [i_16] [i_20] |= (((-(arr_58 [i_8] [i_16]))));
                        var_33 = var_4;
                    }
                }
            }
            var_34 = var_7;
        }
        for (int i_21 = 2; i_21 < 19;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                var_35 = 70368743129088;
                arr_72 [5] [i_21] [i_22] &= (min(((((min(var_5, (arr_61 [i_22] [i_22] [16])))) ? (arr_66 [i_8]) : -177)), ((((((arr_36 [i_8] [i_8] [i_8]) + var_2)) + -1459374444)))));
            }
            for (int i_23 = 2; i_23 < 19;i_23 += 1)
            {
                var_36 = (121 * 228);
                arr_75 [i_8] [i_21] [i_21] = var_11;
                var_37 = (min(var_14, (min((arr_37 [i_23] [1]), 267386880))));
            }
            var_38 = 36;
        }
    }
    var_39 += var_9;
    #pragma endscop
}
