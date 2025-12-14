/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_3, 4254711841));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((~((~(arr_1 [i_0] [12])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [14] [14] [14] [i_0] |= (arr_8 [16] [i_2] [i_3 + 2] [1] [i_3 + 4] [i_3]);
                        arr_12 [i_3] [8] [i_0] [i_2] = var_8;
                        var_14 = (+(min(0, ((((((arr_2 [i_0]) + 2147483647)) >> (arr_7 [i_2] [10] [i_1] [i_2])))))));
                        var_15 ^= (((-2758207533630504233 + 9223372036854775807) << (1 - 1)));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [0] [i_3 + 1] = -1;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_16 = ((4294967295 && (arr_1 [i_4] [4])));
                        var_17 = (((arr_4 [i_0] [i_2] [i_4]) * ((((!(-2147483647 - 1)))))));
                        arr_18 [i_2] [12] [i_2] = (arr_10 [i_2] [i_4] [i_1] [i_1] [i_1] [i_2]);

                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_21 [2] [i_2] [7] [i_1] [i_1] [i_2] [i_0] = ((((!(arr_8 [3] [5] [1] [i_2] [15] [i_0]))) ? ((var_8 - (arr_1 [i_0] [i_5]))) : (arr_1 [i_2] [i_4])));
                            var_18 = (+((((arr_19 [i_0] [0] [i_2] [1] [15]) && 5738530270347732377))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_4] [i_4] = ((arr_22 [i_2] [i_2]) ? (arr_22 [i_2] [i_4]) : (arr_22 [i_2] [i_2]));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [16] &= (arr_1 [i_6] [i_0]);
                            var_19 += (((((1 ? (arr_0 [i_2]) : (arr_23 [i_0])))) ? (arr_7 [i_4] [i_4] [i_0] [i_4]) : (arr_14 [13] [13] [13] [1] [12] [13])));
                            arr_26 [i_0] [i_2] [i_2] = var_10;
                        }
                        var_20 = (((arr_6 [i_4] [i_1] [i_1] [9]) * (arr_23 [i_4])));
                    }
                    var_21 = (arr_1 [i_2] [i_0]);
                    arr_27 [i_2] [i_1] [i_2] = (arr_23 [i_1]);
                    var_22 ^= (arr_2 [i_2]);
                    var_23 = 96890067;
                }
            }
        }
        arr_28 [i_0] = (max(((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0] [i_0])))), (((((37673 ? -6659 : 0))) ? var_11 : (((-2147483647 - 1) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_20 [6] [8] [4] [4] [i_0] [14])))))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_24 = ((~((12 ? (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : -1))));
        arr_32 [i_7] [i_7] = ((2147483647 ? (((((arr_23 [i_7]) & 6315832959722575497)) >> ((var_11 ? (arr_2 [i_7]) : (arr_17 [i_7] [i_7] [i_7]))))) : (var_2 || -1)));
    }
    var_25 |= ((~(~var_3)));
    #pragma endscop
}
