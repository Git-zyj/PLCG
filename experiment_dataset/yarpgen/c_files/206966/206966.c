/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [5]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_14 = (arr_10 [i_0] [i_1] [i_2] [i_0]);
                            var_15 = (arr_13 [i_0] [i_0] [i_2] [16] [i_3] [12] [i_4]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] = (arr_10 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]);
                            var_16 = (min((arr_16 [i_6] [i_1] [i_2] [19]), (min((arr_0 [i_0] [i_1]), (arr_18 [i_0] [i_1] [i_2] [i_5 - 1] [i_5] [i_0] [i_6])))));
                            var_17 = (min(1515844412, ((min(((min((arr_11 [i_0] [13] [i_2] [i_5 - 1] [i_6]), (arr_15 [14] [i_1] [i_2] [i_6])))), (min((arr_0 [i_1] [i_2]), (arr_13 [i_0] [i_1] [13] [i_5] [i_6] [i_6] [1]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_18 ^= (arr_5 [18] [i_1] [18]);
                            var_19 = (arr_16 [i_0] [1] [i_7] [i_7]);
                            var_20 -= 0;
                        }
                    }
                }
                var_21 = (arr_0 [i_0] [i_1]);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_22 |= (arr_2 [i_0]);
                        var_23 = arr_25 [i_0] [i_0] [i_1] [i_0] [i_10] [i_1];

                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_24 |= min((max((arr_12 [i_0] [i_11 + 1] [i_9] [i_10] [i_11 - 1]), (arr_12 [i_0] [i_10] [i_10] [i_10] [i_11]))), (max((arr_12 [i_0] [i_0] [i_9] [2] [i_0]), 0)));
                            var_25 = 0;
                            var_26 = (min((min((arr_25 [i_9] [1] [i_9] [i_9] [i_11] [i_11]), (arr_25 [i_9] [i_9] [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11]))), (arr_25 [4] [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11] [20])));
                        }
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_27 = 30720;
            var_28 = (min((max(95, (max(1, 1463913842)))), (arr_22 [i_12 - 1] [i_12 + 2] [i_12] [i_12] [i_12 + 1] [i_12])));
        }
        for (int i_13 = 2; i_13 < 19;i_13 += 1)
        {
            arr_41 [i_0] [i_0] = 67108832;
            var_29 = (max(var_29, -1817349264));
            var_30 = (min(var_30, ((min((arr_15 [i_0] [i_0] [15] [15]), 1)))));
            var_31 |= 31005;
            var_32 = (min((arr_32 [i_0] [i_13] [14] [i_0] [i_13 + 2] [i_0]), (min(0, (arr_37 [i_13] [i_13 + 2] [8])))));
        }
        var_33 = (min(var_33, 954941365));
        arr_42 [i_0] = (min((arr_26 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [7])));
    }

    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_34 *= (arr_17 [i_14]);
        arr_47 [i_14] = (max((max((arr_35 [i_14]), 148)), (arr_13 [0] [3] [i_14] [i_14] [i_14] [i_14] [i_14])));
        var_35 = (arr_32 [i_14] [10] [i_14] [i_14] [i_14] [1]);
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 4; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 17;i_17 += 1)
            {
                {
                    var_36 = (max(var_36, 189));
                    var_37 = (min(var_37, (min(((max(34531, (max(1007986197, (arr_12 [i_15] [i_15] [i_15] [5] [i_17 - 1])))))), (arr_16 [i_17] [i_15] [i_15] [i_15])))));
                }
            }
        }
    }
    #pragma endscop
}
