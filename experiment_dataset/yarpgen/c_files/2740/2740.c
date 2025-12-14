/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (((((~(arr_3 [i_0] [i_0])))) ? ((~(arr_0 [i_0]))) : (arr_3 [i_0] [i_0])));
        var_20 = (((arr_2 [i_0]) ? 15900504580346347373 : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = ((!(arr_5 [i_1 + 1])));
            var_21 = (((arr_5 [i_1 - 2]) && 32767));
            var_22 *= (arr_9 [i_2]);
            var_23 = var_1;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_4] [i_5] = (arr_16 [9] [i_5] [i_5 - 1]);
                        arr_21 [7] [i_1] [17] [i_3] [i_4] [17] = ((-(arr_18 [i_5] [i_5] [i_1] [i_5 - 1] [i_5 - 1])));
                        arr_22 [i_1] [i_3] [1] [i_5] = (((((arr_5 [i_3]) << 20))) ? (arr_13 [i_1 + 1] [i_4 + 2]) : ((8188 ? var_16 : var_15)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_24 = ((-31340 + 2147483647) << (3967262322146179766 - 3967262322146179766));
        var_25 = (((arr_17 [i_6] [i_6] [i_6]) * (arr_7 [i_6] [i_6] [i_6])));
        var_26 &= (((arr_2 [i_6]) >= (arr_2 [i_6])));
    }
    var_27 = var_15;
    var_28 += (((~var_11) ? var_7 : ((((!(((var_15 ? 32767 : 7073768655962905859)))))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_8] [2] [10] [i_7] [8] = ((var_1 ? ((((((arr_23 [i_7] [i_8]) ? (arr_8 [i_8]) : 32032))) / (max(var_10, (arr_38 [i_7] [8] [i_7] [i_8] [8]))))) : 254));
                                var_29 = ((513643433 << (-16543 + 16557)));
                                var_30 = (min(((((arr_19 [i_7] [i_8] [i_9]) ? -36 : var_2))), 4586404117249331739));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_45 [8] [i_12] [i_9] [i_8] [i_8] [i_8] [i_7] = (~(arr_16 [i_8 - 3] [i_8 + 4] [i_8 + 2]));
                                var_31 = (4503565267632128 & 0);
                            }
                        }
                    }
                    var_32 = ((var_3 ? var_10 : (arr_33 [i_7] [i_8 + 3] [i_8 + 3] [i_8])));
                    arr_46 [i_9] [i_8] = (((48 ? var_17 : (arr_30 [i_8] [4] [i_8]))));
                }
            }
        }
    }
    #pragma endscop
}
