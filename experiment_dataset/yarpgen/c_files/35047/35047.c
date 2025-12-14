/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = 3020374675;
    var_18 = ((var_2 ? var_2 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = 5985002159615745951;
                                arr_13 [i_0] [i_0] = (max((arr_8 [i_4] [i_4 - 1] [i_4] [i_4 + 1]), (((arr_4 [i_0] [i_4 + 2]) ? (arr_12 [i_0] [i_3 - 3] [11] [i_0]) : (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4 + 1])))));
                                var_20 += 1;
                                var_21 += (((~1274592600) ? (((!(arr_10 [i_0] [10] [i_1] [i_2] [i_3] [4])))) : ((max(var_3, (arr_6 [i_3 - 1] [i_4 + 2] [i_2] [i_0 + 2]))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_16 [i_0] [4] [i_1] |= ((max((arr_8 [i_0] [i_1] [i_5 - 1] [i_0 + 3]), 60)));
                        var_22 += (max((((1 ? ((max((arr_0 [i_1]), var_12))) : 1))), 1274592645));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_5 - 1] [5] = var_4;
                            arr_21 [i_1] [i_1] [i_0] [11] [i_6 + 1] = var_4;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 += ((+((~((var_4 ? (arr_2 [1]) : 29))))));
                            var_24 = (max(((-723411198 ? (arr_3 [i_1]) : (var_0 > var_1))), (((!((max(var_4, 3571556102))))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = ((((((((127 ? 133 : -6790412955706290412)) <= (arr_15 [i_8] [i_0] [i_0] [i_0 + 2]))))) % var_9));
                        var_26 = (((arr_5 [i_0] [i_2]) >> ((((~(max(39189, 5985002159615745951)))) - 12461741914093805653))));
                        var_27 = (min(var_27, var_12));
                    }
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        var_28 = -2450929437491151598;

                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_2] [i_9] [i_10] = (1 ? 1 : -20860523704371784);
                            var_29 |= 1;
                        }
                        for (int i_11 = 4; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_30 = (~3020374675);
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_9 - 1] [i_11] [i_0] = (((arr_5 [i_0 - 1] [i_0 - 1]) > (((!(arr_4 [i_0] [i_0]))))));
                            var_31 ^= var_3;
                        }
                        for (int i_12 = 4; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_9] [i_9 + 1] = (arr_6 [i_9] [i_1] [i_2] [i_9]);
                            arr_40 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] = 39196;
                            arr_41 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((arr_25 [i_0 + 2] [i_0 + 3] [i_9 - 3] [i_9 - 3] [i_12 - 4] [10]) - (arr_25 [i_0 + 1] [i_0 + 2] [i_9 + 2] [1] [i_12 - 4] [i_12 + 1]))));
                            var_32 = var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
