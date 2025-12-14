/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= 0;
    var_13 = var_4;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, 6));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_15 = (max(var_15, 0));
                var_16 = 134;
                var_17 = (min(var_17, -250));
            }
            var_18 = var_9;
        }
        var_19 = (min((max(250, (max(11382, var_9)))), ((((!-625235978) == 2)))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_20 = (min(var_20, ((((arr_1 [i_4] [i_4]) % (arr_1 [i_4] [i_4]))))));
            arr_13 [i_3] = (arr_6 [i_3] [i_3] [i_3] [i_3]);
        }
        var_21 = -11902900075497962126;
        arr_14 [i_3] [i_3] = (arr_6 [i_3] [i_3 - 1] [i_3] [i_3 - 1]);
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_20 [i_5] [i_5] [i_5] = (arr_2 [i_5]);
            var_22 = (max(var_22, -238));
            arr_21 [i_5] [i_5] = (((var_3 && 5) || (arr_2 [i_5])));
        }
        var_23 = (max(var_23, (!var_3)));
        var_24 = (max(var_24, var_7));
        arr_22 [i_5] = 1;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        arr_25 [i_7 + 1] = (arr_3 [12] [i_7]);

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_28 [12] = var_3;
            arr_29 [i_7] [i_8] = var_1;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_32 [i_7] = ((2406526175 ? 1 : var_5));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_25 = 2147483645;

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_26 = (((arr_27 [i_7]) ? (arr_2 [0]) : (((var_3 ? var_0 : -84)))));
                            arr_41 [i_10] [0] [i_10] [i_11] [i_12] [0] = ((~(((arr_10 [i_7 + 1] [i_7] [i_10]) | var_9))));
                            arr_42 [i_10] [i_11] [i_11] [i_10] [i_9] [i_9] [i_10] = 0;
                        }
                    }
                }
            }

            for (int i_13 = 4; i_13 < 11;i_13 += 1)
            {
                arr_45 [i_7 + 1] [i_7 + 1] = ((~(arr_26 [i_7 + 2] [i_13 + 4])));
                var_27 -= ((-120 < (arr_34 [i_13 + 3] [i_7 + 1])));
            }
            for (int i_14 = 4; i_14 < 13;i_14 += 1)
            {
                arr_48 [i_7] [i_7] = (arr_10 [i_7] [i_9] [i_14]);
                arr_49 [i_7 - 1] [i_9] [i_14] = ((arr_33 [i_7 + 2] [i_7 + 2] [i_9] [i_14]) || 1594288134);
            }
            var_28 *= (!2328671597934454857);
        }
        arr_50 [i_7 + 2] &= ((-7 % (arr_39 [i_7 + 2] [i_7] [i_7 - 1] [i_7 - 1])));
    }
    var_29 *= -248;
    #pragma endscop
}
