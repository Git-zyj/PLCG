/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (((((44 + (-127 - 1)))) ? 194717562 : var_8));
        var_12 = (min(var_12, (((-(+-1))))));
        var_13 |= (arr_0 [i_0] [16]);
        arr_4 [i_0] [i_0] = ((11 ? (arr_0 [i_0] [i_0]) : var_9));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_0] = ((-((4293918720 ? (-3389610101700246658 || 1) : 15))));
                            arr_15 [17] [i_2] [i_0] [11] [i_2] [i_2] = ((!(3389610101700246666 < 0)));
                        }
                        var_14 = ((((((!((((-2147483647 - 1) ? 0 : -194717562))))))) != ((var_10 ? (arr_3 [i_0]) : 7))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_15 &= 670925294;
        arr_18 [i_5] [i_5] = var_2;
        var_16 ^= var_0;
    }
    var_17 = ((var_1 ? (var_7 > var_8) : var_6));

    /* vectorizable */
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_18 -= (~1351);
                        var_19 = (~65524);
                        arr_32 [i_6] [14] [i_8] [i_9 - 1] = -126;
                        var_20 = ((1923923746677374264 ^ ((((arr_2 [i_9 - 1] [i_6 - 2]) ? (arr_31 [3] [i_7 - 1] [i_6] [5] [i_7 + 1] [i_8]) : var_9)))));
                    }
                }
            }
            arr_33 [i_6] = (arr_21 [i_6 - 1] [i_6 - 1]);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_37 [i_6 + 1] [15] = ((-3389610101700246666 ? 0 : -3389610101700246661));
            arr_38 [14] = ((arr_3 [i_6]) ? ((1536 ? var_6 : var_9)) : var_8);
            var_21 = (min(var_21, (arr_27 [i_6 - 1] [1] [i_6 + 2])));
            arr_39 [i_6 + 2] [i_10] [3] = 65524;
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_43 [i_11] [i_6] = (!(arr_28 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 2]));
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_22 = (min(var_22, (-9223372036854775807 - 1)));
                            var_23 = (min(var_23, (~8589934591)));
                            arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] &= -1412341398;
                            var_24 = (4161536 & var_8);
                            var_25 = ((!(arr_20 [i_6 - 2] [i_6])));
                        }
                    }
                }
            }

            for (int i_15 = 3; i_15 < 19;i_15 += 1)
            {
                var_26 = (~137);
                var_27 -= (((var_6 + var_8) % ((-126 ? 2064719648 : -3389610101700246661))));
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    var_28 = (arr_30 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 2]);
                    arr_62 [i_17] [i_17] [i_16] [i_6] = -9223372036854775798;
                    var_29 = 3389610101700246666;
                    var_30 = (min(var_30, ((((arr_48 [i_6 - 1] [i_16] [i_17] [i_6] [i_17] [i_6 - 2]) ? (arr_48 [i_16] [i_16] [10] [i_6] [i_6] [i_6 - 2]) : var_1)))));
                    var_31 = (min(var_31, var_0));
                }
            }
        }
        var_32 = (((var_8 - (arr_59 [i_6] [i_6] [i_6]))));
    }
    #pragma endscop
}
