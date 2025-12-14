/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (~((3740033266824300776 ? -3740033266824300758 : (((14690151425050838072 ? -35 : 255))))));
                arr_8 [i_0] [i_0] = (arr_4 [i_0] [1] [15]);
                arr_9 [19] [i_0] = (1595013272 - (0 - -1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_3] [4] [i_5] [3] [i_2] = (arr_21 [i_6 - 1] [i_3]);
                                arr_23 [i_2] [i_3] [i_4 + 1] [i_5] [1] = 1;
                                arr_24 [i_2] = ((+(((arr_2 [1]) | ((-20658 ? (arr_5 [i_2]) : (arr_6 [i_2] [i_3] [i_4 - 1])))))));
                                arr_25 [i_2] [1] [i_4 + 1] [i_6 - 1] [i_6 - 1] = ((-3740033266824300736 ? (arr_5 [i_6 - 1]) : (((arr_5 [i_6 - 1]) ? (arr_5 [i_6 - 1]) : (arr_5 [i_6 - 1])))));
                            }
                        }
                    }
                    arr_26 [11] [i_2] [i_4 - 1] = (((((-(arr_21 [i_2] [i_3])))) ? var_11 : (arr_20 [i_4 + 1] [i_4 - 1] [i_2] [10] [i_2] [10] [i_2])));
                    arr_27 [7] [i_3] [i_2] = (!42831);
                }
            }
        }
    }
    var_18 = (min(var_16, ((((-2052101022 + 2147483647) << 2)))));
    var_19 = ((var_6 ? var_15 : (var_6 % var_14)));
    #pragma endscop
}
