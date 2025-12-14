/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((var_0 ? (((max(119, var_0)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (arr_0 [i_1] [i_0])));
                var_15 = ((!((!(arr_0 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] = (max((((arr_1 [i_3 + 1]) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1]))), ((min((((var_6 + 2147483647) << (var_5 + 210062145))), (((arr_11 [1] [1] [i_3]) ? var_6 : var_5)))))));
                var_16 |= (!-7894);
                var_17 = (max(var_17, var_6));
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 *= (((4183732480 <= 21) ? (~216) : (((arr_13 [16]) ? (((((arr_14 [i_4]) == (arr_15 [i_4]))))) : (arr_13 [16])))));
        arr_16 [i_4] = ((-var_8 ? ((((!(arr_13 [i_4]))))) : (!-469020637)));
        arr_17 [i_4] = ((~((max(var_1, (arr_14 [13]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_19 = (min(var_19, (((~((~(arr_15 [i_6]))))))));
                    var_20 = (~0);
                    arr_22 [i_4] [i_5] [i_6] [i_4] = ((((-(arr_19 [i_4]))) ^ 1));
                }
            }
        }
        arr_23 [i_4] [i_4] = ((!((((arr_13 [i_4]) << (197 - 173))))));
    }
    #pragma endscop
}
