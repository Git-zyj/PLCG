/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min(((var_5 ? var_4 : var_9)), var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (((((var_4 ? var_6 : (arr_4 [i_0] [7] [i_1])))) && ((((arr_1 [i_0]) ? (min((arr_2 [i_1]), 48)) : 159)))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((((max((-19396 < var_11), (var_13 > 15025610329038963826)))) == 1));
                        var_16 = max((min(var_11, -2)), (((-19413 || (arr_2 [i_3])))));
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_15 [i_1] [i_4 - 1] = (min((arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (((arr_7 [i_4 - 1]) ? -21 : (arr_7 [i_4 + 1])))));
                        arr_16 [i_0] [0] [i_0] [6] [i_0] = arr_9 [i_4 + 1] [i_2] [8] [8];
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_6 - 1] [i_1] [i_2] [i_5] = (((((((var_2 ? 1 : 36))) ? (arr_4 [i_0] [i_2] [i_5]) : 42)) >> ((((~(arr_0 [i_6]))) - 18446744073709551526))));
                                var_17 *= var_1;
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((max((arr_3 [i_0] [i_5] [i_0]), 102)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((var_3 ? (var_12 ^ var_1) : var_5)));
    #pragma endscop
}
