/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((1 ? (arr_1 [i_0]) : 1));
        var_18 = (((((var_3 ? 1 : (((((arr_2 [i_0]) != 929188653))))))) ? 1 : (((((1 ? 0 : 1))) ? var_6 : (arr_1 [i_0])))));
    }

    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 |= 12149047039927515540;
            var_20 ^= var_0;

            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_21 -= var_4;
                var_22 ^= ((-(arr_0 [i_1 + 3])));
                var_23 &= ((!((((arr_2 [i_2]) ? 1320614489 : 1)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_0 [i_1 - 4])));
                            var_25 -= ((var_0 ? (arr_10 [i_3 - 1] [i_5] [i_5]) : 1));
                            arr_17 [i_1] [17] [i_1 - 1] [i_3] [i_3] [1] [i_1] = 4294967295;
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_26 = (((arr_4 [i_6 - 1]) || (arr_4 [i_1])));
                var_27 = (arr_7 [i_6]);
                var_28 = (min(var_28, var_13));
            }
            for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_29 = (((arr_2 [i_1 - 3]) ? (arr_13 [i_7] [i_7 + 1] [i_7] [i_7]) : (arr_18 [i_1 - 3])));
                var_30 = var_13;
                arr_25 [i_1] [i_1] &= (((arr_11 [i_1 + 1] [i_1 - 3] [i_1 + 3] [i_1 - 2]) ^ (arr_11 [i_1 + 4] [i_1 + 2] [i_1 - 4] [i_1 + 3])));
            }
            arr_26 [i_1 + 2] = 1;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_31 = (arr_16 [i_1 + 2] [i_8] [i_8]);
            var_32 = ((((min(var_16, var_1))) ? (arr_11 [i_1] [i_1] [i_1] [8]) : ((-(arr_11 [16] [i_1 + 4] [2] [i_1])))));
            var_33 ^= ((var_0 ? (((~var_11) ? var_5 : var_11)) : ((-((-(arr_10 [i_1 + 3] [i_1] [i_8])))))));
        }
        arr_30 [14] [1] &= ((-(max(-1, ((var_7 / (arr_29 [i_1] [i_1 - 2] [i_1])))))));
    }
    var_34 = (min(143, 1));

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_35 = 6631658834264116880;
                        var_36 = ((var_16 <= (11815085239445434735 < 1)));
                    }
                }
            }
            var_37 = ((var_5 ? (arr_8 [i_10] [i_9] [i_9]) : (((var_7 ^ var_2) & (((max((arr_21 [i_9] [i_9]), 1))))))));
        }
        var_38 = (arr_15 [i_9] [i_9] [i_9] [i_9] [6] [i_9]);
        var_39 = (max(var_39, (((-((-var_16 ? (~0) : var_6)))))));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_42 [i_13] = (arr_14 [i_13] [14]);
        var_40 = (arr_4 [i_13]);
        var_41 = (max(var_41, (((~(((arr_7 [i_13]) ^ (arr_7 [i_13]))))))));
        arr_43 [i_13] = (((arr_21 [i_13] [i_13]) && ((min(1, (arr_8 [i_13] [i_13] [i_13]))))));
        arr_44 [i_13] [i_13] &= var_16;
    }
    var_42 = (min(var_42, (((var_0 ? (((min(var_5, var_8)))) : (~var_14))))));
    #pragma endscop
}
