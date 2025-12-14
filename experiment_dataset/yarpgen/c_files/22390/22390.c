/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = 16373134026562208201;

                    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_1] [i_1] [i_0] [i_3] = 347;
                        var_19 = min(((~(arr_8 [i_0] [i_0]))), ((~(arr_5 [i_0 - 1] [i_0] [i_0 + 1]))));
                        var_20 = (~(arr_5 [i_0 - 1] [i_3] [i_2]));
                        var_21 = ((((min(2073610047147343415, (arr_6 [i_1] [i_3])))) ? (max((((30 ? (arr_1 [i_3]) : var_13))), (min(var_4, 2073610047147343415)))) : (((-(!var_7))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_22 = ((-var_2 ? var_2 : (arr_8 [i_0] [i_0])));
                            var_23 = ((~((2073610047147343415 ? 16373134026562208200 : 2073610047147343414))));
                            var_24 = ((16373134026562208202 ? 16373134026562208214 : (arr_14 [i_5 - 2] [i_0])));
                            var_25 -= (((((-(arr_14 [4] [i_2])))) ? 9223372036854775807 : var_16));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_26 = (min(var_26, (arr_7 [i_0] [i_0] [i_4])));
                            arr_19 [i_0] [i_0] [i_4] &= (arr_18 [i_0] [i_0] [i_2] [i_4] [i_2]);
                            var_27 = (arr_10 [i_4 - 2] [i_4 + 1] [i_0] [i_4] [15]);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_28 -= var_9;
                            var_29 -= ((-(arr_13 [i_0] [10] [12] [i_2] [i_4] [i_4 + 1] [i_7])));
                            var_30 = (~(~var_4));
                            arr_22 [i_7] [i_0] [i_2] [i_0] [i_0] = (((-4955473086017775400 > -4955473086017775400) - (arr_3 [i_0])));
                        }
                        arr_23 [0] [i_1] [i_0] [1] = ((~(arr_4 [i_0] [i_0] [i_4 - 1])));
                        var_31 -= (((arr_1 [i_2]) == 32758));
                    }
                    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_32 = ((((16373134026562208196 ? -1278708923 : 1278708927)) / ((min((arr_18 [i_0 - 1] [i_8 + 1] [i_8 - 2] [i_0] [i_8 - 2]), (arr_18 [i_0 + 3] [i_8 - 2] [i_8 - 2] [i_0] [14]))))));
                        arr_27 [i_0] [i_1] [i_2] [i_0] = (((arr_20 [i_0] [i_0 + 1]) || (arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] [i_8])));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_30 [14] [11] [i_2] [i_0] [i_0] [i_2] = ((1349014410 == (arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] [i_8] [i_9])));
                            var_33 *= ((var_13 ? var_9 : var_16));
                        }
                    }
                }
            }
        }
    }
    var_34 = ((-(max((((25165824 ? var_15 : var_4))), (min(var_2, var_14))))));
    var_35 = var_14;
    #pragma endscop
}
