/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] &= 1;
        var_17 &= var_16;
        var_18 -= (~var_0);
        arr_4 [i_0] = (min(((min(1, 3))), (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 *= (!18);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_1] = var_9;
                    arr_15 [i_1] = (min((arr_0 [i_3]), var_9));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_20 &= -var_6;
        arr_18 [i_4] &= (((max((arr_2 [i_4 - 1]), 3))) ? (min((arr_2 [i_4 - 1]), var_5)) : -var_12);

        for (int i_5 = 4; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((~(max((arr_8 [i_5 - 4] [i_5 - 3]), var_12)))))));

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_25 [i_4 + 1] [i_4 + 1] [i_5 - 1] [i_6] = var_7;
                arr_26 [i_5] = (arr_23 [0]);
                arr_27 [i_4 - 2] [i_4 - 2] [8] [1] = (arr_5 [i_5]);
            }
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_22 -= var_7;
                            var_23 = (max(var_23, 175));
                            var_24 = (!17834132246921047206);
                            arr_37 [i_4] [i_8] [i_9] [i_9] [1] [1] = var_7;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        {
                            arr_45 [i_11] [0] [i_12] = (arr_6 [i_4 + 1] [i_13 - 3]);
                            var_25 = (min(var_25, (!var_10)));
                        }
                    }
                }
            }
        }
        for (int i_14 = 4; i_14 < 11;i_14 += 1) /* same iter space */
        {
            arr_48 [i_4] [i_14 - 3] = (~-var_3);
            var_26 = (min((arr_11 [i_4] [i_4 - 2]), var_9));
            var_27 = min(var_2, ((~(arr_12 [i_4 - 2]))));
        }
        var_28 = (max(var_28, var_5));
    }
    var_29 = (max(var_29, var_5));
    #pragma endscop
}
