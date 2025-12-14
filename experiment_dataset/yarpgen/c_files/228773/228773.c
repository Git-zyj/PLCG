/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) * ((((arr_0 [i_0]) != (arr_1 [i_0]))))));
        var_17 += (((arr_0 [i_0]) ^ (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_18 = (min(var_18, ((((arr_3 [i_1 + 1] [i_1] [i_1]) ? (arr_3 [i_1 + 1] [16] [i_1]) : (arr_3 [i_1 - 1] [i_1] [i_0]))))));
            arr_5 [i_0] = ((((((arr_1 [i_0]) / (arr_3 [1] [i_1] [1])))) ? (arr_1 [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1])));
            var_19 |= (arr_3 [i_0] [i_0] [i_0]);
            var_20 = (((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_21 -= (((arr_3 [i_2 - 1] [i_2 + 1] [i_2]) % (arr_3 [i_2 - 1] [i_2] [i_2])));
            var_22 = (1 ^ 63);
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_0] [i_3 + 1] [i_0] = ((1 ? 1 : 0));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((((arr_10 [i_0] [i_0]) * (arr_17 [i_6] [i_6] [i_6] [i_6])))) ? (arr_22 [i_3] [i_4] [i_5 - 1] [i_6]) : (((((arr_0 [i_4]) > (arr_11 [i_0] [i_0] [i_4])))))))));
                                var_24 = (1 / 12);
                                arr_23 [7] = (((arr_13 [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_4 - 2]) | (((arr_19 [i_3] [i_5 - 1]) ? (arr_8 [11] [i_3 - 1] [i_3]) : (arr_14 [i_6])))));
                                var_25 = (min(var_25, (((((((arr_14 [i_6]) || (arr_10 [i_5] [i_5])))) >= (arr_12 [i_0] [i_3 - 2]))))));
                            }
                        }
                    }
                    var_26 = ((((((arr_3 [i_4] [5] [i_4]) ^ (arr_8 [i_0] [i_0] [i_0])))) ? (arr_6 [i_4 - 3] [i_3] [14]) : (arr_7 [i_4 + 2] [i_4] [i_4 - 1])));
                    var_27 *= (arr_3 [i_0] [i_0] [i_0]);
                    arr_24 [i_0] [9] &= (((arr_9 [i_3 - 1] [i_3 - 2] [i_0]) ? (((arr_4 [i_0]) ^ (arr_4 [1]))) : ((((arr_20 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0] [i_3]) ? (arr_17 [i_3 + 2] [i_4] [i_3 + 2] [6]) : (arr_0 [i_0]))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 = ((((((arr_19 [i_7] [i_7]) ? (arr_14 [i_7]) : (arr_14 [i_7])))) >= (((arr_19 [i_7] [i_7]) + (arr_19 [i_7] [i_7])))));
        var_29 |= (arr_25 [i_7]);
        arr_27 [i_7] = (arr_10 [i_7] [i_7]);
        arr_28 [1] = (arr_12 [i_7] [i_7]);
    }
    var_30 = (min(var_30, var_4));
    #pragma endscop
}
