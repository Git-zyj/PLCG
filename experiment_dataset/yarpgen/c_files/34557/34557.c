/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (min(((var_8 ? (var_5 >= 22230) : var_15)), (((var_15 || ((max(var_8, 2217146146))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 -= ((!(((arr_1 [i_0]) || var_13))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_22 = (min((min((arr_2 [i_1] [i_1]), var_14)), (((574925393 == (arr_4 [i_1] [i_1] [i_2]))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [11] [i_1] = ((~((~(arr_7 [i_2 + 1] [i_1] [i_2 + 2])))));
                            arr_12 [i_0] [3] [i_2 - 1] [11] [11] [i_1] = ((var_7 ? ((((!(arr_10 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_0]))))) : (min((arr_10 [i_0] [i_1] [i_2 + 2] [i_1] [i_1] [i_1]), 2217146146))));
                            arr_13 [i_0] [i_1] = (max((arr_8 [i_1] [i_1] [i_1] [i_0]), (var_12 > var_17)));
                            arr_14 [i_1] [i_1] [i_2] [i_3] = (min((arr_10 [i_1] [i_2 - 1] [i_2] [i_1] [i_1] [i_2 + 1]), (((~(arr_7 [i_2] [i_1] [i_2]))))));
                        }
                    }
                }
                arr_15 [i_1] = var_8;
            }
        }
    }
    #pragma endscop
}
