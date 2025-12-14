/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2057285234;
    var_13 = (var_9 > var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_9 * (arr_0 [i_0] [i_1 - 2])));
                var_14 = (((!16632) ? ((min((((!(arr_1 [i_0])))), (max(94, 16383))))) : ((max(0, 23977)))));
                var_15 = (max(var_15, ((min((((1 ? ((1180390859 ? (arr_2 [i_0] [i_1]) : 1)) : 3))), -var_2)))));
            }
        }
    }
    var_16 = (((~(1 / 111))));
    #pragma endscop
}
