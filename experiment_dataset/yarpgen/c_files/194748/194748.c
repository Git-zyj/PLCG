/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((min(((max(var_6, var_7))), ((var_1 ? var_3 : var_5))))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, (arr_2 [19] [i_0 + 3])));
        arr_3 [18] [i_0] = (((((max(var_4, var_4))) >= ((min(-1, var_7))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((~((var_0 ? (arr_4 [i_0] [i_0 + 3] [18]) : var_13)))) + (((~((min(var_3, var_6))))))))));
                    arr_11 [3] [i_1] [i_2] = (arr_7 [i_2]);
                    var_17 = (min(var_17, (min(var_1, ((min((arr_8 [i_0 - 2] [i_0] [i_2 - 1]), 245)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_19 [i_5] [21] [i_5] [i_5 + 1] = (~(arr_6 [i_3] [i_5]));
                        arr_20 [i_4] [i_3 - 1] [1] [17] [1] = 10;
                        arr_21 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 3] = (((((18446744073709551615 ? 11097779198522127280 : var_1))) ? ((38 ? (arr_10 [i_3] [i_3 - 3] [i_4] [i_3]) : (arr_10 [0] [i_3 - 3] [i_4] [i_3]))) : ((var_5 ? (arr_10 [i_3] [i_3 - 3] [i_4] [i_3]) : (arr_10 [i_3] [i_3 - 3] [i_4] [4])))));
                        var_18 = (min(var_18, (((~(((!(!10)))))))));
                        var_19 = (((((~(arr_12 [i_0 - 3] [i_5 - 3] [i_3 + 1])))) ? (arr_12 [i_0] [i_5 + 2] [i_3 - 4]) : ((var_0 ? 147 : (arr_12 [i_0 - 2] [i_5 - 3] [i_3 - 2])))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] [10] &= (((arr_5 [11] [i_6] [11]) == 16));
        var_20 += (((((~(arr_18 [i_6] [i_6] [i_6] [i_6 - 1]))))) ? 18446744073709551610 : var_10);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_30 [i_7] [0] = (((((((max((arr_12 [i_7] [i_7] [4]), 246))) << (var_1 - 6317077905482822222)))) == (min(((var_7 ? var_7 : 18446744073709551615)), (((arr_29 [0]) | (arr_24 [i_7] [i_7])))))));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_41 [i_7] [i_7] = (max(((((arr_9 [19]) ? (~31) : (((var_5 >= (arr_24 [i_7] [10]))))))), (((0 * 65535) * (arr_15 [i_9] [16])))));
                        var_21 = (max(var_21, var_0));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 4; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                {
                    var_22 = ((((min(16, ((((arr_26 [i_7] [13]) && (arr_29 [i_7]))))))) ? (~var_2) : ((((arr_38 [i_12] [i_11] [i_11] [9]) > ((14826711672252458982 ? var_10 : 9178302543048381218)))))));
                    arr_48 [i_7] [i_7] [i_12] [i_7] = ((~((-(var_9 == var_11)))));
                    arr_49 [12] [i_12] [i_12] [i_7] &= (~15757453676736786296);
                }
            }
        }
    }
    var_23 = ((((((max(0, -2)) % var_7))) ? var_3 : 15757453676736786308));
    #pragma endscop
}
