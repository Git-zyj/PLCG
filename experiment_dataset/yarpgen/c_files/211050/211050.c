/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 4248801690;
        arr_3 [8] [i_0] = (max((((-var_7 && (((arr_2 [i_0] [i_0]) || (arr_1 [i_0])))))), ((((min(var_8, 46165605))) ? (arr_2 [i_0] [12]) : (min(-5873946690263234656, var_6))))));
        var_14 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_15 = ((-((~(~var_3)))));
                                var_16 -= var_12;
                                arr_17 [i_1] [i_2] [i_3] [i_4] [i_5] [9] = (((((var_1 ? var_9 : 4248801671))) < ((max(var_3, (((arr_8 [17] [i_2] [i_2]) ? -22780 : 1150885866)))))));
                            }
                        }
                    }
                    arr_18 [7] &= (((!4248801685) ? var_2 : 1150885866));
                    var_17 = (max(var_17, ((((((var_8 ? (((var_7 + 2147483647) >> (arr_14 [i_1] [i_2] [i_3] [i_3]))) : ((max(9565, 22780)))))) ? (max(((46165605 ? var_11 : (arr_9 [i_1] [i_2] [16] [i_2]))), 46165606)) : (((~(arr_11 [i_1] [i_2] [i_3])))))))));
                    var_18 = ((((max(1, (min(3403237984, (arr_12 [i_1])))))) ? ((((((arr_8 [18] [i_2] [1]) <= (arr_5 [4] [3])))) * ((var_9 ? 22779 : var_6)))) : ((~(var_6 | var_7)))));
                }
            }
        }
        var_19 = -109;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_20 = (((var_2 ? var_5 : 28)));
        arr_21 [i_6 + 2] = -2147483630;
    }
    var_21 = (~((((var_10 ? 4248801703 : var_9)))));
    var_22 = var_1;
    var_23 = ((((var_6 <= var_3) * -var_3)));
    #pragma endscop
}
