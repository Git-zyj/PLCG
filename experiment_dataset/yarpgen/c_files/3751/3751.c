/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_6 | ((var_9 ? var_9 : var_11))))) ? (max(((var_7 >> (var_15 + 173))), -1697265249)) : (~78)));
    var_19 = (~-90);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = ((-28052 ? (arr_10 [i_3] [14]) : (((arr_7 [i_2] [i_1] [i_2]) ? var_13 : var_2))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (((~var_0) ? var_2 : (arr_14 [i_0] [i_2] [i_2] [i_4 + 2] [i_2])));
                                var_20 = (((arr_0 [i_2 + 1]) ? (arr_7 [i_4 - 1] [i_2 + 1] [i_1]) : (arr_14 [i_2 - 1] [i_4 + 1] [i_4] [i_4] [i_2 - 1])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_1] = var_15;
                }
                arr_18 [i_0] [i_1] = var_2;
                var_21 = ((((max(var_3, var_1))) || 92));
            }
        }
    }
    #pragma endscop
}
