/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_4));
    var_18 = (max(((min(var_3, (min(var_10, var_4))))), var_14));
    var_19 -= var_16;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_20 = var_10;
                    var_21 = var_7;
                }
                var_22 = var_11;
            }

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    var_23 = var_8;
                    var_24 ^= var_11;
                    arr_17 [i_1 + 1] [i_5] = var_9;
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_25 = var_7;
                    var_26 ^= var_15;
                    var_27 = var_12;
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_28 = var_1;
                    arr_23 [i_0 - 1] [i_1 + 1] [i_0 - 1] [10] = var_1;
                }
                for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    var_29 -= var_4;
                    var_30 = var_1;
                }
                var_31 ^= var_3;

                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    arr_28 [i_0] [i_0] = var_16;
                    var_32 = (max(var_32, var_1));
                }
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_33 = var_1;
                var_34 = var_5;
            }
            for (int i_11 = 4; i_11 < 10;i_11 += 1)
            {
                arr_34 [i_0 - 1] [i_1] [i_11] = var_4;
                arr_35 [i_11] [i_1 - 1] [i_0] = var_13;
            }
            var_35 *= var_7;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    {
                        var_36 = var_12;
                        var_37 = var_7;
                        arr_44 [i_0 + 2] [i_13] [i_0 + 1] [10] [i_0 + 1] [i_13 - 1] = var_0;
                    }
                }
            }
        }
        for (int i_14 = 3; i_14 < 10;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        var_38 = (max((min(((min(var_12, var_4))), var_2)), (min(var_16, var_2))));
                        arr_51 [i_0] = (max(127, -2));
                        arr_52 [10] [3] [i_16] = (min(((min(var_1, var_0))), (max(-1773, 1))));
                    }
                }
            }
            var_39 = (max(var_39, ((max((min((max(var_2, var_7)), var_9)), (min((min(var_7, var_12)), ((max(var_9, var_5))))))))));
            var_40 *= (max(var_5, ((max(var_10, var_8)))));
            var_41 = (max(var_3, var_10));
            var_42 |= (min(var_15, var_5));
        }
        var_43 = (min(((max(var_9, var_12))), (max((min(var_1, var_2)), ((max(var_12, var_4)))))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                {
                    var_44 = min((min(var_1, var_3)), (max(var_4, var_1)));
                    var_45 ^= min(((min(var_9, var_1))), var_15);
                    var_46 = (max(var_7, (min((min(var_7, var_8)), (min(var_2, var_9))))));
                }
            }
        }

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            arr_63 [i_0] [i_0 - 2] [2] = (max((min(var_7, var_13)), (max(var_7, var_11))));
            var_47 = (max(var_47, ((max(var_1, var_7)))));
            var_48 = (max(var_48, ((max(var_14, var_3)))));
        }
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            arr_67 [i_20] [i_0 + 2] |= (min((max(var_4, var_6)), var_6));
            var_49 ^= var_3;
        }
    }
    #pragma endscop
}
