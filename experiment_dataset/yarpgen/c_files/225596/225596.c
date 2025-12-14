/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((!((((!243) ? ((min((arr_3 [i_0] [i_0] [i_0]), var_9))) : ((((arr_3 [i_0] [i_0] [i_1]) || (arr_0 [i_1] [i_0])))))))));
                var_15 = (max(var_15, (((-((((((arr_0 [1] [1]) ? (arr_4 [2] [i_1]) : (arr_1 [10])))) ? -394733234 : (((arr_4 [2] [2]) ? (arr_2 [i_0] [2]) : var_3)))))))));
                var_16 = (min((arr_4 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
            }
        }
    }
    var_17 = ((((var_9 ? 7215591200538805472 : var_9)) & -var_13));
    var_18 = var_11;
    var_19 = var_0;
    var_20 = (((~var_6) ? (!var_4) : 114));
    #pragma endscop
}
