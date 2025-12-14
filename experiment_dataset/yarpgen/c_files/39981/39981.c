/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(6282, var_14))) ? (((var_5 ^ var_13) ? (((66846720 ? var_19 : var_16))) : var_18)) : (((min(var_12, 60114))))));
    var_21 = (!var_6);
    var_22 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_23 = (((((0 ? (((arr_3 [i_3] [i_1]) >> (11805577827763682326 - 11805577827763682316))) : 5422))) ? (max((arr_5 [i_0] [i_1 + 1] [11] [i_2 - 1]), (var_5 && var_19))) : ((var_11 | (((arr_0 [11]) ? var_13 : var_12))))));
                        arr_10 [1] [1] [1] [i_1] [i_3] = 45;
                        arr_11 [i_1] = -var_14;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = var_7;
                            var_24 = (max((max(45, 2031799237)), ((((arr_1 [i_1 + 1] [i_1 - 1]) | (~var_10))))));
                            var_25 = (i_1 % 2 == 0) ? ((((((60135 ? var_19 : (arr_7 [i_0] [i_1] [i_1 - 1] [i_2 + 1])))) ? (((~var_13) ? ((((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_4]) + 2147483647)) << (((arr_1 [11] [i_2]) - 5361))))) : var_18)) : (arr_9 [i_1] [i_1])))) : ((((((60135 ? var_19 : (arr_7 [i_0] [i_1] [i_1 - 1] [i_2 + 1])))) ? (((~var_13) ? ((((((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_4]) - 2147483647)) + 2147483647)) << (((arr_1 [11] [i_2]) - 5361))))) : var_18)) : (arr_9 [i_1] [i_1]))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_18 [7] [i_1] [i_2] [i_2] [17] [i_5] = -27;
                            arr_19 [1] [i_1 - 1] [i_1] [i_3] [i_3] [i_1] = var_10;
                            arr_20 [i_5] [i_5] [i_2] [i_0] &= (min(((((arr_15 [i_0] [i_2 - 1] [i_1 + 1] [i_5] [10]) < var_13))), (arr_17 [i_1 + 1] [i_0] [i_2] [i_1] [i_5])));
                            var_26 = (((~18) <= ((-27542 ? (arr_16 [i_1 - 1] [i_2 + 1]) : 5400))));
                        }
                        var_27 = (min(var_9, (arr_7 [2] [i_1] [i_2] [2])));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_1] [i_1] [6] [i_6] = var_16;
                        var_28 &= 1057871933;
                    }
                    arr_25 [i_0] [i_0] [i_2] [i_1] = ((min(619191868, 6255)));
                }
            }
        }
    }
    #pragma endscop
}
