/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_9, (var_1 & var_1)));
    var_19 = ((((((var_8 ? var_16 : var_5))) ? var_8 : var_15)) ^ (((max((var_9 <= var_12), (max(var_17, var_6)))))));
    var_20 = -var_17;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_21 = (((((~((4104867237626587378 ? 1 : var_4))))) ? 312080036 : 1073741808));

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = (((((min(var_14, (arr_1 [i_0]))) - (((max(var_8, var_9)))))) << ((((min(var_5, var_2))) - 181))));
            arr_6 [i_0] [i_1] = (min((((arr_3 [i_1]) ^ var_3)), var_16));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_22 = -var_0;
            arr_10 [2] &= var_13;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] [15] [i_2] = var_17;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_23 &= -var_8;
                            var_24 = (max(var_24, (arr_15 [i_4] [i_4 + 4] [i_4] [i_3])));
                            arr_22 [i_2] [i_2] = (~var_9);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_25 = (max((arr_21 [8] [i_2]), ((min(((~(arr_3 [i_2]))), var_12)))));
                            arr_25 [i_0 + 2] [i_0] [i_0] [i_2] [i_3] [1] [i_6] = var_14;
                            var_26 = (max(var_26, ((min((((((var_13 ? (arr_4 [i_3]) : (arr_3 [i_6]))) <= var_15))), (((arr_18 [i_2 + 1]) ? var_3 : var_2)))))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_27 = (min((var_15 && var_9), (arr_16 [i_0] [i_0] [i_3] [i_3 - 1] [i_4 + 2] [i_7])));
                            var_28 = ((~((~(max(97, -4104867237626587392))))));
                        }
                    }
                }
            }
            arr_29 [i_0] [i_2] [i_2] = (max(((((arr_9 [i_0] [i_2] [i_2]) << (((arr_0 [0] [i_2]) ? var_13 : var_9))))), (((var_10 - var_10) << (var_8 > var_3)))));
            var_29 -= (((((max(var_5, (arr_11 [14] [i_2 - 1] [i_2] [14]))))) ? (((arr_26 [i_0] [6] [i_2] [i_2 + 1]) ? ((((arr_9 [12] [12] [18]) ? (arr_19 [i_0] [i_2 + 2] [i_2 + 2] [i_0 + 1] [i_0]) : var_14))) : ((var_3 ? var_16 : (arr_13 [i_2] [i_0] [i_0]))))) : (((var_13 ? -var_9 : ((var_15 / (arr_7 [i_0 + 2] [i_2]))))))));
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (((max((arr_23 [i_0] [i_0] [i_8] [i_8 + 1] [22]), (arr_16 [10] [i_0] [i_8] [i_8 + 2] [10] [i_8])))))));
            var_31 = (247 * 0);
        }
        for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_32 = (min(var_32, var_8));
            arr_35 [i_0] [19] [i_9] = (max((((arr_26 [i_0 + 1] [i_9] [i_9] [i_9 + 4]) ? (arr_26 [i_0 + 1] [i_9] [i_0] [i_0 - 1]) : var_11)), ((((arr_18 [i_0 - 3]) ? (var_14 << var_13) : var_8)))));
            var_33 = (+((((max((arr_3 [i_9]), (arr_12 [i_0] [i_9] [i_0 - 1])))) ? (arr_27 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9]) : ((-(arr_24 [i_9] [i_0] [i_0] [i_9 + 4]))))));
            var_34 = (max(((var_5 - (arr_31 [i_0] [i_9] [i_0]))), (var_13 - var_3)));
            /* LoopNest 3 */
            for (int i_10 = 4; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_35 = min((arr_20 [i_11 - 1] [i_11] [i_12] [1] [i_12]), (var_13 | var_0));
                            arr_43 [i_0] [i_9] [i_10 - 3] [i_11 + 1] [i_9] [i_12] = ((min(var_4, -var_0)));
                        }
                    }
                }
            }
        }
        arr_44 [20] [i_0] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 2]);

        /* vectorizable */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_36 = (min(var_36, (arr_15 [i_0] [i_0] [i_0 - 2] [i_0])));
            arr_48 [i_0] = ((var_10 - (arr_11 [i_0] [i_0] [i_0] [i_13])));
        }
        for (int i_14 = 4; i_14 < 23;i_14 += 1)
        {
            arr_51 [i_14] = (((arr_23 [i_0] [i_0] [i_0] [i_14] [i_14]) ? var_13 : (max((((~(arr_47 [i_0] [i_14 - 1])))), var_11))));
            var_37 -= var_3;
            var_38 = ((((var_0 ? var_14 : var_4))));
            var_39 -= (arr_27 [16] [i_14 - 4] [2] [i_0 - 1] [16]);
        }

        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            arr_54 [10] &= var_3;
            var_40 = (arr_2 [i_15] [i_0]);
            arr_55 [16] [i_15] = (arr_39 [i_15] [i_15 - 1] [i_15 - 1] [i_15]);
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_41 = (max(var_41, ((max(var_5, (((~(var_9 ^ var_13)))))))));
            var_42 = ((var_15 ? var_3 : var_7));
            arr_58 [i_0] [i_0] &= (((min((min(var_12, (arr_28 [19]))), var_1)) ^ ((~(min((arr_37 [i_0] [i_0 + 2] [5] [i_0 + 2]), var_3))))));
        }
    }
    #pragma endscop
}
