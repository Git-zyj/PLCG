/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((!var_10) && var_17))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [8] = (((~((var_7 & (arr_0 [i_0] [i_0]))))));
                var_19 = ((~((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1 + 4]) : 7075148111455887017)))));
                arr_6 [11] = (!-var_2);
            }
        }
    }
    var_20 = min(var_5, ((var_6 ? ((var_13 ? var_0 : var_14)) : (~56953))));
    #pragma endscop
}
