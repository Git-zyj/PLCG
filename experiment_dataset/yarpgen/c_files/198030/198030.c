/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [7] [7] = ((((((arr_9 [i_3 - 2] [i_3 + 1] [1] [i_3] [i_3 - 2]) ? (arr_9 [i_3 - 2] [0] [i_0] [i_3] [i_1]) : var_13))) ? ((var_12 ? (arr_9 [i_3 - 1] [i_3] [1] [i_3] [i_2]) : (arr_9 [i_3 + 1] [i_3 + 1] [i_2] [i_3] [i_3]))) : (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_2])));
                        arr_12 [0] = (((-7651760181085950185 || 20173) ? ((((arr_9 [i_3 + 1] [10] [10] [10] [i_0]) ^ (arr_9 [i_3 - 2] [i_3] [17] [17] [i_3 + 1])))) : var_1));
                        arr_13 [6] [i_1] [10] [i_1] [i_1] [i_1] = (min(((108503983723116005 ? -30154 : 103571209)), (arr_7 [i_0])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((((((var_6 + var_8) ? 1 : var_6))) ? (max((var_3 & var_6), ((var_8 ? var_5 : var_0)))) : (max((arr_5 [i_0] [i_0]), var_1))));
                    }
                }
            }
            var_14 = (((((max((arr_10 [i_0]), var_11)))) | ((var_1 & (20269 | var_6)))));

            for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_15 = var_13;
                var_16 ^= var_7;
                arr_17 [i_0] [i_0] [i_0] = var_9;
            }
            for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_1] = (((-var_0 ^ 1) * (((max(1, 1))))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_17 = (max(var_17, var_1));

                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_18 = var_4;
                        var_19 = (max(var_19, var_11));
                        arr_28 [i_6] = (max((((arr_26 [i_5 + 1] [i_7 + 1] [i_6] [i_7 + 1] [i_5 + 1]) < var_11)), ((!((max((arr_19 [i_0] [i_1] [8] [i_7 + 1]), var_1)))))));
                    }
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_20 = (max(var_20, ((min((min(var_13, (arr_24 [14] [i_1] [i_5 - 2] [2] [i_0] [i_6]))), ((var_4 ^ (2471910922 ^ var_0))))))));
                        var_21 = var_10;
                    }
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_35 [i_0] [i_1] [15] [i_5 - 1] [i_6] [i_9] = ((((max(-1679463383037885332, (((arr_29 [3] [i_1] [i_1] [i_1] [i_9]) ? var_7 : -13441))))) - var_2));
                        var_22 ^= (min((max((((1 ? var_12 : (arr_24 [i_1] [i_1] [8] [i_6] [i_0] [i_9 + 1])))), 4237177391)), (~var_3)));
                    }
                    arr_36 [i_0] [i_0] [i_0] [18] [i_6] = (!var_12);
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    arr_39 [15] [i_10] = ((var_3 % ((((max(1, var_13))) ? (((var_2 ? -22964 : var_12))) : (var_13 % var_12)))));
                    arr_40 [i_0] |= (max((arr_25 [i_1] [i_5 + 1] [i_5 + 1] [i_5] [i_0] [i_5]), ((var_4 + (arr_25 [i_0] [i_5 - 2] [i_5] [i_10] [i_0] [i_0])))));
                }
            }
            for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
            {
                var_23 = -106;
                var_24 &= ((((!30164) ? 30155 : 30180)) % (arr_10 [15]));
                var_25 &= var_2;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_51 [14] [i_11] [i_11] [0] [i_13 + 1] [i_12] = (min(((max((arr_19 [i_11 + 2] [i_13 + 2] [i_13 - 1] [i_13 - 1]), 1))), (min(var_13, var_5))));
                            arr_52 [i_11] [i_1] [i_11] [i_12] [i_13] = (min((var_0 ^ var_7), (arr_32 [i_13] [i_13] [i_13 - 1] [i_13] [4] [4] [i_13 - 1])));
                        }
                    }
                }
            }
            var_26 = (max(var_26, var_8));
            arr_53 [i_0] = var_12;
        }
        var_27 = (min(var_27, var_2));
        arr_54 [i_0] &= var_4;
    }
    var_28 = (min(var_28, (((min(((var_0 ? 0 : var_10)), (var_4 <= var_3))) - ((max(var_11, var_5)))))));
    var_29 = var_0;
    #pragma endscop
}
