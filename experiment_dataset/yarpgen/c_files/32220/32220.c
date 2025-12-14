/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(var_3, (~var_1))), ((min((!var_1), (!var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max(((!(arr_4 [4] [4]))), (!78)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, var_7));
                                var_14 = (min(var_14, (((-((1028357026347473436 ? 123 : 16923010840697269683)))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = var_2;
                var_15 = ((~((((8448056699302022084 | (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]))) ^ (((max(-7145, var_9))))))));

                /* vectorizable */
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] = (var_6 ? var_1 : (~var_2));
                    var_16 = (((((var_10 ? (arr_16 [i_0] [i_1] [i_5]) : 66))) ? var_2 : (arr_0 [i_5 - 2])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] = (((arr_6 [i_0] [i_6] [i_6]) > (arr_6 [i_0] [i_0] [i_0])));
                    var_17 -= (~var_6);
                    var_18 = ((var_0 ? 23959 : ((var_1 ? var_1 : (arr_2 [i_6] [i_1])))));
                    var_19 = var_0;
                    arr_23 [5] [i_1] [i_1] = ((1523733233012281932 ? 1 : 14715604493006910170));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    arr_26 [i_0] [i_1] [i_1] [i_7] = var_3;
                    var_20 = (((arr_24 [8] [i_0] [i_1] [i_7]) ? -var_5 : var_1));
                    var_21 &= ((((22579 ? 156 : 16677)) ^ var_8));
                    arr_27 [i_0] [i_0] = ((((8448056699302022084 ? 179 : var_10)) * (arr_10 [i_0] [3] [i_0] [i_0] [5] [i_1] [i_0])));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_22 = ((max(((-(arr_19 [i_1] [i_1] [i_1]))), ((~(arr_6 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 7;i_10 += 1)
                        {
                            {
                                var_23 = (min((~var_2), (arr_33 [i_1] [3] [i_8] [i_1])));
                                arr_38 [i_10] [i_9] [i_8] [8] [i_1] [2] [i_0] &= (max(4793368435136857752, (((46 ? 3110266652 : 16677)))));
                                arr_39 [7] [7] [i_9] [5] [i_10] = ((((((((~(arr_0 [i_10])))) ? (~var_8) : (arr_10 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10] [1])))) ? (arr_8 [1] [1]) : (arr_5 [i_0])));
                            }
                        }
                    }
                    var_24 = (max((((max(var_7, var_4)))), 16923010840697269701));
                    arr_40 [i_0] [i_1] [i_8] = ((((max(77, (arr_34 [i_0] [1] [i_0] [i_0] [i_0] [3])))) ? ((~(arr_34 [i_0] [6] [i_1] [i_1] [i_1] [4]))) : ((max((arr_34 [i_0] [i_1] [i_8] [i_8] [i_1] [i_1]), (arr_34 [i_8] [i_8] [i_1] [i_1] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_25 = var_5;
    var_26 = var_7;
    #pragma endscop
}
