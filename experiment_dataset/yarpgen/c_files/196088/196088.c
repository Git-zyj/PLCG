/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-(2874615914 < 536346624))) << (((max((var_2 >= var_3), 2264009620)) - 2264009601))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (var_10 * (arr_4 [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = var_16;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                                arr_16 [i_4 + 1] = (((max(((~(arr_8 [i_1] [i_3] [i_4 + 3]))), var_5))) ? (arr_6 [i_3]) : var_1);
                                arr_17 [i_2] [i_4] = ((~(max((arr_13 [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 3]), 679968744))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] = (arr_1 [i_1]);
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_2] = (max((var_5 + 1), (arr_9 [1] [i_0])));
                }
            }
        }
    }
    var_21 = (~(var_13 & var_17));
    var_22 = ((((((var_8 ? var_0 : var_2))) ? (((min(var_8, var_9)))) : (~var_10))));
    #pragma endscop
}
