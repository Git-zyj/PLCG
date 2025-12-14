/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -7714907632416703998;
    var_17 = (var_15 ? ((var_13 << (((~var_8) - 2298905200655574716)))) : var_14);
    var_18 = min(((((16751402891087246570 ? 1 : 5956496377045490740)) * (var_11 / var_8))), ((min(var_7, var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = arr_3 [i_0];
                    var_20 ^= (((arr_5 [i_2 - 3] [18] [i_2 - 1] [i_2 - 1]) ? (-var_4 + var_1) : ((-(max(var_1, (arr_3 [1])))))));

                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        var_21 ^= var_12;
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (max(-5956496377045490740, 11316435285303483127));
                        arr_10 [i_3] [i_0] [i_2 - 3] [17] = arr_7 [i_0];
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_17 [i_2] [i_2] [i_2 - 1] [i_0] [9] = (min((min((arr_3 [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))), var_1));
                            var_22 = (min(var_22, (((-5956496377045490740 ? 0 : 34859)))));
                            var_23 ^= (arr_1 [i_2 - 3]);
                            arr_18 [i_0] [i_0] [i_0] [6] [i_5] [i_5] = ((~(((255 < ((min(16376, 0))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_24 ^= (((arr_15 [i_0] [i_4] [i_2] [i_6 - 1] [i_6]) / (arr_11 [i_6] [i_6] [i_4] [i_6] [i_4])));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] = (((arr_5 [i_0] [i_0] [i_2] [i_4]) && (((var_1 ? 16514968264962111517 : var_14)))));
                        }
                        for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_25 = (max((((((var_7 ? (arr_24 [i_0] [i_0] [i_0] [16]) : var_4))) ? 16552 : (((arr_15 [1] [i_0] [i_2] [i_0] [6]) ? -5956496377045490740 : 1)))), -var_8));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_0] [i_7] = ((var_11 ? (((var_14 ? var_11 : var_15))) : (var_5 <= var_13)));
                            arr_26 [i_0] [i_0] [i_0] [i_4] [i_7 - 1] = arr_2 [i_0] [i_1];
                        }
                        arr_27 [i_0] [i_1 - 2] [i_2] [i_4] [i_4] = ((arr_14 [i_0] [i_0] [i_0] [i_2 - 2] [i_2] [i_4] [i_4]) ? ((((!((min((arr_0 [i_4]), -16377))))))) : (min((arr_8 [i_1 - 2] [i_0] [i_4] [i_2] [i_1 - 2] [i_0]), (((var_8 % (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_28 [i_0] [i_0] [i_2] [i_0] = min(-5956496377045490766, 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
