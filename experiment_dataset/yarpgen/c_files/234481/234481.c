/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 = (-(arr_12 [i_2] [i_2] [i_2] [i_2 + 1]));
                            arr_16 [i_4] = (0 || (!var_13));
                            var_16 = ((~((0 ? 0 : -1))));
                            var_17 += ((var_3 ? 0 : (((~(arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [i_3]))))));
                            arr_17 [i_0] [i_4] [i_2] [i_3] [i_4] = -4294967295;
                        }
                    }
                }
                arr_18 [i_0] [i_1] = arr_4 [i_2] [i_1] [i_0];
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
            {
                arr_21 [i_0] |= -4294967295;
                arr_22 [i_5] [i_1] = (((arr_2 [i_5 - 1]) ? (arr_8 [i_0] [i_5] [i_5 + 4]) : (var_11 == 4180791082374349296)));
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((-4180791082374349296 ? (arr_13 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) : (arr_13 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]))))));
                            var_19 = (arr_23 [i_0] [i_6]);
                        }
                    }
                }
            }
            var_20 = (arr_19 [i_0] [i_0]);
            arr_31 [i_1] = (((~-4924775479879140481) >= 164));
        }
        var_21 = var_9;
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        var_22 = (((var_4 ? -10832 : 0)));

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_23 += (((arr_11 [i_10] [i_10] [i_9 + 1] [i_9]) ? 0 : 12074));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_42 [i_12] = 55281;
                        arr_43 [i_9] [i_10] [i_10] [i_10] [i_12] |= var_0;
                        arr_44 [i_12] = (((arr_3 [i_11 - 1] [i_9 - 1]) ? (arr_3 [i_11 - 1] [i_9 - 2]) : (arr_3 [i_11 - 2] [i_9 - 3])));
                    }
                }
            }
        }
    }
    var_24 = (-((((max(var_2, 0))) ? (max(0, var_1)) : (((4180791082374349296 ? var_0 : 24453))))));
    #pragma endscop
}
