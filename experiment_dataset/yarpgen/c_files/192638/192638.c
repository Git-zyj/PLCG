/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = ((var_7 ? -var_10 : (var_14 * var_16)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 ^= (max(((var_2 ? var_16 : var_4)), ((var_5 ? var_18 : var_4))));
                            var_22 = (min(var_22, ((max(((max(((max(var_13, var_3))), (max(var_6, var_11))))), (max((min(16707901298478920488, var_17)), var_6)))))));
                        }
                    }
                }
                var_23 = (max(56470, ((max(var_3, -var_7)))));
                arr_11 [i_0] [i_1] = var_14;
            }
        }
    }
    var_24 = var_6;
    var_25 = var_11;
    #pragma endscop
}
