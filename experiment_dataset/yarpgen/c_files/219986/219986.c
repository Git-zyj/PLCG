/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = var_1;
                arr_7 [i_0] [i_0] = (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                var_18 = 1;
                var_19 = ((var_4 ? 1 : (((arr_2 [i_0]) / (arr_2 [i_0])))));
                arr_8 [i_0] [i_1] [i_0] = var_0;
            }
        }
    }
    var_20 = ((var_2 ? ((1 ? -var_10 : 19001)) : var_13));
    var_21 = ((((((((1 ? var_16 : var_10))) ? var_7 : (1 / var_5)))) > var_8));
    var_22 = (min(48894, ((min(((max(1, 61953))), var_3)))));
    var_23 = ((-(var_7 - 12220573502319321568)));
    #pragma endscop
}
