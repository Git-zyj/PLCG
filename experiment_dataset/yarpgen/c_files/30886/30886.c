/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [7] = (((((var_1 + -550) >= (max(667766556598543411, (-9223372036854775807 - 1))))) || (((var_7 ? var_6 : var_3)))));
        var_10 = ((9223372036854775807 ? 9223372036854775807 : -105));
        arr_3 [i_0] [i_0] |= (min((((arr_1 [i_0]) || ((((((arr_0 [i_0]) + 9223372036854775807)) >> (((arr_1 [i_0]) + 596473754))))))), (((arr_0 [i_0]) || (((var_7 * (arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_11 = (min((max((arr_8 [2] [i_1] [i_1] [8]), 28672)), (var_6 != var_8)));
                        arr_12 [1] [i_1] [i_2] [11] |= ((var_3 / -531820084573085110) / -18);
                        var_12 = (((((var_8 != (arr_4 [i_3])))) != ((max(25, 17901)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_17 [i_4] = (var_2 | var_4);
                            arr_18 [i_4] [i_2] [11] [i_4] = (((arr_10 [i_4] [i_3] [i_2] [i_1]) ? var_3 : -6822737791080973935));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_13 = (((arr_8 [i_0] [i_1] [i_0] [i_3]) / (((arr_19 [i_0] [i_1] [13] [i_3] [5] [i_5]) % (arr_8 [i_3] [i_1] [i_2] [i_3])))));
                            var_14 -= ((6938416955415186237 != (55798 && 9223372036854775807)));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_15 = ((max((var_6 && var_3), (((arr_14 [i_6] [i_1] [1] [i_1] [i_1] [i_0]) ^ 105)))) != (((arr_5 [5] [0] [i_2]) & ((((arr_21 [i_2] [i_2] [i_2]) && var_4))))));
                            var_16 *= (1 & 9223372036854775806);
                        }
                    }
                }
            }
        }
    }
    var_17 = (((min(((((var_8 + 2147483647) >> (6822737791080973935 - 6822737791080973923)))), (max(var_5, var_0)))) - ((((var_9 <= (max(722048638, var_7))))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                arr_28 [i_7] [i_8] [11] = (((((((arr_8 [i_7] [i_7] [i_7] [i_7]) <= -65)))) * ((var_3 << (((arr_8 [i_7] [i_7] [i_7] [i_8]) - 7039480888486214278))))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_31 [i_7] [i_7] [i_9] = ((706960400232262959 <= (arr_9 [i_9] [i_8] [i_7])));
                    var_18 &= ((var_4 | (arr_8 [1] [i_7] [i_8] [i_9])));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_19 = (var_1 <= 1254);
                                var_20 = (((max((-494380165 < 107), (arr_0 [i_11]))) > var_4));
                            }
                        }
                    }
                    var_21 = (min((var_7 && var_3), (min(6822737791080973934, (arr_38 [6] [i_8] [i_8] [i_8] [i_8] [i_8])))));
                }
                arr_40 [i_7] [i_8] [i_8] = (min((max((arr_25 [i_7]), (4104668672372835090 % 1))), ((((arr_11 [12] [12] [i_7] [i_7] [12] [i_7]) % var_7)))));
            }
        }
    }
    var_22 = (254 ^ var_2);
    var_23 = (var_9 || ((((var_5 % var_7) << (3923308765978597374 != var_1)))));
    #pragma endscop
}
