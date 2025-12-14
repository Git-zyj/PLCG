/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_6));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((((((var_5 / (arr_1 [i_0 + 2] [i_0 - 2])))) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_13 = ((((((arr_6 [i_0 + 2]) ? (arr_0 [i_1 - 1]) : var_2))) ? ((((arr_2 [i_0] [0]) > (arr_5 [i_3] [i_1] [i_0 - 2])))) : ((~((916350453 ? 11003 : 3))))));
                        var_14 -= (arr_5 [i_3] [i_2] [i_1]);
                        var_15 = ((~(~var_4)));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_16 -= (((((var_4 ? (arr_6 [i_0 - 2]) : (arr_6 [i_0 + 1])))) ? var_2 : var_10));
                        var_17 = 84;
                        var_18 = ((((min((~var_3), 210))) ? var_3 : ((223522865 << (223522865 - 223522865)))));
                        var_19 = (min(var_19, var_1));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_20 = (((((arr_7 [10] [i_5] [i_5] [i_0 + 2]) ? (((221 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0])))) : ((385722576 ? (arr_7 [i_0 - 1] [i_5] [0] [i_5 - 1]) : (arr_8 [i_0] [i_1] [i_2] [i_5]))))) <= ((((min(var_3, (arr_11 [i_0] [i_1] [i_1] [i_2] [4])))) ? 385722600 : (arr_2 [i_1 + 1] [i_5 + 1])))));
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_5] [i_5] = (((arr_12 [i_0] [i_0] [i_0] [i_5]) ? (((~((max(var_10, (arr_3 [i_1] [7] [i_1]))))))) : ((~(arr_2 [i_1] [i_2])))));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_18 [i_6] [i_6] [i_6] [i_6] [7] [i_0] = (arr_7 [i_0] [i_6] [i_2] [i_6]);

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_21 = (((arr_14 [i_6] [i_0 + 1]) ? (arr_7 [i_2 + 1] [i_6] [i_6] [i_1]) : (arr_14 [i_6] [i_0 + 1])));
                            var_22 = (((((0 ? -223522865 : 0))) ? 1 : 46));
                            var_23 = (min(var_23, var_9));
                        }
                        arr_21 [i_0] [i_6] = (arr_3 [i_1] [i_1 + 1] [i_1 - 1]);
                        var_24 = ((-var_10 ? (var_2 ^ 214) : 13822));
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_25 = 0;
                        arr_24 [i_8] [i_8] [i_2] [6] [i_8] = (arr_14 [i_8] [7]);
                        arr_25 [i_0 - 2] [i_8] [i_0 - 2] [i_8 - 3] = (~var_4);
                        var_26 = (min(var_26, (((arr_9 [i_0] [i_1] [i_2] [2] [i_2]) ? -var_2 : (min((((255 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [6]) : 223522888))), ((-(arr_8 [8] [i_2] [i_1] [8])))))))));
                        var_27 ^= (((max((arr_0 [i_8 - 2]), (arr_3 [i_0] [i_2] [i_8]))) <= (((((arr_11 [i_0] [i_8 - 2] [0] [i_2 - 1] [i_0]) >= (~var_3)))))));
                    }
                    var_28 = (min(var_28, (((1 ? (max(var_8, (((arr_19 [i_0] [i_0 + 1] [i_1 - 1] [i_2] [i_2]) ? (arr_8 [i_2] [i_1] [i_1] [i_0 - 1]) : 4442)))) : ((((arr_5 [i_2 + 2] [i_0 - 2] [i_0 + 1]) >> (((arr_14 [i_1] [i_1 - 2]) - 1775))))))))));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
    {
        arr_28 [i_9] = var_9;
        arr_29 [10] |= ((((((arr_5 [4] [i_9] [4]) ? (((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9]) >> (59019 - 58999))) : -65523))) ? (arr_4 [i_9] [i_9] [i_9] [i_9]) : (arr_8 [2] [i_9 + 1] [2] [i_9])));
    }
    #pragma endscop
}
