/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min((min(var_4, var_11)), (var_7 >= var_9))), var_8));
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = -1;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((~(((((1 ? 969413192 : 470603643)) >= (((arr_4 [14] [i_1]) ? 1 : (arr_4 [i_1] [i_1])))))))))));
                            var_19 = (min((min((arr_8 [i_0 - 1] [i_1] [i_2] [i_3]), (((var_10 ? 470603629 : (arr_0 [i_0] [i_0])))))), (((601817657101711803 ? 1952575477 : 15032)))));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = (min(((((((arr_0 [i_0 - 1] [i_1]) >> (12065029935377473482 - 12065029935377473480))) % var_12))), (((arr_8 [i_1] [0] [i_1] [i_0]) ? (999075873 % 15714) : var_6))));
                var_20 = (min(var_20, (((-(min(var_2, ((var_11 ? var_12 : (arr_7 [i_0] [10] [i_1] [i_0]))))))))));
            }
        }
    }

    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        var_21 = 47643;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_4 + 1] [i_4] [i_6 + 1] [i_6 + 2] [i_7 + 1] = (-9223372036854775807 - 1);
                        arr_24 [i_4] = (min((arr_0 [i_6] [i_7 + 1]), (min((arr_15 [i_4 - 1]), (arr_15 [i_4 - 3])))));
                    }
                }
            }
        }
        arr_25 [6] |= 1792;
        var_22 = (arr_4 [i_4 - 1] [i_4]);
    }
    for (int i_8 = 3; i_8 < 7;i_8 += 1)
    {
        arr_28 [i_8] = (arr_22 [4]);
        arr_29 [i_8] = (min(((((arr_0 [i_8 + 3] [i_8 + 3]) * (arr_0 [i_8 + 3] [i_8 - 1])))), (min((arr_0 [i_8 + 2] [i_8 - 2]), (arr_26 [i_8 - 2])))));
    }
    var_23 = var_1;
    #pragma endscop
}
