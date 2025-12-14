/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_14 = (((((arr_4 [i_1 + 1] [i_1] [i_0 + 2]) * (arr_4 [i_1 - 1] [i_1] [i_0 + 1]))) << (var_5 - 8923686158556381901)));
            arr_5 [i_0] [i_1] = 113;
            var_15 = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 = 64;
                            var_17 ^= 7;
                        }
                    }
                }
            }
            var_18 ^= 7;
        }
        var_19 = (arr_12 [i_0] [i_0] [i_0] [i_0] [8] [i_0]);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    {
                        var_20 = ((-4791852850980369797 - (arr_9 [i_9 + 1] [i_8 - 2] [i_8])));
                        var_21 = var_4;
                        arr_26 [i_6] [i_7] [i_8] [i_9] = (((arr_13 [i_8 + 3] [i_6] [i_9 + 1] [i_9]) + 1303059417));
                        var_22 = (((arr_12 [i_9 - 3] [i_9] [i_9] [i_9 + 1] [i_7] [i_9]) << var_11));
                    }
                }
            }
            var_23 = (arr_11 [i_6] [i_6] [i_6] [i_7]);
            var_24 *= 4294967276;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_25 = ((8188 + (arr_4 [i_10] [i_10] [i_6])));
            arr_30 [i_10] [i_6] [i_6] = (arr_19 [i_10] [i_10] [i_6]);
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {
            var_26 -= 20;
            var_27 = (((arr_10 [i_6] [i_11]) + (arr_20 [i_6] [i_11] [i_11])));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        var_28 -= (arr_22 [i_6] [i_11] [i_12] [i_13]);
                        var_29 = (arr_32 [i_6] [i_12] [i_13]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            var_30 = (max(var_30, (arr_9 [i_6] [i_6] [i_14])));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        var_31 = (arr_1 [i_6]);
                        var_32 = (min(var_32, var_2));
                        var_33 += -8973685908421296313;
                    }
                }
            }
        }
        var_34 = 0;
        var_35 = (((((max((arr_38 [i_6] [i_6] [i_6]), (arr_38 [i_6] [i_6] [i_6]))))) / -8973685908421296313));
        var_36 = ((var_4 + (arr_36 [i_6])));
    }
    #pragma endscop
}
