/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((3 ? var_4 : (((((var_14 ? var_5 : -3)))))));
    var_17 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 ^= 0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] [i_4 - 3] [i_0] = ((((max(1, (arr_0 [i_0 - 2] [i_1 - 1])))) ? ((~(arr_0 [i_2] [i_4 - 3]))) : ((min((arr_0 [i_0 + 2] [i_1 + 1]), (arr_0 [i_0 - 2] [i_4]))))));
                                arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((arr_8 [i_0] [i_1 - 1] [i_3] [i_4]) ? (!var_9) : (((-2147483647 - 1) ? (arr_4 [i_0] [i_2] [i_3]) : 255)))));
                                arr_13 [i_0] = (((((arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_2] [i_3] [i_0 + 2]) ? ((max((arr_9 [7]), (arr_3 [i_4])))) : (arr_6 [i_0 + 3]))) / ((((arr_3 [i_4 + 1]) ? -4 : (arr_3 [i_4 - 3]))))));
                            }
                        }
                    }
                }
                arr_14 [0] |= ((12 ? (min(var_13, (max((arr_4 [i_0] [i_1] [i_1 + 1]), var_8)))) : (((max(62944, 1))))));

                /* vectorizable */
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    var_19 = var_4;
                    var_20 = 117179343;
                    var_21 = ((-1 ? (arr_4 [i_0 - 1] [i_0 + 3] [1]) : ((-(arr_1 [i_5 + 1])))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_22 &= (~8830064753960359296);
                                var_23 = (((((((arr_31 [i_8]) ^ -1456646554))) || (((var_12 ? (arr_9 [i_7]) : var_13))))));
                                arr_34 [i_10] [i_9 - 1] [i_7 + 2] [i_7 + 2] [i_6] [i_6] = 768081919;
                            }
                        }
                    }
                    var_24 = var_6;
                    arr_35 [i_6] [i_7] [i_8] = (~-1456646554);
                    var_25 ^= 1;
                }
            }
        }
        var_26 = max(((var_6 ? 3 : (~var_7))), ((max((((-117179343 + 2147483647) << (((arr_23 [1] [1] [i_6]) - 1334615323)))), (arr_4 [i_6] [i_6] [i_6])))));
    }
    for (int i_11 = 2; i_11 < 13;i_11 += 1)
    {
        var_27 = (((((0 > -413964630) >= (~0))) ? (((max(var_12, (((-2147483647 - 1) || (arr_1 [i_11 - 2]))))))) : (((((14239072546425379068 ? 0 : 3758096384))) ? (((arr_6 [i_11]) * (arr_7 [i_11] [i_11] [i_11] [i_11] [i_11 - 1] [i_11]))) : (((arr_3 [i_11]) ? 64 : var_10))))));
        var_28 = (((((1 ? var_11 : (arr_5 [i_11] [i_11])))) + var_13));
        var_29 = (arr_15 [1] [i_11 - 2] [i_11]);
    }
    #pragma endscop
}
