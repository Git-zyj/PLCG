/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 ^= (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_13 &= ((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_1]));
            var_14 = (((arr_0 [i_1]) == var_10));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_15 = (((arr_5 [6] [i_2] [i_2]) != (arr_5 [i_0] [i_2] [i_2])));
            var_16 = (((arr_4 [i_2] [i_0]) / (((-(arr_7 [i_2]))))));
            var_17 = (arr_3 [i_0]);
        }

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_18 -= var_6;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_19 += ((var_1 ? 0 : (arr_11 [i_4] [i_3] [i_4])));
                var_20 = var_0;
                var_21 = (arr_12 [i_0] [i_3] [i_3]);
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                var_22 = ((~(arr_1 [13] [i_5 + 1])));
                var_23 = (!var_6);
            }
            var_24 = var_7;
        }
        var_25 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_29 [i_6] [i_9] = (arr_0 [i_8]);
                        var_26 = arr_28 [i_9] [i_9] [i_9] [i_6];
                        var_27 = var_0;
                    }
                }
            }
        }
        var_28 = ((+((((arr_23 [i_6] [11] [i_6] [i_6]) <= var_9)))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 18;i_10 += 1)
    {
        var_29 = var_1;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        var_30 = (arr_39 [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10]);
                        var_31 = (var_3 >= var_0);
                        var_32 *= (var_5 < var_10);
                    }
                }
            }
        }
    }
    var_33 = var_10;
    var_34 &= ((((max(var_5, ((var_7 ? var_10 : 1730991634272504715))))) ? ((((var_3 ? var_4 : 0)) & var_1)) : ((min((~var_5), var_1)))));
    var_35 = (!-16);
    #pragma endscop
}
