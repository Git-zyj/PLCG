/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(var_6, (((var_4 ? var_4 : var_11))))) ^ var_14));
    var_21 = (((max(((var_2 ? 27793 : var_7)), (var_1 % var_7))) << (var_14 - 18162826632428927043)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = (+-3645650878574252769);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = var_19;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = ((~(arr_5 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = var_10;
                                var_23 = (((((((~(arr_20 [i_0] [6] [i_0] [i_0]))) > ((max(var_11, var_13)))))) * (max(var_11, (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_0]) : (arr_19 [i_0] [i_0] [i_2])))))));
                                var_24 = (arr_22 [i_0] [1] [i_0] [i_1 + 2] [i_1 + 1] [i_0]);
                                var_25 = (arr_23 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 3]);
                                arr_24 [i_0] [i_2] [i_5] = (i_0 % 2 == 0) ? (((~(((arr_0 [i_0]) >> (((arr_5 [i_0] [i_5] [i_2] [i_0]) - 8493541573212873592))))))) : (((~(((arr_0 [i_0]) >> (((((arr_5 [i_0] [i_5] [i_2] [i_0]) - 8493541573212873592)) - 15791524718687658338)))))));
                            }
                        }
                    }
                    var_26 = ((-1 > 1) * (((arr_2 [10]) % ((1 ? var_5 : 1)))));
                    var_27 = ((((arr_13 [19] [i_1 + 3] [i_2] [i_1 + 3] [i_2] [i_1 + 3] [i_1 + 3]) ? (arr_23 [i_2] [i_2] [i_2] [i_1 - 1] [16] [i_1 - 1]) : (arr_21 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 3]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_32 [i_9] [i_8] [i_9] = (((arr_19 [i_9] [1] [i_7]) ? ((((max((arr_4 [i_7]), (arr_6 [i_8 + 1])))) ? ((var_14 ? 1 : (arr_28 [i_7] [i_8] [i_9]))) : (arr_1 [i_8 - 2]))) : (((1 ? 1 : (arr_29 [i_9] [i_8] [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_28 = (((min((arr_1 [i_7]), (arr_1 [i_7])))) ? (((arr_28 [i_7] [i_8 - 2] [i_9]) ? (arr_28 [1] [i_8 - 2] [1]) : (arr_28 [i_7] [i_8 + 1] [i_8 + 1]))) : (((max(var_5, var_2)) | var_4)));
                                arr_40 [i_7] [i_8 - 2] [i_9] [10] [7] [i_11] = (((arr_9 [i_7] [i_8] [i_9]) ? ((-(arr_12 [i_10] [i_8]))) : (((var_0 == 1) ? ((((arr_38 [i_7] [i_8 + 1] [i_9] [i_8 + 1] [i_9]) < var_11))) : var_18))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
