/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4294967295;
    var_12 = ((((((((var_6 ? var_0 : var_7))) ? (var_8 + var_3) : 8074460904348200110))) && var_10));
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = var_9;
                            arr_12 [i_1] [i_1] = var_0;
                            arr_13 [10] [10] [i_0] [i_2] [14] [i_2] &= 0;
                        }
                    }
                }
                var_15 = var_3;
                arr_14 [i_1] = 65532;
            }
        }
    }
    #pragma endscop
}
