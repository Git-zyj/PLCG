/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = ((min(var_10, (arr_4 [i_0 - 4] [i_0]))));
                    arr_7 [i_2] [i_1 + 3] [i_0] = 1;
                    var_15 = (min(var_15, (((min((((arr_0 [i_0]) | (arr_0 [12]))), ((min(54050, 0)))))))));
                }
            }
        }

        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            var_16 = (max(var_16, (arr_0 [i_3])));
            var_17 = (arr_6 [i_0] [i_0] [i_3] [i_3 + 2]);
            arr_10 [i_3] [i_3 - 2] [i_3] = ((((max((arr_5 [i_0 + 1]), (arr_5 [i_0 + 2])))) ? (min((max(511, 7997810669994203021)), (-1 / 1))) : (((arr_2 [i_0 + 2] [i_3] [i_3 + 2]) + (arr_5 [i_3 - 4])))));
            arr_11 [i_0] [i_3] = (((-(~var_6))));
            var_18 = (max(var_18, (arr_1 [i_3])));
        }
        var_19 = min((min(var_1, (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (arr_2 [i_0 - 2] [i_0 - 2] [i_0]));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_29 [i_4] [i_4] [0] [i_8] [i_5] = (((((arr_18 [i_4] [i_6 + 1] [i_8 - 1]) > 57944)) ? (max((((!(arr_15 [i_6 + 1])))), (min((arr_20 [i_6]), var_10)))) : (((((arr_8 [i_6] [i_5 - 1] [i_5]) < 63033))))));
                                arr_30 [i_5] [i_5] [i_6] [i_7] [i_8] = (min((((arr_4 [i_5 - 1] [i_8 + 1]) ? 65024 : (arr_4 [i_5 - 1] [i_8 - 1]))), (((arr_4 [i_5 - 1] [i_8 - 1]) ? (arr_4 [i_5 + 1] [i_8 - 1]) : 14970))));
                                arr_31 [i_8] [i_5] [i_6 + 2] [i_4] [i_5] [i_4] = ((~((-2281619766242405230 ? 65535 : 35612))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_40 [i_5] [i_5] [4] = (((((-(arr_3 [i_5 + 1] [i_11 + 1])))) ? (((!((min(21982, 65535)))))) : (((((36727 ? 1 : 31613))) ? -553123387 : (arr_0 [i_4])))));
                                var_20 = (min(var_20, ((((((1 ? 3 : (~var_7)))) ? ((5237687581938113305 ? 10982 : -5237687581938113307)) : ((((var_0 < (var_4 != var_5))))))))));
                            }
                        }
                    }
                }
                var_21 = (~-5237687581938113306);
                var_22 *= (((((!(arr_3 [i_4] [i_5])))) <= 19996));
            }
        }
    }
    var_23 = ((-((((var_6 ? var_7 : var_6)) + var_0))));
    #pragma endscop
}
