/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min(var_1, -32352));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_12 = 19507;
                        arr_11 [i_0] [0] [i_1 - 3] [i_0] [i_0] [i_3] = -var_1;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_13 = ((max(18446744073709551615, ((var_10 ? (arr_10 [i_0] [i_0]) : 9223372036854775807)))));
                            var_14 = (arr_12 [8] [1] [1] [i_4] [2]);
                        }
                        var_15 = (max(var_15, (((1 - var_7) ? -126 : 13188))));
                    }
                    arr_16 [i_2 + 1] [i_0] [i_0] [i_0] = (min((((32112 & 0) ? (((var_0 ? var_0 : 4095))) : ((var_10 ? -1 : 18446744073709551615)))), ((((arr_6 [i_0]) ? var_10 : (min(1, (-2147483647 - 1))))))));
                }
            }
        }
    }

    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_16 = (min(var_16, (((min(56, var_5))))));

                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            var_17 = ((1 ? (min(var_7, ((2147483647 ? var_7 : 1)))) : (((((min(var_10, var_2))) ? (4036 + 0) : (1177768506 + var_6))))));
                            var_18 = (min(var_18, ((((min((!165875235121167526), (((arr_19 [i_8] [i_10 - 2]) ^ var_5)))) | -var_9)))));
                            arr_28 [i_6] [i_9] [i_8] [i_8] [i_10] [1] = ((0 ? var_2 : (((((var_10 ? -65 : (arr_22 [10] [i_7] [i_7])))) ? var_6 : (((((arr_25 [16] [15]) && (arr_21 [i_6] [i_6] [i_8] [1])))))))));
                            var_19 = (min(var_19, ((max(((min(((var_5 ? 0 : (arr_25 [i_6] [i_6]))), -126))), ((((max((arr_26 [i_6] [i_8] [i_8] [0] [i_8]), -902389705))) ^ 18446744073709551592)))))));
                        }
                    }
                }
            }
        }
        arr_29 [i_6] &= var_3;
    }
    #pragma endscop
}
