/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (~var_9);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(var_17, (((var_0 & (((arr_0 [i_0]) ? (((17 ? (arr_1 [i_0]) : var_7))) : (min((arr_2 [i_0]), -16626)))))))));
        arr_3 [i_0] = (min((~var_3), ((8040154840573430258 ? 69 : 1035728963))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 += var_11;
        var_19 = (((arr_7 [i_1]) ? var_12 : (arr_7 [i_1])));
        arr_8 [i_1] = (((arr_4 [i_1] [i_1]) >= 66));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_20 += var_8;
                var_21 = (min(var_21, (((arr_12 [i_1] [i_3 + 1] [i_3 - 2] [i_3]) ? (arr_12 [i_2] [i_3 - 2] [i_3 - 1] [i_3]) : (arr_12 [i_1] [i_3 - 2] [i_3] [i_3])))));
                var_22 += ((7 ? var_15 : ((var_15 ? var_6 : var_1))));
                var_23 = (max(var_23, ((((arr_11 [i_3 - 1] [i_3] [i_3] [i_3 - 1]) ? 45166 : (arr_0 [i_3]))))));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                arr_18 [7] [i_1] [i_4] [i_1] = ((-3383248649614570192 ? (((arr_4 [i_1] [i_1]) / (arr_0 [i_4 - 1]))) : ((var_2 ? var_6 : (arr_17 [i_1] [i_1] [i_1] [i_1])))));
                var_24 ^= var_10;
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_25 = (min(var_25, var_9));
                arr_21 [i_1] = arr_14 [i_5] [i_5 + 1] [i_1] [i_5];
                var_26 = (min(var_26, ((~(arr_13 [i_2] [i_2] [i_5] [i_5 + 1])))));
                arr_22 [i_1] [i_5] [i_1] = (((arr_16 [i_5] [i_1]) == (((((arr_15 [i_1] [i_1] [i_1]) < var_5))))));
            }
            arr_23 [i_1] = arr_2 [i_1];
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_27 = (max(var_27, (((-15721 ? (((96 ? 2047 : 2109484154))) : 3750185973)))));
            var_28 = ((var_7 & (((arr_14 [i_1] [i_6] [i_1] [i_1]) ? var_15 : 10548))));
            var_29 = (max(var_29, (arr_5 [i_6 + 2] [i_6])));
            var_30 = (min(var_30, (((~(arr_26 [i_6] [i_6 + 1] [i_6]))))));
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_31 = (min(var_31, (arr_2 [i_8 - 2])));
                        arr_38 [1] [1] [i_8] [i_1] [i_9] = ((var_2 ? var_10 : (arr_28 [i_7 + 2])));
                    }
                }
            }
            var_32 = (min(var_32, (arr_14 [i_1] [i_7 + 2] [12] [i_7])));
        }
    }
    var_33 = max((max(var_9, (~1))), ((((min(var_1, var_10)) % var_8))));
    var_34 ^= var_12;
    #pragma endscop
}
