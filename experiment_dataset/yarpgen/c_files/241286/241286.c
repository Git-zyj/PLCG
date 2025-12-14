/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_4] = ((arr_14 [i_2] [i_1] [10] [5] [i_0] [i_0 - 1] [i_2]) | ((min((arr_6 [i_1] [i_0] [i_2]), 38))));
                                var_19 = ((-(arr_2 [i_0 - 2])));
                                arr_16 [i_0] [i_0] = ((-(min(var_12, (arr_2 [i_0 - 1])))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((-(((!(((arr_4 [i_0] [6]) <= 8363)))))));
            }
        }
    }
    var_20 = (((((var_11 ? ((max(var_12, 0))) : (~var_5)))) ? -var_1 : (((8363 != var_15) ? ((var_0 ? var_15 : 57151)) : ((57173 ? 57172 : var_3))))));
    var_21 = var_4;
    var_22 = ((max(var_13, var_11)));
    #pragma endscop
}
