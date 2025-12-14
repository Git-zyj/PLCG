/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((((var_0 && ((min(var_9, (arr_3 [i_2])))))) ? (((10930121934783883633 <= var_0) ? ((((arr_3 [i_2]) ? var_8 : var_9))) : (var_1 / 65535))) : (arr_8 [i_0] [i_0] [i_1] [3]))))));
                    arr_9 [i_0] [i_1] [i_0] = (((min((arr_3 [i_0 - 4]), (min(var_9, (arr_3 [i_0]))))) % var_0));
                }
            }
        }
    }
    var_15 = (((var_11 << (var_6 - 916946839))));
    #pragma endscop
}
