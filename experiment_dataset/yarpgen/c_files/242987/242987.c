/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_17 = (arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0] = (((var_15 & var_10) >> (2147483647 - 241)));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_18 = (max((((((20163 ^ (arr_3 [i_1 + 3])))) * 1050827778)), ((((((-884234554 + 2147483647) >> (50191 - 50186))) >> ((((min(var_12, (arr_3 [i_1 - 1])))) - 41898)))))));
        var_19 = ((-(max((arr_1 [i_1 + 3] [i_1 + 3]), var_0))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                {
                    var_20 = (max((min(var_14, (var_8 % var_10))), ((min(-93, (((!(arr_1 [i_1] [i_2])))))))));
                    var_21 -= (-1585873034190195601 && 1);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_22 = -19480;
                                arr_13 [i_4] = (var_7 & 195);
                                var_23 = (max(var_23, -85));
                                arr_14 [i_4] [11] [i_4] = (arr_6 [10] [i_3 - 4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                arr_21 [i_6] [i_6] [i_7] = (min((arr_8 [6] [10] [6]), ((((21432 ? (arr_8 [i_6] [1] [i_7]) : 20155)) % (0 < 4)))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_24 = 1585873034190195600;
                            var_25 = (2147483647 + 2180450533);

                            for (int i_10 = 0; i_10 < 13;i_10 += 1)
                            {
                                var_26 = 0;
                                var_27 = (max(var_27, (arr_19 [0] [i_7])));
                                var_28 = (min(((var_0 ^ (~var_16))), (min(((((arr_28 [i_10] [i_7] [i_6]) ^ -1))), (max(4095, (arr_18 [i_8] [i_7])))))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 13;i_11 += 1)
                            {
                                var_29 = ((!(arr_10 [i_7] [i_6] [i_8] [i_9] [i_11] [i_6])));
                                var_30 |= (1 * 852907610);
                            }
                            for (int i_12 = 0; i_12 < 13;i_12 += 1)
                            {
                                var_31 = arr_22 [2] [12] [1];
                                var_32 = ((48632 * (max(-1585873034190195601, var_14))));
                            }
                            for (int i_13 = 1; i_13 < 10;i_13 += 1)
                            {
                                var_33 = (((((max(-4096, var_3)) | (((max(-20156, var_11)))))) + (arr_33 [i_13] [i_9] [i_8] [0] [0])));
                                arr_35 [i_13] [i_7] [9] [7] [9] = ((((min(var_12, (arr_25 [i_13 + 2])))) && (arr_25 [i_13 + 2])));
                                var_34 += -85;
                                var_35 = (((((-2147483647 - 1) % var_10)) * var_10));
                                var_36 = (max(var_36, ((min(1145125164, 43307)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        {
                            arr_40 [10] [i_15] = (arr_3 [i_7]);
                            var_37 = ((var_13 ? 2544810705 : (min(65535, 1533847488))));
                            var_38 = (max(((-12 < (!65523))), (arr_32 [6] [4] [i_15 - 1] [7] [i_14] [1])));
                        }
                    }
                }
                var_39 = (~20153);
            }
        }
    }
    #pragma endscop
}
