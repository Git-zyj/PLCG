/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2600763338603558488;

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 1552893332;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 *= (((((2600763338603558517 ? (arr_1 [7] [i_0 + 1]) : (~30)))) ? 126 : 15845980735105993130));
                    var_18 = (((((~(arr_3 [i_0])))) ? (arr_3 [i_0]) : (min((arr_6 [i_2] [i_2] [i_2] [i_2]), (arr_6 [i_0] [i_0] [i_1] [i_2])))));
                }
            }
        }
        var_19 -= ((((!(arr_3 [16]))) ? (arr_0 [i_0]) : (arr_4 [4] [4])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_20 = ((((min((min((arr_10 [i_0 + 1] [i_0] [i_0]), -680970519)), 255))) ? (~2147483647) : (min((arr_4 [i_0] [i_3 - 2]), (arr_4 [i_0] [i_3 - 2])))));
                    arr_13 [i_0] [i_3 - 1] [19] [i_0] = var_10;
                }
            }
        }

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0 + 1] [i_0] [17] [i_0 + 1] [i_0 + 1] [i_0] = (((-(min(var_0, var_8)))) / ((((((arr_0 [i_0 + 1]) ? (arr_12 [i_0 + 1] [i_5] [3]) : var_6))) ? (((var_7 ? (arr_19 [1] [i_5] [i_0] [i_5]) : (arr_21 [i_0 + 1] [i_5] [12] [i_7] [i_0])))) : (arr_6 [i_0] [i_6] [i_6] [1]))));
                            var_21 = (((((arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) % (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            arr_24 [i_0] [i_0] [i_6] [i_7] [i_5 - 1] = ((max((arr_22 [i_0] [i_5 + 1] [i_6]), -1896955711)) << ((((~(arr_5 [i_5 - 1] [i_5 - 1] [1] [i_7]))) - 18297)));
                            arr_25 [i_5] [i_6 - 2] [i_7] [i_0] = ((-((-(arr_12 [16] [10] [i_0])))));
                        }
                    }
                }
            }
            var_22 = 22533;
        }
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] = (max(((var_13 ? ((min(-108, -680970509))) : (max((arr_21 [0] [12] [i_9 + 1] [i_9 + 1] [0]), var_9)))), (((65530 % ((-56 ? 60830 : (arr_26 [i_9]))))))));
        var_23 = (min(var_23, (((((3821 + (((arr_10 [6] [i_9 + 1] [6]) ? (arr_12 [i_9] [i_9] [i_9 + 1]) : (arr_14 [i_9] [i_9]))))) + (max((arr_20 [i_9 + 1] [i_9] [i_9] [i_9] [i_9] [i_9 + 1]), ((22547 ? 65535 : 522846170)))))))));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_24 = ((((~var_11) ? (arr_20 [i_10] [i_10] [19] [i_10] [i_10] [19]) : (arr_31 [i_10]))));
        var_25 = 15;
    }
    #pragma endscop
}
