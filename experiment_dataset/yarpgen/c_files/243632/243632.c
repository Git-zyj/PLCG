/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (arr_4 [i_1 + 3] [i_1] [i_1] [i_1 + 1]);
                    arr_7 [1] [1] &= (min((((!((max(1741507176914105469, var_6)))))), (~var_5)));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_22 = (min(var_22, (((((((((var_4 ? var_2 : var_13))) ? (max(var_16, var_9)) : var_14))) ? ((~((var_11 ? 1 : var_15)))) : (((((arr_0 [1] [i_1 + 4]) != 1)))))))));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_23 = (1581633103 || 5712178731079043559);
                            arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_0] = (~(((min(var_13, 1)) ^ (((arr_3 [i_0] [i_0] [i_2]) >> 1)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_24 = var_18;
                            arr_15 [i_0 + 1] [i_0 + 1] [1] [1] [i_1 + 1] [i_3 + 1] [i_0] = (((var_5 ? var_4 : var_10)));
                            var_25 = ((!(arr_9 [i_3 + 1] [i_1 + 1] [i_0] [i_3 + 1])));
                        }
                        arr_16 [i_0] [i_1] [i_2] = (min(var_18, (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_26 = ((((max(1, 220))) ? ((((arr_5 [i_2] [i_1 + 3]) || 93))) : (arr_8 [i_1 - 1] [i_1] [i_2] [i_0])));
                        var_27 = ((-var_5 ? 7 : ((~(arr_9 [i_6 - 1] [i_6 - 1] [i_0] [i_6 - 1])))));
                        arr_19 [i_0] [i_0] = ((!((min((~var_2), (!var_15))))));
                        var_28 = (max(((-0 ? ((min((arr_17 [3] [i_6] [i_6] [3] [i_6 - 1] [i_6 - 1]), (arr_1 [i_0])))) : ((var_1 ? var_14 : 126)))), -31090));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_23 [i_7] [i_0] = ((-((var_10 ? (arr_20 [7] [7] [i_0 + 1] [i_6] [i_0 + 1] [i_1]) : var_1))));
                            var_29 = ((var_0 << (var_6 - 1838899515694101303)));
                            var_30 ^= ((~(arr_5 [i_0 + 1] [i_0 - 1])));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_26 [i_8] [i_0] [i_2] [i_0] [i_0] = var_18;
                            arr_27 [i_8] [i_0] [i_0] = (min(((max(0, var_0))), ((((!62) && ((min(1, 13606249143592005625))))))));
                        }
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        var_31 = ((((((arr_3 [i_9 - 1] [i_1 + 1] [i_0 + 1]) ? 4267586349 : var_13))) / (arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                        arr_31 [i_0] [i_0] [i_0 + 1] [i_9] |= var_17;
                    }
                }
            }
        }
    }
    var_32 = (~62);
    var_33 *= var_11;
    var_34 = (var_1 ? var_7 : (max(13544211541807117333, 1)));
    #pragma endscop
}
