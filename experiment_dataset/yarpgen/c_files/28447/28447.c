/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-52 ? 61098 : var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        var_19 = (max(var_19, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_20 = (min(var_20, ((max((((-(arr_3 [i_1])))), (min(((((arr_3 [13]) ? (arr_5 [i_1 - 1]) : (arr_6 [i_1 + 2])))), (((arr_3 [i_1 + 1]) ? (arr_2 [i_1 - 1]) : (arr_1 [i_1]))))))))));
        var_21 = (((((((((arr_3 [i_1]) != (arr_6 [i_1]))))) >= (max((arr_1 [i_1]), (arr_6 [i_1]))))) ? (((((((arr_3 [i_1]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1])))) ? ((((arr_6 [i_1]) ? (arr_3 [i_1]) : (arr_5 [i_1])))) : (arr_2 [i_1])))) : (((arr_1 [i_1]) << ((((arr_2 [4]) >= (arr_3 [i_1]))))))));
        arr_7 [i_1] = (((-9346 >= 16379205236212223855) ? (arr_2 [15]) : (32665 != -94)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] = ((min(-26, 2067538837497327761)) / (((((arr_1 [i_2]) + (arr_9 [i_1]))) * (((min((arr_6 [i_1 + 2]), (arr_5 [i_1]))))))));
            var_22 = ((!(((((10895709876665633210 ? 41624 : 2467873652345003506))) || (((-49 ? 115 : 23911)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_14 [i_4])));
                        var_24 = (arr_6 [i_2]);
                        var_25 = (arr_11 [4] [4] [i_4]);
                    }
                }
            }
            var_26 = (min(var_26, (min((((arr_9 [i_1]) ? (((arr_1 [i_1]) ? (arr_5 [0]) : (arr_1 [i_2]))) : (((((arr_12 [i_2] [i_1]) == (arr_11 [i_1] [i_1] [i_2]))))))), (((((((arr_13 [i_1]) ? (arr_13 [i_1 + 1]) : (arr_5 [i_2])))) ? (((arr_0 [0]) + (arr_0 [20]))) : (((arr_13 [i_2]) & (arr_9 [i_1]))))))))));
            arr_15 [i_1] = (((arr_14 [i_1]) | 0));
        }
    }
    var_27 = ((var_5 >= ((((((12424167059635745432 ? 10895709876665633224 : var_16)) >= ((min(-1795731091, 0)))))))));
    #pragma endscop
}
