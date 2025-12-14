/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 ? var_10 : (((var_14 ^ var_1) ? (~-22) : (min(var_0, 106)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 &= ((((min(193, (!37)))) - (((var_18 + 98126637) ? (((arr_4 [i_2]) ? var_6 : var_6)) : (arr_4 [i_2])))));
                    var_21 = (min(((((arr_5 [i_0 - 2]) == (arr_5 [i_1 - 1])))), 2670004550));
                    var_22 = (((((~(arr_4 [i_0])))) ? (arr_1 [i_0]) : 43));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 = ((!(arr_4 [i_0])));
                                arr_12 [i_2] [1] [i_2] [i_3] [i_4] |= ((-(min(1344377374, (arr_7 [i_1 - 2] [10] [11])))));
                            }
                        }
                    }
                    var_24 = arr_0 [i_2] [2];
                }
            }
        }
    }
    var_25 = ((var_2 ? var_14 : (((~(min(var_0, var_4)))))));
    var_26 = var_13;
    #pragma endscop
}
