/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((var_10 ? (var_14 - var_3) : (min(((1065353216 ? var_4 : -1065353217)), (min(var_2, var_6))))));
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] &= ((~(arr_2 [i_0])));
                    arr_8 [i_0] [i_1] [i_1] [5] = ((((min((var_1 != 24263171), (arr_0 [i_2])))) ? var_8 : (((arr_6 [i_0] [i_2] [i_1]) >> (arr_5 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = min((min(var_3, 1)), (arr_13 [i_1]));
                                arr_15 [i_1] [i_1] [i_2] [i_1] [i_2] = ((18 ? 42 : 98));
                                var_19 = ((((((((arr_1 [i_0] [i_0]) ? 1 : var_14))) ? 1065353217 : 245)) & ((((arr_0 [i_0]) || ((min(50, 3096173546))))))));
                                var_20 = (((~(arr_4 [i_0] [i_1] [i_2]))));
                                var_21 = (min(var_21, var_7));
                            }
                        }
                    }
                }
            }
        }
        var_22 ^= -14754518147489801245;

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 ^= (~(((arr_0 [i_0]) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_17 [i_0] [i_5] [i_0]))));
            var_24 += ((0 * (arr_11 [i_0])));
            var_25 = (min(var_25, ((((((~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_11 [i_0]) : (arr_12 [i_0] [i_5] [i_0] [i_5]))))));
        }
        arr_18 [i_0] [4] = (((((arr_11 [i_0]) + 2147483647)) << (1 > 134217472)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_26 = var_5;
                    arr_23 [i_0] [i_7] = (min((((((((arr_12 [i_6] [1] [1] [i_6]) ? (arr_22 [15] [i_6] [11] [15]) : var_2))) ? (~var_11) : (arr_22 [i_0] [14] [i_7] [i_6])))), (((arr_4 [i_7 - 1] [i_7] [11]) & (min(var_13, (arr_5 [i_7])))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_26 [4] &= (arr_25 [10]);
        var_27 = ((var_15 ? (arr_24 [i_8] [i_8 + 1]) : (arr_24 [i_8] [4])));
        arr_27 [i_8] = ((arr_24 [i_8] [i_8 + 1]) ? (arr_24 [i_8] [i_8]) : 1565834382);
        var_28 = (max(var_28, ((max(((((arr_25 [16]) <= (arr_25 [18])))), (min((arr_25 [0]), (arr_25 [14]))))))));
        arr_28 [i_8] = (7 % 4294967295);
    }
    var_29 = ((69598275 ? ((var_8 ? (!var_2) : ((var_9 ? var_11 : var_1)))) : (((!(((1 ? 1065353223 : var_4))))))));
    #pragma endscop
}
