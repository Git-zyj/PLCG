/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((28842 ? (var_5 ^ 28842) : (~var_7)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 ^= ((-28842 ? 58052 : 641084886));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (var_4 * var_4);
                        var_13 = (min(var_13, var_10));
                    }
                    var_14 |= (((arr_12 [i_0] [1] [i_1] [i_2]) ? ((((arr_11 [i_0] [i_0] [i_0] [i_2]) && (arr_6 [i_2] [i_1] [i_2])))) : ((95 * (arr_5 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [11] [i_0] [i_5] = (!7478);
                                var_15 = 1;
                            }
                        }
                    }
                    var_16 = ((7484 ? -641084914 : 6152322049736454479));
                }
            }
        }
        var_17 = (min(var_17, -9106735923096189337));
        var_18 = ((!(arr_14 [i_0] [i_0] [4] [i_0])));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_19 = (max((~-61), (((!(14863406125030688690 - 1))))));
                    arr_26 [i_6] [i_6] = ((max(((max((arr_11 [i_6] [i_7] [i_8] [i_8]), var_5))), 127779900262654249)));
                }
            }
        }
        var_20 = (min((min(var_4, var_10)), (((((min((arr_10 [i_6] [i_6] [i_6] [i_6]), var_9))) - 4480)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_34 [i_6] [i_6] [i_10] [i_6] [i_6] = (((~(max(var_10, -1)))));
                        var_21 *= ((-1 ? (var_1 * var_10) : (((-((min((arr_13 [i_6] [i_6] [i_9] [i_10] [i_11]), (arr_29 [i_9])))))))));
                        arr_35 [i_6] [i_10] [i_10] [i_6] = ((max(((min(var_5, var_1))), (max(641084913, (arr_18 [i_6] [i_6] [i_10] [i_10] [i_10] [i_10] [i_11]))))));
                    }
                }
            }
        }
    }
    var_22 = -var_10;
    #pragma endscop
}
