/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -17;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 += (arr_0 [2]);

        /* vectorizable */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_10 [11] [1] [3] = (((arr_4 [i_2] [4] [i_1 - 1]) ^ var_3));
                var_14 = 1;
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_15 *= var_0;
                var_16 = (((arr_8 [11] [i_1] [i_1 - 2] [i_1 - 2]) - var_7));
                arr_15 [i_0] [i_1 - 1] [i_1] [i_1 - 1] = 1;
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_17 *= 0;
                var_18 = (((arr_9 [i_1 - 4] [i_1 - 4] [i_1 - 3]) ? (!6791185174958665467) : (arr_8 [2] [2] [i_4] [i_1])));

                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_19 += (((arr_25 [i_5] [i_5 - 2] [i_1 - 3]) / -6791185174958665468));
                        var_20 &= ((4 ? (~-17) : (54242 * -17)));
                        var_21 = (min(var_21, (arr_9 [i_1 - 4] [i_1 - 2] [8])));
                        arr_28 [12] [12] [i_4] [i_5] [i_5] = var_3;
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_16 [i_1 - 2] [i_5 + 1]);
                    }
                    arr_30 [i_5 + 1] [i_4] [i_0] = (1 + 6791185174958665467);
                    arr_31 [11] [11] [i_1] [11] [3] = -2880497660754125079;
                    var_22 = 51759;
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_36 [i_7 + 2] [12] [4] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_4] [i_7];
                    arr_37 [i_0] [1] [i_0] [i_0] = (((arr_5 [i_0]) ^ 1));
                }
                arr_38 [i_0] [13] [i_4] = ((!(arr_13 [i_1 - 1] [i_1] [i_1])));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_47 [i_1] [i_10] [i_0] = -30211;
                            arr_48 [i_0] [3] [i_8] [i_9] [i_10] = var_8;
                            arr_49 [3] [3] = (((arr_19 [i_9] [i_8] [i_0]) != (arr_18 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_23 *= (((arr_2 [i_0]) ? ((1 ? 1 : (arr_34 [i_8] [i_0] [i_8]))) : var_8));
                arr_50 [i_0] [i_0] [i_8] = (-27505 + var_9);
            }

            for (int i_11 = 4; i_11 < 14;i_11 += 1)
            {
                var_24 = (((arr_12 [i_0] [i_1 + 1] [i_11 - 3]) ? var_9 : (arr_17 [i_1] [i_1] [1])));
                arr_54 [i_0] [12] [12] = ((16 / (arr_8 [i_0] [8] [4] [i_11])));

                for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    var_25 = (arr_25 [i_1 - 4] [i_0] [0]);
                    arr_57 [4] [i_0] = (arr_7 [4] [i_11 + 1] [i_1 - 4]);
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    arr_62 [5] [i_1] [i_11] [i_13] [3] = (arr_33 [i_13] [i_0] [i_0]);
                    arr_63 [i_1] = ((-12 ? 14767065214712147993 : 1));
                    arr_64 [i_13] [9] [i_0] [i_0] = (((arr_19 [i_0] [i_1 + 1] [i_11 + 1]) | (((15031 << (12340006898004293062 - 12340006898004293062))))));
                    var_26 = (((arr_11 [i_1 - 1] [i_0] [i_11 - 3] [i_0]) ? (((6791185174958665468 > (arr_3 [6])))) : 1));
                }
                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    arr_67 [i_0] [8] [i_0] [i_0] [3] [i_0] = 8;
                    var_27 = ((-32762 ? 66 : 42336));
                }
            }
        }
    }
    #pragma endscop
}
