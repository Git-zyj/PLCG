/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] |= -0;
                                var_11 = -1;
                                arr_17 [i_2] [i_1] = ((((max(var_8, (arr_15 [i_2 + 1] [i_2 + 1] [i_1] [i_0])))) ? -var_9 : (1 / 53)));
                                var_12 = (max(var_12, var_4));
                                arr_18 [i_0] [i_1] [i_1] [i_3] [i_4 + 2] = ((1 ? 18175 : 52));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] [i_2] |= (((min(((0 ? 33134 : var_2)), (arr_6 [i_0] [i_2 - 1] [i_2])))) ? ((var_8 * ((min(1, (arr_7 [i_0] [i_1] [i_0] [i_0])))))) : ((((((1 ? var_9 : var_5)) + 2147483647)) >> ((((1 ? (arr_7 [i_0] [2] [i_0] [15]) : (-127 - 1))) - 2203)))));
                    arr_20 [i_1] [i_1] [i_1] [i_1] = (((max(((max(1, 254))), ((var_9 ? (arr_12 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1]) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0])))))) ? (((!((max(1, 750889737)))))) : ((min((arr_7 [5] [i_2 + 1] [i_2] [i_1]), 1))));
                }
            }
        }
    }
    var_13 = 65535;
    var_14 = (min(var_14, ((min((51717 || 24), (((var_0 ? var_8 : var_6))))))));
    #pragma endscop
}
