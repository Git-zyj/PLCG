/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((+(max((arr_1 [i_1]), (arr_4 [i_0] [i_0] [14]))))) << (((max((((!(arr_0 [i_1 + 1])))), ((var_12 ? (arr_1 [i_0]) : var_11)))) - 2111006205))));
                var_19 &= ((((min(((-(arr_1 [i_0]))), ((max(1, 0)))))) ? ((max(var_5, var_16))) : (((min(var_0, var_1))))));
                arr_6 [i_0] [i_1 - 2] &= (((((1 ? 1 : ((max(768, 8191)))))) ? (((arr_3 [i_1 - 2] [i_1 + 2] [i_1 + 1]) ? (((min((arr_0 [i_0]), (arr_2 [i_0]))))) : ((var_3 ? var_4 : (arr_4 [i_0] [i_0] [i_0]))))) : (arr_3 [i_1] [i_1 + 2] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((max((arr_10 [i_4 + 1] [i_4] [i_4 - 1] [i_1 + 1]), (((~(arr_1 [i_0])))))));
                                var_20 = (max(var_20, (((min(var_3, (((arr_0 [i_0]) ? (arr_15 [8] [8] [i_2]) : var_16)))) - (arr_12 [i_1 - 1] [i_4 - 2] [i_4 - 1] [i_4])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_21 |= (max(var_4, (((!(arr_23 [i_6 - 1] [i_6 - 1] [i_1 + 1]))))));
                            var_22 = ((((!((max(var_0, (arr_10 [i_6] [i_5] [i_0] [i_0])))))) ? (arr_17 [i_1] [i_1] [i_1 - 1] [i_6 - 1] [i_6]) : ((((arr_23 [i_1 - 1] [i_1 - 2] [i_6 - 1]) ? ((((arr_10 [0] [17] [i_1 - 3] [i_0]) || var_14))) : ((var_18 / (arr_14 [i_0] [i_1] [i_5] [i_5]))))))));
                            var_23 = (min(var_23, -81));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_24 = (((((((-(arr_27 [i_8] [i_7])))) ? ((min(var_3, (arr_32 [i_7] [i_7] [i_8])))) : (arr_29 [i_7 + 2])))) ? (min(9, 4294967296)) : (min((min((arr_31 [i_8] [i_7]), var_16)), ((min(var_7, var_11))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_41 [i_7 - 2] [i_8] [i_9] [i_10 + 2] [1] &= (((((((var_15 ? (arr_33 [i_7 + 2] [i_8] [i_10]) : var_16))) || ((!(arr_31 [i_7 - 2] [i_7 - 1]))))) ? ((+(min((arr_32 [0] [i_9] [i_11]), var_2)))) : (!var_16)));
                                var_25 |= ((~(((max((arr_39 [i_7] [i_7] [i_7] [1] [1] [i_7]), (arr_39 [9] [i_8] [i_8] [9] [i_8] [i_8])))))));
                                arr_42 [i_11] [i_10] [1] [i_8] [i_8] [0] = (min((arr_32 [i_7] [i_8] [i_9]), ((((var_0 - var_16) ? var_5 : (arr_36 [i_11 + 3] [13] [i_11 - 2] [i_11 - 1] [i_11] [13]))))));
                            }
                        }
                    }
                }
                var_26 += ((((min((min((arr_28 [i_7] [i_8]), var_11)), (1 + 1)))) % (max((arr_29 [i_7]), (arr_30 [i_7])))));
            }
        }
    }
    var_27 = (max(var_11, (var_0 ^ var_0)));
    #pragma endscop
}
