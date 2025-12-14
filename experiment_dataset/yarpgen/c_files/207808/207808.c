/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 && ((min((var_0 ^ var_14), ((min(-49192167, var_13))))))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (max(((((var_14 / (arr_3 [i_0] [22]))))), (min((max((arr_4 [i_0] [i_1]), -49192167)), ((max(var_6, (arr_3 [i_0 - 2] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2 - 1] [15] = 1321160513660551497;
                            var_18 = (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                        }
                    }
                }
            }
        }
    }
    var_19 = (((-57651 + var_4) ? (max(110, -var_14)) : (!var_4)));
    var_20 = ((var_10 % (max((var_0 | var_8), ((var_7 ? var_9 : var_8))))));
    #pragma endscop
}
