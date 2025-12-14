/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [6] &= (max((arr_3 [12] [12]), (((arr_3 [10] [i_0 - 1]) + (arr_3 [12] [i_0 - 1])))));
        var_21 = ((((arr_2 [i_0 - 1]) || (arr_2 [i_0 + 1]))));
        arr_5 [i_0 + 1] [i_0] = max((arr_1 [i_0]), (max((arr_2 [i_0]), (((arr_1 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = (((0 ? 6609234080179182368 : 17013527442999737684)));
        var_23 ^= (arr_6 [i_1]);
        arr_8 [i_1] [i_1] = (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        arr_9 [21] = (arr_6 [i_1]);
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_24 = (((((arr_6 [11]) ? (arr_7 [11]) : (arr_11 [i_2 + 3]))) >> (((max((arr_6 [i_2]), (max((arr_10 [i_2 + 4]), (arr_7 [i_2 + 2]))))) - 7700494327075562658))));
        arr_12 [3] = (((min((arr_11 [i_2]), (arr_7 [i_2 + 2]))) <= (arr_11 [i_2 + 1])));
        arr_13 [i_2 + 4] [i_2] = max(((+(max((arr_10 [i_2]), 0)))), (((arr_11 [i_2 - 1]) ? (max((arr_7 [i_2]), (arr_11 [i_2]))) : ((((!(arr_6 [i_2 - 1]))))))));
    }
    var_25 = var_9;
    var_26 = ((((((var_11 ? 1943931660073058416 : 2019898229)))) ? var_18 : (var_3 + var_5)));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_25 [i_4] [i_4] [3] = min((((!((max(13, -3739855857070815231)))))), 3704415538);
                    var_27 = -4625642382091747710;

                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        arr_28 [i_3 - 2] [i_4] [i_5] [i_5] [3] = (((arr_20 [i_6 - 4]) ? (((((arr_19 [i_3 - 4] [i_4]) <= ((16502812413636493178 ? (arr_17 [19]) : (arr_27 [i_3] [i_5] [i_6 - 2]))))))) : (arr_26 [i_3 - 4] [i_4] [i_4] [i_5] [i_6])));
                        var_28 = (min(((-(max((arr_18 [i_3] [3] [i_3]), (arr_16 [19]))))), ((((arr_19 [i_3 - 2] [i_3 - 2]) + (arr_23 [i_4] [i_5]))))));
                        var_29 *= (((max(2230283068, 1632004770769233594))) * (arr_17 [i_3 - 2]));
                        arr_29 [i_5] [i_6 + 2] = ((+(((arr_22 [i_4]) ? (arr_22 [i_3 - 1]) : (arr_22 [i_5])))));
                    }
                    arr_30 [i_5] [i_4] = (min((arr_14 [i_4] [i_3 - 1]), (min(((((arr_16 [i_3]) ? (arr_16 [i_5]) : (arr_22 [i_3])))), ((16502812413636493200 ? 1943931660073058465 : 2230050540))))));
                    var_30 |= (((((arr_23 [i_4] [i_4]) || (arr_23 [i_4] [i_5]))) ? ((((!(arr_23 [i_3 - 2] [i_4]))))) : (max((arr_23 [i_3] [i_5]), (arr_23 [i_3 - 3] [i_5])))));
                }
                arr_31 [i_3] [i_4] = (max((arr_14 [i_3 - 3] [i_3 - 3]), (arr_17 [i_3 - 3])));
                var_31 ^= (((min((arr_18 [i_3] [i_3] [i_4]), (arr_18 [i_3 - 1] [i_4] [i_3 - 2]))) < (arr_18 [i_3] [i_3 - 2] [i_3 + 2])));
            }
        }
    }
    #pragma endscop
}
