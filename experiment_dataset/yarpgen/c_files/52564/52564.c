/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((arr_5 [i_1 - 2] [i_1 - 2]) && ((!(arr_5 [i_1 - 1] [5])))));
                var_19 = (((arr_3 [i_0] [i_0]) ? ((((((max(-7696111182815143289, (arr_1 [i_0])))) && (((-7250561135311425727 ? (arr_5 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))))))) : (arr_0 [i_1 - 2])));
            }
        }
    }
    var_20 *= var_15;
    var_21 = (min(var_0, var_15));
    var_22 = var_12;
    #pragma endscop
}
