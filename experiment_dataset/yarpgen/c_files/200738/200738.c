/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_9 [5] [i_1] [8] [i_3] = (4294967295 ? (((~var_3) ? var_12 : 65535)) : (((!var_7) ? var_8 : ((~(arr_0 [i_0] [i_3]))))));
                        var_16 = (min(var_16, var_5));
                        var_17 = (max(var_17, ((((((var_13 ? (arr_3 [i_0] [i_2] [i_3]) : var_12))) ? (65533 != var_6) : ((max(var_13, var_2))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [17] [18] [10] = (arr_11 [i_0] [i_0] [9] [i_4]);

                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            arr_15 [i_2] [i_1] [i_2] [i_1] [i_0] = var_14;
                            var_18 = (max(var_18, (((var_3 ? var_3 : var_10)))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_19 += ((-65535 ? var_8 : var_13));
                            arr_18 [i_1] = -11066;
                            var_20 = var_9;
                            arr_19 [i_0] [i_0] [i_0] [6] [i_4] [i_0] [i_6] = 919792913;
                        }

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_21 -= ((-var_9 ? var_6 : ((var_9 ? var_14 : var_8))));
                            arr_22 [i_7] [i_7] [i_2] [i_7] [i_0] = var_2;
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1] [15] [i_0] |= ((!(arr_1 [i_0])));
                            var_22 = (min(var_22, ((-22 ? -11090 : 65535))));
                            arr_26 [10] [10] [1] [i_4] = var_11;
                            arr_27 [5] [i_1] [5] [i_1] [10] [i_1] = var_9;
                            arr_28 [8] [8] [8] [1] = var_0;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_23 ^= (arr_20 [i_0] [i_0] [i_0] [i_9] [i_0] [i_0] [4]);
                            arr_31 [i_1] [3] [i_1] [i_1] [i_1] = (((~var_2) ? var_0 : ((var_6 ? var_11 : 26))));
                            arr_32 [i_0] [7] [i_2] [i_4] [1] = (((arr_10 [i_0] [i_1]) ? (arr_0 [i_0] [9]) : var_12));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, (arr_23 [i_0] [i_0] [i_0] [i_0])));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [1] = var_5;
                            var_25 = var_9;
                            var_26 ^= ((var_3 - (arr_23 [i_2] [i_2] [i_2] [4])));
                        }
                    }
                    arr_37 [i_2] [17] [12] &= (~4294967295);
                    var_27 = var_12;
                }
            }
        }
    }

    for (int i_11 = 2; i_11 < 15;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            arr_44 [i_11] [i_12] [i_12] = ((~((((min(var_0, var_14))) ? -1 : ((var_15 ? var_5 : var_11))))));
            var_28 -= var_5;
        }
        arr_45 [i_11] |= (arr_38 [i_11]);
        var_29 += (var_9 || ((((var_4 ? var_6 : var_3)))));
    }
    #pragma endscop
}
