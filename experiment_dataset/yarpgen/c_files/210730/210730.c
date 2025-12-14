/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (57344 ? 0 : -74);
    var_14 = (max(((~(max(15509476977474874694, var_8)))), var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_15 = (arr_2 [i_0] [5]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((-(arr_6 [6] [i_1] [1]))) ^ (~var_3)));
                    var_16 = (min(var_16, (arr_7 [i_0])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_17 = (((arr_1 [i_3]) ? (arr_11 [i_3] [i_4]) : ((2937267096234676939 ? 42195 : 2937267096234676905))));
                        var_18 = var_8;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_3] [8] [i_3] = (arr_14 [i_3] [i_4]);

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_30 [i_3] [8] [i_5] [10] [i_8] [9] [1] = (((arr_23 [i_5 + 2] [2] [i_5 + 2] [i_5 + 1]) ? var_1 : var_7));
                            arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((-(arr_5 [i_3] [i_4] [i_3]))));
                            var_19 &= var_4;
                            arr_32 [i_3] [i_4] [i_5 + 4] [i_7] [i_3] [12] = 93;
                        }
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            var_20 = var_3;
                            arr_37 [i_3] [i_4] [i_5] [i_9] [i_4] = (max((arr_12 [7]), (((134217727 ? 1 : -31338)))));
                            var_21 = (min((max(var_0, (min(var_9, var_2)))), (arr_25 [i_3] [i_3] [10] [i_3] [i_3])));
                            var_22 = var_11;
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_40 [i_3] [i_3] [i_5] [i_5] [i_5] [i_3] = -1775361278;
                        var_23 |= (((((var_11 ? (arr_25 [i_3] [i_4] [i_5 + 1] [3] [8]) : 65535))) ? 62 : (((!(arr_4 [i_3]))))));
                        var_24 = (((arr_33 [5] [i_4] [8] [8]) ? (arr_6 [i_3] [9] [12]) : 1));
                        var_25 ^= (arr_13 [i_5 - 1] [i_10]);
                    }
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_26 = (arr_16 [i_11] [1] [i_3]);
                        var_27 = (arr_34 [i_3] [i_4] [7] [0] [i_11] [i_11]);
                        arr_43 [i_5] [i_4] [i_3] = ((~(max(15509476977474874672, var_8))));
                        arr_44 [1] [1] [i_5 + 3] [i_5] [1] [i_5 + 1] = (arr_4 [i_3]);
                        var_28 = (max(var_28, (arr_17 [i_3] [i_4] [4] [3])));
                    }
                    var_29 = (arr_10 [i_4]);
                }
            }
        }
        var_30 *= (max((min((~var_1), var_3)), ((-(~var_1)))));
        arr_45 [i_3] = var_11;
    }
    var_31 = (~var_9);
    #pragma endscop
}
