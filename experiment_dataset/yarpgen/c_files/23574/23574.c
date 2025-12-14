/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((1924733648 ? (!-1) : var_3))) & (min((var_6 / 1), (~var_4)))));
    var_19 = (~1505544523);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((~1) & ((((max(127, (arr_4 [i_0] [i_0])))) << (min(1352845617, var_0))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, 4294967290));
                                arr_13 [14] [i_3] [i_3] [i_0] [i_1] [i_1] [14] &= ((~((var_4 ? var_6 : 4294967284))));
                                arr_14 [i_2] [i_2] [12] |= (((((-(min(var_14, 1))))) ? ((min(5, 3607045180))) : ((((arr_1 [i_4 - 1] [i_4 - 3]) ? var_12 : (arr_1 [i_4 - 4] [i_4 - 3]))))));
                                arr_15 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] = 5;
                                arr_16 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] = -1001397805;
                            }
                        }
                    }
                }
                var_22 = (max((((arr_6 [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_6 [i_0]))), (!var_16)));
            }
        }
    }
    #pragma endscop
}
