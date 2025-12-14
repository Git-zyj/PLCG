/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (max(var_7, ((~((1023685258 ? var_2 : 6884270732772907219))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 ^= (((!4294967289) ? (min((max((arr_4 [i_1]), (arr_1 [i_0] [i_0]))), ((((arr_3 [16]) < (arr_4 [4])))))) : (((((((1023685283 + (arr_3 [i_1])))) > ((-9223372036854775803 ? 3891444534 : var_2))))))));
                arr_5 [17] [17] [17] = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_12 -= ((((((!(arr_7 [i_0] [i_0] [i_0] [15]))))) % (((arr_1 [i_2] [i_2]) ? var_4 : (arr_7 [i_0] [i_2] [i_2] [i_3])))));
                            var_13 = (max(var_13, ((min((min((arr_6 [i_0] [i_1] [i_1] [i_1]), 1659532430)), (((!(arr_8 [i_0] [i_2])))))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, var_8));

    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (~var_8);
        var_15 = ((-((((3305050361425923439 == -64) > (-127 - 1))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_16 = (((arr_16 [i_5]) != 1));
        arr_17 [i_5] = (arr_0 [1]);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_23 [i_6] [i_7] |= (arr_21 [i_6] [i_6 - 2] [i_6 - 1]);

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_17 = ((-(((arr_12 [5]) >> 1))));
                        arr_26 [i_5] [i_5] [i_5] [i_5] = ((((arr_3 [i_7]) ? (arr_2 [i_8]) : 3138751976609760744)));
                        var_18 |= (((((arr_18 [i_6 - 2] [i_6 - 1] [i_6 + 1]) + 2147483647)) << (((((arr_18 [i_6 + 1] [i_6 - 2] [i_6 + 1]) + 25)) - 7))));
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        arr_31 [i_5] [i_5] [i_7] [i_5] = ((((!(arr_12 [i_5])))));
                        var_19 = (min(var_19, ((!(arr_27 [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 2])))));
                        var_20 -= ((514904571 ? (arr_9 [i_9] [i_9] [i_9 + 1] [i_9]) : (arr_7 [i_9] [18] [i_9 - 1] [i_9])));
                    }
                    var_21 = (min(var_21, (((arr_18 [i_6 - 1] [i_6 - 2] [i_6 + 1]) ? (arr_18 [i_6 - 2] [i_6 + 1] [i_6 - 1]) : (arr_18 [i_6 - 1] [i_6 - 2] [i_6 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
