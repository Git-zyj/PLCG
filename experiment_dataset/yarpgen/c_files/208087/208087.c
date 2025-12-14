/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = 65525;
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((~(max(1, ((918561761 ? (arr_4 [20] [0]) : var_2))))));
                    var_16 = (max(var_16, -918561762));
                    var_17 = (arr_6 [12] [i_1] [19] [8]);
                }
            }
        }
    }
    var_18 = ((((((max(var_15, var_6))) - (65535 || var_2))) / (((!(-9223372036854775807 - 1))))));
    var_19 *= (max((max((((var_2 ? var_1 : var_12))), (min(918561766, var_5)))), ((max(var_13, -918561778)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] [i_4] = (min((min(-918561753, (arr_2 [i_3]))), (min((var_2 | var_10), var_11))));

                for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] |= min((((!((((arr_18 [10] [i_6] [i_5]) ? var_2 : -918561778)))))), (arr_6 [i_3] [i_3] [i_6] [i_6]));
                            arr_26 [1] [i_4] = (min(0, 0));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_20 ^= 0;
                            var_21 ^= ((((((-3123920238905583608 % (arr_11 [i_5 - 1]))) == (((var_8 ? var_9 : (arr_7 [16] [11] [i_3])))))) ? ((((var_14 - var_11) ? (max((-32767 - 1), var_9)) : var_12))) : -65535));
                            arr_29 [i_3 + 3] [8] [i_4] [8] [i_8] [i_6] = ((-5313087579618831329 ? 36341 : (min(-918561767, 19184))));
                        }
                        arr_30 [i_5] [i_5 - 4] [i_4] [i_5] &= (((((((-(arr_24 [i_6] [i_5] [4] [i_4] [i_5] [i_3]))) == ((max((arr_14 [i_3] [7] [1]), (arr_28 [5] [i_6] [i_6] [7] [1] [7]))))))) > (-918561778 > 4291867627050784673)));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_22 = (max(((((max(-918561767, var_4))) ? ((min(var_15, var_13))) : (arr_19 [i_3] [i_3] [i_3] [i_9]))), (max(((-(arr_32 [i_5] [i_4] [i_5] [i_9] [12]))), 112))));
                                arr_36 [i_4] [i_4] [i_5] = (918561766 ? 35 : 35);
                            }
                        }
                    }
                    arr_37 [11] [i_4] [i_5] [11] = (max(var_10, ((((arr_19 [i_4] [i_4] [i_4] [i_4]) / var_2)))));
                    arr_38 [i_4] = (~1);
                }
                for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_11] [14] &= var_13;
                    var_23 = var_6;
                    arr_42 [i_4] = 1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                arr_47 [i_13] = (((arr_21 [i_12] [7]) ? 18446744073709551615 : (min(65535, 598413485364841408))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_24 &= (arr_7 [i_12] [i_12] [i_15 - 1]);
                            var_25 = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
