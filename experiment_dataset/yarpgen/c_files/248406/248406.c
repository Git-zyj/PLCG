/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = ((((((((var_15 ? var_15 : 4194303))) ^ (-9223372036854775807 - 1)))) ? var_15 : var_8));
                            arr_11 [i_0 - 1] [i_2] = (!var_15);
                            var_21 = (((((var_15 ? (-9223372036854775807 - 1) : var_1))) - -949457466));
                        }
                    }
                }
                arr_12 [i_0 + 1] [i_1] [i_1] = (max((min(0, ((var_10 ? var_4 : var_10)))), ((((-9223372036854775807 - 1) ? var_9 : 8548779724207142462)))));
                arr_13 [i_0] [i_1] = var_10;
            }
        }
    }
    var_22 = ((var_12 || (((~((0 ? var_8 : 3431420719)))))));
    var_23 = ((-(min(var_12, var_17))));
    #pragma endscop
}
