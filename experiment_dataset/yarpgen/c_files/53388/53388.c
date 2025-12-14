/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (0 == 22);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, 3944166118));
                            var_13 = (max(var_13, (((((min((arr_3 [i_2] [i_0 + 1]), 2147483647))) ? ((-(((arr_1 [i_0]) - (arr_6 [i_0] [i_0] [i_2]))))) : (arr_9 [6] [6] [i_2] [2]))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_14 ^= 17683967391539827392;
                                var_15 = 767589108;
                                arr_19 [i_1] [i_1] = (arr_6 [0] [i_1] [i_1]);
                                arr_20 [i_0] [5] [7] [i_1] = (((-7905279334724433434 ? ((arr_5 [i_0] [i_4] [3] [i_6]) : (3200560780 == -976251785)))));
                                arr_21 [i_0] [i_1] [i_4] [i_1] [i_4] [i_6] [i_6] = (var_2 * 0);
                            }
                        }
                    }
                    var_16 = -1749246710;

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        arr_24 [i_4] [7] [i_4] [2] [2] [i_1] = (arr_4 [i_1] [i_4] [8] [i_1]);
                        var_17 = ((1341339172 ? (2121806473 - var_4) : var_0));
                        arr_25 [i_1] [7] [3] [i_1] = (12700778606236745842 - 18446744073709551615);
                        var_18 = (min(var_18, ((((arr_2 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 2]))))));
                        var_19 |= ((7 <= (((var_3 >= (arr_14 [1] [i_1] [i_1]))))));
                    }
                    var_20 = (max((arr_0 [i_0 + 1]), (((arr_15 [i_0] [i_0] [3] [5] [i_0] [1] [7]) / (((((arr_12 [i_1] [i_1]) != (arr_15 [5] [i_0] [i_0] [6] [i_4] [i_4] [i_0])))))))));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    arr_29 [i_0] [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_8] [i_1]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_21 = (((arr_10 [i_0] [i_0 - 1] [i_0] [i_8 - 2]) == (arr_10 [7] [i_0 + 1] [5] [i_8 + 1])));
                                var_22 = 6893486683568148199;
                                arr_35 [i_0] [i_1] [i_8] [i_9] [i_0] = (((arr_4 [i_1] [i_1] [i_1] [i_10]) == (((arr_17 [9] [9]) ? 12839521619917470753 : var_9))));
                            }
                        }
                    }
                    arr_36 [i_1] = (var_10 - var_2);
                }
                arr_37 [i_1] = (-1804424977 / -525933852);
            }
        }
    }
    var_23 -= var_3;
    var_24 = (~2044);

    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_40 [i_11] [4] = max(((((arr_38 [i_11] [3]) >= -109))), (((arr_38 [i_11] [9]) ? (arr_39 [i_11] [i_11]) : 11977026407662185969)));
        arr_41 [i_11] [i_11] = ((2431292881 >> ((((-(((arr_39 [i_11] [12]) ^ -1780061602841416566)))) + 1780061602841416520))));
        arr_42 [i_11] [i_11] = 3853334955;
        arr_43 [i_11] = ((-(max((arr_38 [i_11] [i_11]), (arr_38 [i_11] [i_11])))));
    }
    #pragma endscop
}
