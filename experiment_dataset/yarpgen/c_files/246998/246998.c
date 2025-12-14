/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 ^= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = var_7;
        arr_4 [i_0] = (((min(var_0, (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (14866814822585798301 | 120));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (arr_14 [i_4] [i_1] [i_3] [i_1] [i_1 + 1]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_5] = (var_2 && (arr_6 [i_1 - 1] [i_3 - 2]));
                            var_15 = (((arr_13 [i_1] [i_1 + 1] [19] [i_4] [i_5] [i_5]) ? (arr_13 [9] [i_1 - 1] [i_4] [i_4] [i_5] [i_5]) : 14866814822585798301));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_16 -= (11648 || 14866814822585798301);
                            arr_21 [i_1] [i_1] [i_6] = (arr_5 [i_1]);
                            arr_22 [i_1] [i_1 + 1] [14] [i_1] [i_1 - 2] = (max(1919770209, (arr_12 [i_4] [i_1] [i_4] [i_4])));
                            var_17 = ((((min(var_1, (arr_5 [i_1])))) ? (arr_15 [i_1 - 1] [i_1]) : ((max((arr_9 [i_3 + 2] [i_1]), (arr_9 [i_1 - 1] [i_1]))))));
                            var_18 ^= min(var_8, (arr_14 [8] [6] [i_3] [i_3] [i_3]));
                        }
                    }
                }
            }
        }
        var_19 = var_1;
    }
    for (int i_7 = 2; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = (max(((var_6 ? (arr_23 [i_7] [i_7 - 1]) : var_2)), var_9));

        for (int i_8 = 3; i_8 < 24;i_8 += 1)
        {
            var_20 ^= (min(((((((arr_6 [i_8 - 1] [i_7]) - var_10))) % (((arr_9 [i_7] [1]) ? 17214450227115776102 : (arr_28 [2] [i_7] [2]))))), (arr_13 [1] [i_8] [i_7] [i_7] [i_7] [24])));
            var_21 ^= 67;

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_22 += (arr_15 [i_7 + 1] [i_8]);
                arr_32 [i_7 - 2] [i_7] [i_9] = var_2;
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                {
                    arr_39 [i_7] = 507425817;
                    var_23 = (min(var_23, (arr_6 [i_11 - 1] [i_10])));

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_43 [14] |= var_3;
                        var_24 *= (min(-1919770197, (max(3579929251123753315, 1919770197))));
                        arr_44 [6] [i_10] [i_10] [i_10] |= ((((((arr_40 [i_7 - 2] [i_10] [6] [i_12 - 1]) ^ var_6))) ? (((((var_7 ? (arr_33 [i_7] [i_7 - 2] [14]) : (arr_11 [i_12] [i_11 - 1] [19])))) ? (((min(var_1, var_8)))) : (arr_15 [i_7 - 2] [11]))) : var_3));
                    }
                }
            }
        }
    }
    var_25 = var_9;
    var_26 = (2221866792958849455 < var_5);
    var_27 = (min(((((var_7 ? var_11 : var_2)) / var_2)), var_3));
    #pragma endscop
}
