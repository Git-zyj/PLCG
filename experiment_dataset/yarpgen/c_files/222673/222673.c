/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_9 >> ((min(25471, 1))))) >> 0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [1] = 5073;

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_13 = (((arr_5 [i_1 - 1]) + -32747));
            var_14 += 494808257;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_14 [8] [i_1] [i_2] [i_4] [i_0] [i_1 + 2] = 4288295960;
                            arr_15 [i_0] [i_0] [i_0] [i_0] = 1;
                            var_15 -= (((arr_11 [i_4 - 2] [i_4 - 3]) * (arr_11 [i_4 + 2] [i_4 - 2])));
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_16 ^= 3969553763;
                            var_17 ^= (arr_11 [8] [i_5]);
                            var_18 = (85 ^ 2091561084);
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_5] [i_5] [7] [i_0] [i_5] = 524287;
                            var_19 &= 6;
                        }
                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_20 = ((arr_16 [i_0] [i_6] [i_0]) && (arr_16 [i_0] [7] [i_10 - 1]));
                            arr_34 [i_0 + 1] [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = 1146022716;
                            var_21 = (max(var_21, (arr_33 [1] [i_5] [i_5] [i_5])));
                        }
                        arr_35 [6] [6] [i_0] [6] = 3103334951;
                        arr_36 [i_0] = 0;
                        arr_37 [i_0 + 2] [i_0] [6] = 1;
                    }
                }
            }
            var_22 = ((9223372036854775807 << (2431845861813092137 - 2431845861813092137)));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_23 = (arr_7 [i_0] [i_11]);
                            var_24 = arr_22 [10] [i_0] [i_0 - 1] [i_13 - 2] [3];
                            arr_46 [i_12] [i_12] [i_0] [i_12] [i_12] [i_12] = 61281;
                        }
                    }
                }
            }
            var_25 = (~(arr_21 [i_0]));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_26 = 888823409;
                            arr_56 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = 1713124706;
                            var_27 = (arr_8 [i_16] [i_16] [i_16] [i_16 - 2]);
                            arr_57 [i_14] [i_15] [i_15] [i_0] [i_17] = (arr_10 [i_0] [i_0] [i_17]);
                        }
                    }
                }
                var_28 = 1;
            }
            arr_58 [i_0] = 0;
        }
    }
    var_29 = (-14708 == 1);
    var_30 = (max(var_30, 0));
    var_31 = -1;
    #pragma endscop
}
