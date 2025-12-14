/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max((~var_15), (~var_6)));
    var_18 = (max(var_18, (((~(min(var_8, (min(54890, var_12)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (~var_13);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = var_16;
                                arr_14 [i_1] [i_1] = ((-(arr_12 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_0])));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] [i_3 + 2] [i_2] = (~10646);
                                arr_16 [i_1] [i_3] [i_2] [i_1] = (min((min(-28289, 2089263274)), ((max(var_1, (arr_8 [i_1] [i_1] [i_1 + 2]))))));
                            }
                        }
                    }
                    arr_17 [i_1] = ((((((54878 ? (arr_6 [i_0] [i_0]) : (arr_12 [i_2] [i_0] [5] [7] [i_1] [i_0])))) ? (!var_4) : (~var_7))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = ((-(arr_6 [i_1 - 1] [i_1 + 2])));
                        var_20 ^= ((-(arr_13 [i_0] [2] [i_2] [i_2] [24] [i_5])));
                        var_21 = var_1;
                        var_22 = ((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 3]) ^ (arr_8 [i_5] [i_1] [i_1 - 1]));
                        arr_21 [i_5] [i_1] [i_1] [i_0] = var_6;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_23 = (min(var_23, ((((!-2081500027) - (((((var_13 ? 10651 : (arr_23 [i_0] [10] [i_2] [i_6])))) ? (max(-113, var_10)) : (((max((arr_7 [i_1 + 1] [i_0] [i_6]), var_3)))))))))));
                        var_24 += (arr_0 [i_2]);
                        var_25 = (min((max(2081500010, (~54895))), ((min((arr_4 [i_1 + 3] [i_1 + 2]), (arr_4 [i_1 + 3] [i_1 + 2]))))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (max(-var_15, (arr_13 [1] [i_1 + 3] [i_2] [i_6] [i_7] [i_0])));
                            var_27 -= (!var_1);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_30 [i_1] [18] [17] [1] [i_1 + 2] [i_1] [i_1] = (arr_24 [15] [i_6] [i_2] [i_1]);
                            var_28 = 54877;
                            var_29 = 1096;
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_30 &= ((~(max(var_1, (-28301 || -6324)))));
                            var_31 = ((var_16 ? ((max((arr_28 [i_2]), (max(var_6, (arr_32 [i_0] [i_0] [i_2] [i_2] [21] [i_1] [i_9])))))) : var_12));
                        }
                        var_32 -= (min((var_10 + var_5), (min(-287, (arr_19 [i_1 + 1] [i_1] [18] [i_1] [i_0])))));
                    }
                }
            }
        }
    }
    var_33 ^= ((54906 * (!var_16)));
    #pragma endscop
}
