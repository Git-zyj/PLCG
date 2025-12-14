/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_11 ^= var_4;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_12 = var_0;
                        var_13 -= (~var_3);
                        var_14 += (((((((~2147483647) + 2147483647)) + 2147483647)) >> ((var_7 ? 5 : (arr_9 [i_2])))));
                        var_15 = 0;
                        arr_13 [i_3] [i_2] [i_2] [i_0] = -9042;
                    }
                }
            }
            var_16 = ((+(((((arr_11 [i_0] [i_0] [i_1] [i_1 - 2]) + 2147483647)) >> (49 - 39)))));
        }
        var_17 |= ((((min((arr_5 [i_0 - 3]), var_1))) ? 209 : var_3));

        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_16 [i_4 + 2] [9] [i_0] = var_0;
            var_18 = 11114;
            var_19 += (max(((max((arr_6 [i_0] [11]), (min((arr_11 [i_4] [i_4] [1] [1]), 1705559633))))), (((!0) ? (~15) : (min(0, var_8))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_26 [i_7] [i_0] = 11105;

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_20 ^= ((~((var_4 ? -539748852 : var_6))));
                            var_21 = var_9;
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                        }
                    }
                }
            }
            var_22 = (min(var_22, ((((!15) <= ((0 ? (arr_1 [i_0]) : 252)))))));
        }
        var_23 += (arr_5 [i_0 + 2]);
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_32 [i_9] = (((~3278911686) & -var_2));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_39 [i_9] [i_10] |= ((((!((min(55835, (arr_21 [i_9] [i_9] [21]))))))));
                    var_24 &= ((~((1 ? ((max(6, var_7))) : 2))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_25 = 191;
                                var_26 &= var_1;
                                var_27 = (((arr_20 [i_9]) ? ((((((54422 ? var_6 : 0)) < ((max(46, 54437))))))) : (max((5012985044586668317 != 40398), (((arr_19 [10] [i_11] [i_12]) ? var_0 : (arr_27 [i_9] [10] [i_11] [i_12] [i_13])))))));
                            }
                        }
                    }
                    var_28 = (max(var_28, (((-(arr_34 [i_9] [i_10 - 1] [i_11]))))));
                }
            }
        }
        var_29 = (max(var_29, -25138));
        arr_46 [i_9] = (max(((min((arr_9 [13]), (109 < var_7)))), ((min(11593535221320435967, var_1)))));
    }
    var_30 = (min(var_30, var_6));
    #pragma endscop
}
