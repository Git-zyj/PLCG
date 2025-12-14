/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((61499 ? 11170251312417172973 : var_3))) ? -var_3 : (var_6 == var_14)))) ? ((var_15 ? var_0 : (~-150163929))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = var_3;
                var_21 = ((~((~((var_1 ? var_11 : var_1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 |= ((~((~((9767716889064896133 ? var_1 : 139))))));
                            var_23 |= ((((var_13 < ((~(arr_5 [i_3] [i_1] [9]))))) ? 1 : ((((min(var_15, (arr_2 [i_0] [i_1] [i_2])))) ? 1 : var_4))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
