/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 33;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_15 = ((1 ? 8915 : ((max((arr_6 [i_0] [i_1 - 2] [i_2] [i_3]), -8915)))));
                            var_16 = var_13;
                        }
                    }
                }
            }
            var_17 -= 4429625301200148515;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 = (((~9909) ? ((-(arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_7]))) : 2147483643));
                        var_19 = (max(var_19, 29795595));
                        arr_19 [i_5] [i_6 + 2] [i_6 + 1] [i_7] = (arr_11 [i_0] [i_0 + 3]);
                    }
                }
            }
            var_20 = (((((arr_16 [i_0] [i_5] [i_0 - 2] [i_0 - 2]) ? (arr_5 [i_5]) : (arr_0 [i_0])))));
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_21 = ((arr_15 [i_0 - 2] [i_0] [i_0] [i_0]) ? (((-(((arr_2 [i_0] [i_0]) ? 0 : 1))))) : ((~(max((arr_1 [3]), 4294967290)))));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_22 = (arr_11 [i_8] [i_8]);
                            arr_33 [i_0 + 3] [i_8] [i_9 - 1] [i_10] [4] [i_10] [i_10] = ((((max((arr_17 [17] [i_0 - 1] [i_8 + 1] [i_0 - 1] [i_0 - 1] [i_10 + 2]), var_1))) ? (max(var_13, (~-38))) : (arr_10 [i_0 + 1] [i_8] [i_8 - 1] [i_9 + 2])));
                        }
                    }
                }
            }
            var_23 = ((-(max(var_11, ((var_6 ? 1004329299898674625 : (arr_14 [i_0] [i_0])))))));
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_24 = (arr_36 [i_0 - 3] [i_12]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_25 = (max((((((((arr_10 [i_0] [i_0] [i_13] [3]) && -10835))) >= (arr_26 [i_0] [i_0 + 3] [i_13] [i_14] [i_14] [i_14])))), (((arr_2 [i_13] [i_12]) ? -22 : (~-9066319139329132159)))));

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_26 = (arr_9 [i_0] [7] [i_15] [i_12] [i_12]);
                            var_27 = var_11;
                        }
                    }
                }
            }
        }
        arr_44 [i_0] = (((((var_1 ? (arr_16 [i_0 - 2] [i_0 - 3] [i_0 + 3] [i_0 - 2]) : (arr_16 [i_0 - 2] [i_0 - 3] [i_0] [i_0])))) ? var_5 : ((max(((1688468126551447546 ? (arr_31 [i_0] [13] [6] [15] [i_0 - 1] [i_0] [i_0]) : -8915)), ((-(arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 19;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_28 -= ((max((max((arr_11 [i_0] [i_0]), 32757)), (~var_12))));
                                var_29 *= (arr_54 [i_19] [i_18] [i_17] [i_16] [i_0]);
                                var_30 = ((var_3 ? (max((max(var_5, (arr_5 [i_0 + 1]))), ((max(var_1, 186))))) : (arr_35 [i_0])));
                            }
                        }
                    }
                    var_31 = (max((~-116), (max(3382, var_10))));
                }
            }
        }
    }
    var_32 |= ((-(((((-35 ? var_7 : var_9))) ? 1 : var_0))));

    for (int i_20 = 2; i_20 < 22;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                {
                    var_33 = (max((arr_63 [2] [i_20 + 1] [i_20 - 2]), ((-(arr_64 [i_20] [i_20 + 1] [i_20 - 2] [i_20 + 1])))));
                    var_34 *= (((((((6 ? (arr_60 [i_20] [i_22]) : 1))) ? (arr_58 [i_20] [i_21]) : ((max(-22, (arr_60 [20] [i_20])))))) % (((arr_63 [i_20] [i_21] [i_22]) ? (arr_59 [i_22] [i_22] [20]) : ((var_3 ? 193715163 : 0))))));
                }
            }
        }
        arr_66 [i_20 - 1] [i_20] = ((((!((max(65535, 13003498997461804475))))) ? ((~(((arr_63 [i_20] [i_20 + 2] [16]) ? 50331648 : var_12)))) : ((((!(arr_59 [i_20] [i_20 - 1] [i_20])))))));
        var_35 |= ((~(((arr_59 [i_20 - 2] [i_20 + 1] [i_20]) ? (arr_59 [i_20 - 2] [i_20 + 1] [i_20]) : (arr_59 [i_20 - 2] [i_20 + 1] [i_20 - 2])))));
    }
    var_36 = var_4;
    #pragma endscop
}
