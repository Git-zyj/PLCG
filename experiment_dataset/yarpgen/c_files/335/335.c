/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min((~30930), var_4))) ? var_4 : ((((30951 < ((var_8 ? -3177 : var_4))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_11 = ((arr_12 [i_0] [i_0] [i_0] [15] [13] [i_0]) % 1);
                            arr_13 [4] [i_3] [i_3] [i_4] [i_2] [i_1] [i_0] = ((arr_2 [13] [i_1]) ? (arr_2 [6] [i_1]) : (arr_2 [15] [i_3]));
                            var_12 = (min(var_12, 65535));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_16 [i_5] [i_5] [i_5] [i_0] [i_5] [i_0] = ((65529 << (14011618779856705401 - 14011618779856705399)));
                            var_13 = (((arr_7 [9] [i_3] [i_5]) ? (((((min(var_0, var_3))) && (((~(arr_11 [i_0] [i_1] [5] [i_5] [6]))))))) : (((0 < (~1))))));
                            arr_17 [8] [i_1] [10] [i_5] [4] = (max(var_3, (min(((15012032470722389525 ? (arr_4 [i_0]) : (arr_8 [i_2] [i_2] [i_2]))), -672))));
                        }
                        arr_18 [i_0] [10] [1] = ((~(min(var_3, (arr_2 [1] [1])))));
                    }
                }
            }
            arr_19 [i_0] [5] [6] = (((~var_4) ? -5245112511913762457 : var_4));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_14 += ((!var_1) ? 0 : 7);
            arr_24 [i_6] [i_6] [i_6] = (((((~(var_5 > var_1)))) ? (((arr_12 [i_0] [i_6] [i_6] [i_0] [i_6] [i_0]) ? (arr_12 [10] [i_6] [5] [i_6] [i_6] [i_6]) : var_2)) : (max((var_4 > var_3), ((var_8 + (arr_5 [i_0])))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_15 &= ((var_8 - (((2147483647 != (arr_27 [i_8 - 1] [i_0] [i_7] [i_8] [i_8 - 1] [i_8]))))));
                        arr_31 [1] [1] [1] [i_7] = ((((((arr_14 [i_8] [i_8 + 1] [i_8 - 1] [12]) - (arr_14 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_7])))) ? (arr_11 [i_8] [i_8] [i_8] [i_7] [i_8 + 3]) : (((((((min(var_8, var_0)))) <= (min((arr_1 [i_0]), 1))))))));
                        arr_32 [i_0] [i_0] [0] [i_7] [i_0] [9] = (min((min(var_0, (arr_30 [i_8 + 2] [i_7] [i_7] [i_8 + 2]))), (arr_11 [15] [15] [15] [i_7] [i_8 + 3])));
                        arr_33 [i_0] [i_0] [1] [i_7] [6] = ((((((var_5 ? (arr_12 [8] [i_6] [i_6] [i_6] [i_6] [i_6]) : -29292)))) << (var_3 - 57097)));
                        var_16 = (min(var_16, (arr_9 [16] [16] [7])));
                    }
                }
            }
        }
        arr_34 [i_0] &= ((~((~(arr_21 [i_0] [15])))));
        var_17 += (((arr_11 [6] [i_0] [i_0] [i_0] [i_0]) ? 15012032470722389525 : (((-((var_2 ? (arr_3 [i_0] [0] [1]) : var_8)))))));
    }
    var_18 = var_6;
    #pragma endscop
}
