/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_2 >> var_2) < -1830882365));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = max(-25, (((arr_1 [i_0]) ? -20230 : var_0)));
                arr_7 [i_0] [i_0] = max(((+(((arr_4 [i_0] [i_1]) ? (arr_0 [i_0]) : var_5)))), ((((((1830882389 ? 41762 : 253))) ? (arr_1 [i_1]) : var_11))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] = (arr_3 [3]);
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((-1740097227 ? ((1226935771662383881 ? 111 : 255)) : (~1830882364)));
                    var_16 = (((arr_9 [2] [i_1] [i_0]) ? (((arr_8 [i_1]) ? (arr_2 [i_0] [i_0]) : 855513771192038101)) : (1 && 2454869669453163892)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_17 = (arr_22 [i_0] [i_1]);
                            arr_23 [i_0] [i_0] = var_8;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_18 = (((((934506544 ? (arr_1 [i_3]) : 1830882378))) && ((((arr_18 [i_0] [i_1] [i_3] [i_3] [i_0]) / 1252009514)))));
                            arr_26 [i_0] [i_0] [i_3] [0] [i_3] [i_3] = ((~(arr_8 [i_1])));
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [9] = (arr_14 [i_0] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] = (-((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0]) > var_2))));
                            var_19 = (((arr_24 [0] [i_1] [i_1] [i_1] [i_7] [i_7] [i_0]) ? -905960241 : (arr_25 [i_0] [i_1] [i_7] [i_4] [i_1])));
                        }
                        arr_31 [1] [0] |= 934506538;
                        arr_32 [i_0] [i_3] = (arr_21 [i_1]);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_20 = (arr_35 [i_0] [i_0] [i_0] [i_0]);
                        var_21 = (i_0 % 2 == zero) ? ((+(((arr_22 [i_1] [i_8]) >> (((arr_4 [i_0] [i_0]) + 1658)))))) : ((+(((arr_22 [i_1] [i_8]) >> (((((arr_4 [i_0] [i_0]) + 1658)) + 13589))))));
                        var_22 = (((arr_17 [i_0]) < (arr_17 [i_0])));
                    }
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_1] [i_1] [i_3] [i_0] = 1671170989;
                        var_23 -= ((arr_18 [i_9 + 2] [i_9] [i_9] [i_9 + 2] [6]) >> (1893834276 + 25080));
                    }
                    for (int i_10 = 4; i_10 < 7;i_10 += 1)
                    {
                        arr_43 [i_0] [i_0] [i_3] [i_0] = 17219808302047167759;
                        var_24 = (22 && 118);
                        var_25 = var_3;
                        var_26 ^= -1789824913;
                    }
                    var_27 -= 255;
                }
                var_28 = ((!(arr_4 [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 8;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    var_29 -= -19686;
                    var_30 = 934506525;
                    arr_52 [i_11] [i_12] [i_13] [i_13] = arr_50 [i_11] [1] [i_11];
                }
            }
        }
    }
    var_31 = -15424;
    #pragma endscop
}
