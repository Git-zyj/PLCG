/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min((((arr_1 [i_0 - 1] [15]) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 3] [i_0 + 3]))), var_11));
                arr_5 [i_0] = (16695 << 15);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = ((!(((min(var_9, var_3))))));
                                var_20 = (max(var_20, ((min(((var_6 ? (arr_12 [i_1 + 1] [i_0 + 3] [i_0 + 3] [i_0] [i_0 - 1] [i_0] [18]) : (arr_3 [i_1 + 1] [6] [i_0]))), ((min((arr_12 [i_1 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0]), var_10))))))));
                            }
                        }
                    }
                    arr_13 [12] [i_2] [i_0 - 1] = ((((((var_12 + var_4) ? (min(4184108761, 2673931091)) : ((min(var_1, var_10)))))) ? var_10 : var_2));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_21 = -var_9;
                        var_22 = (~var_17);
                    }
                }
                var_23 = ((((var_5 ? var_6 : var_14))));
                var_24 ^= (min((((((arr_6 [i_1 - 4] [i_0] [i_0]) < -16)) ? ((var_6 ? (arr_2 [i_0]) : var_12)) : var_3)), ((max(164, ((253 << (-3022 + 3030))))))));
            }
        }
    }
    var_25 = (max(var_25, ((min((((var_2 ? var_2 : var_16))), var_10)))));

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_26 = (min(var_17, (((arr_4 [i_6]) + (min(4002620203, var_4))))));
        var_27 = (max(var_27, (((~((var_2 ? (~var_0) : (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
        var_28 = (((((((min(36, 253))) ? (arr_2 [i_6]) : (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (min((arr_3 [i_6] [i_6] [i_6]), (arr_3 [i_6] [i_6] [i_6]))) : (((max(15, 234))))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        var_29 = ((241 ^ (arr_20 [i_7])));
        arr_22 [i_7] = var_15;
    }
    for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] = (((min(var_12, (min((arr_2 [i_8]), var_12))))) ? (((!var_7) ? (var_17 < var_11) : (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8 + 2]))) : (~var_13));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    {
                        var_30 |= var_17;
                        var_31 -= ((((((((-(arr_7 [i_8 + 2] [i_10] [2])))) ? (-40 + var_8) : ((var_7 ? var_9 : var_12))))) ? var_5 : var_14));
                    }
                }
            }
        }
        var_32 = (((((arr_31 [i_8]) + 9223372036854775807)) << (((((min(-264608624, -12)) + 264608634)) - 10))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        var_33 = -1;
                        var_34 = ((var_9 ? ((min(var_16, (arr_12 [i_8] [i_8 - 3] [i_8] [5] [5] [i_8 + 2] [i_12])))) : (((arr_12 [5] [20] [20] [i_8 - 1] [13] [i_8 - 1] [i_8]) ? (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_12]) : (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_14])))));
                        var_35 = (max(var_35, (((var_14 ? var_14 : -var_6)))));
                    }
                }
            }
        }
    }
    for (int i_15 = 3; i_15 < 15;i_15 += 1) /* same iter space */
    {
        arr_43 [i_15] [i_15] = (((var_2 ? (arr_3 [i_15 + 1] [i_15 - 3] [i_15 + 1]) : (arr_3 [i_15] [i_15 + 1] [7]))));
        var_36 = (((arr_8 [i_15 - 3] [i_15 - 2]) ? -16689 : (arr_23 [i_15 - 2])));
    }
    #pragma endscop
}
