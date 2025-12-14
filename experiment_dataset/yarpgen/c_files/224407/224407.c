/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 73;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = ((var_8 ? ((((max(1099478073344, -1))) ? (max(-1099478073345, var_3)) : (((-(arr_1 [i_0])))))) : -5809371548911043250));
        arr_3 [i_0] = (min((max((arr_0 [i_0] [i_0]), var_6)), 0));
        var_12 = (min((((((max((arr_0 [6] [7]), 63))) ? (((arr_1 [i_0]) ? -4758 : 110)) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_3))))), (min((min(var_6, 2497669726636753340)), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = (!127);
        var_14 = (max(var_14, ((min((arr_5 [i_1] [i_1]), (min(var_5, ((max(23, var_7))))))))));
        arr_7 [6] = (arr_0 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            var_15 -= (max(16, (min(255, 15051))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [i_4] [i_3] [i_2 - 2] [4] [i_1] = (((((23 >> (49265 - 49260)))) ? (max((992 + 199), (((arr_15 [i_1]) ? (arr_0 [i_1] [i_4]) : var_2)))) : ((((((arr_10 [i_3] [i_3] [i_3 - 1] [i_3]) + 2147483647)) << (((((arr_10 [i_2 - 1] [i_2] [i_3 - 1] [i_4]) + 122)) - 8)))))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_20 [i_5] [i_2] [i_4] = (min((!-1), (arr_19 [i_2 + 1] [i_5] [i_2] [i_3 - 1] [i_3 - 1])));
                            arr_21 [3] [i_5] [i_3] [0] [i_5] = ((~(max((arr_14 [i_2 + 2] [i_2] [i_2 - 1] [i_3 - 1]), (arr_10 [i_2 + 3] [i_3 - 1] [i_3] [i_5])))));
                            arr_22 [i_5] [8] [i_3 - 1] [i_4] [i_3 - 1] = ((((max(var_8, (arr_15 [i_2 + 1])))) ? (arr_8 [i_2 - 1]) : 20789));
                            var_16 ^= ((((max(-1099478073341, -17523))) - ((min(var_1, -25988)))));
                        }
                        var_17 = (max(var_17, ((max((25988 == -31921), ((((max(var_1, var_0))) ? 4186707797 : ((((arr_4 [1]) & (arr_2 [i_2 - 2])))))))))));
                        var_18 *= (max((((((-(arr_5 [i_2 - 2] [i_3])))) ? (0 * -1) : var_2)), (arr_19 [i_1] [i_1] [i_1] [i_4] [i_1])));
                        var_19 = var_3;
                    }
                }
            }
            var_20 = (min((((86 <= -40) + ((max(0, 50484))))), 1));

            for (int i_6 = 3; i_6 < 8;i_6 += 1)
            {
                var_21 = (max(var_21, ((((arr_4 [i_1]) | (max(((max(var_3, 0))), var_9)))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_27 [i_1] [i_2] [i_6 + 1] [i_6 + 1] = ((-5452945489941902418 ? 17522 : 1099478073349));
                    var_22 = var_4;

                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        var_23 = 5273;
                        var_24 = ((((var_1 ? -4744 : 0)) < (arr_13 [i_7] [i_8])));
                        arr_31 [6] [i_2 - 1] [i_7] [i_7] [i_8 + 2] [i_6 - 1] [i_1] = 16790;
                        var_25 = (((((var_1 ? var_4 : (arr_23 [i_2 + 2] [i_7] [6])))) ? -var_7 : 4));
                    }
                }
                for (int i_9 = 4; i_9 < 9;i_9 += 1)
                {
                    arr_34 [i_1] [i_1] |= (arr_16 [i_1] [i_2] [i_1] [i_9 + 1] [5] [i_9]);
                    var_26 = var_6;
                    arr_35 [i_1] [i_2] [i_9] [i_6] = (((((((arr_14 [i_1] [i_2] [i_6] [i_9 - 4]) ? (arr_15 [i_2]) : 1))) ? ((var_9 ? 7475767538066055382 : (arr_23 [1] [i_6] [i_2 - 2]))) : (((min(229, 50500)))))) >> (min(((65535 ? 0 : 1)), ((min(0, 64))))));
                }
            }
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                arr_38 [i_1] [i_10] = (max(var_7, (((arr_13 [i_1] [i_2]) ? (48 - 1) : (arr_36 [i_2 - 2] [i_2 + 1] [i_10 + 1])))));
                arr_39 [i_10] [i_2] = 3464844300;
                var_27 ^= (max((arr_0 [i_10 + 1] [i_2 - 1]), (max(var_6, 335911642900169127))));
            }
        }
    }
    #pragma endscop
}
