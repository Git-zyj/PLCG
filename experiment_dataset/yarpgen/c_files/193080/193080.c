/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 ? ((var_6 ? ((min(var_6, 239))) : (((var_4 + 2147483647) << (var_5 - 41057))))) : (!var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (arr_0 [i_0]);
                    var_21 = (arr_6 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    var_22 = (min(((((((var_18 ? 235 : var_11))) ? var_14 : var_6))), var_7));
    var_23 = var_6;
    #pragma endscop
}
