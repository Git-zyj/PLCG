/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((min(var_3, var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (max((min((arr_3 [i_1] [i_1] [i_1]), 53527)), ((-(arr_1 [9])))));
                var_14 |= ((!((max((max(var_6, var_4)), (!var_5))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 += var_10;
                                arr_14 [7] [5] [11] [i_1] [i_4] [i_1] [i_0] = ((((((arr_3 [3] [i_1] [i_4 - 1]) ? ((((arr_8 [i_0] [i_4 - 2] [i_0] [i_3]) ? 1670228414 : -1670228405))) : var_7))) ? (max(1, var_10)) : (~0)));
                                arr_15 [i_4] = ((var_5 == ((var_9 ? (var_8 + 0) : (min(var_1, (arr_0 [i_2])))))));
                                var_16 = ((!(!4294967287)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
