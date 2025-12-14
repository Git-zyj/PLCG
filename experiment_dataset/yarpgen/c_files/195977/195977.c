/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_1 ^ var_5);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] |= (min(((51785 ? ((1 ? 311335800855755187 : 18135408272853796428)) : 46283)), ((max(var_15, var_15)))));
                                var_19 = ((((((((var_13 ? var_3 : var_3))) ? ((var_14 ? var_2 : var_12)) : (var_4 - var_2)))) ? var_12 : (max(311335800855755188, 19265))));
                                var_20 = ((((var_3 ? var_10 : var_12))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (~var_14)));
                    var_22 = (((((((max(var_13, var_7))) ? ((var_6 ? var_12 : var_3)) : (var_4 * var_7)))) ? ((var_13 + (min(var_2, var_6)))) : ((max(var_16, var_2)))));
                    var_23 = (min(var_23, ((min(var_2, (((max(var_16, var_11)))))))));
                }
            }
        }
    }
    #pragma endscop
}
