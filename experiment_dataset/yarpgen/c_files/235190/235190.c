/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = min((min(0, 688570453)), (arr_5 [i_1]));
                            var_12 = (~((~(~-980205643))));
                        }
                    }
                }
                var_13 = (max(-4568, -980205643));
                var_14 = ((((((min(203, -6091112443362146189))) ? (18 ^ 53) : 45485)) <= (((max((383427820010651835 && 72), (arr_3 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_15 = ((((((min(44, var_3))) ? ((79 ? 383427820010651835 : 214)) : (!var_6))) <= (((var_1 > var_1) ? var_3 : var_8))));
    var_16 = (max(var_16, var_8));
    #pragma endscop
}
