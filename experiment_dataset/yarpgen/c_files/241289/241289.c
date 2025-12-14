/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = ((-(((arr_8 [i_2 - 1] [i_2] [i_2]) ^ 27226))));
                    var_11 *= (44004 > 1);
                    var_12 = (((((~(arr_11 [i_1] [i_2 - 2] [i_2 + 1])))) ? ((((((arr_10 [i_0] [i_1] [i_0] [i_0]) ? var_9 : var_8))) ? ((((var_1 && (arr_4 [10] [i_1] [i_2 - 1]))))) : ((~(arr_11 [i_0] [3] [i_0]))))) : (((((((arr_7 [i_2]) ? var_8 : var_3))) ? ((((arr_9 [1] [i_1] [i_0]) <= (arr_2 [19])))) : -21532)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (1 == 1);
                                var_14 = (arr_13 [i_0] [i_2] [i_2] [i_2] [i_0]);
                                var_15 = (min(var_15, (((((arr_4 [i_2 + 1] [i_3 + 2] [i_4 - 1]) * (255 * var_4))) / ((69 ? 1 : ((max(var_3, (arr_4 [i_4] [i_2 - 2] [i_0]))))))))));
                                var_16 = ((((max((~923), -390212810))) - (arr_12 [i_2] [11] [i_2 - 2] [i_1] [19] [i_2])));
                            }
                        }
                    }
                }
            }
        }
        var_17 = ((((((arr_13 [i_0] [4] [i_0] [4] [i_0]) >= (max((arr_1 [i_0]), 0))))) | 1));
    }
    var_18 &= ((((~(max(0, var_1)))) >> (var_3 + 135)));
    #pragma endscop
}
