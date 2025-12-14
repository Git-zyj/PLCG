/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_4);
    var_14 = var_1;
    var_15 = ((var_12 ? ((((44 / 44) == ((3310786933 ? var_5 : 48))))) : 33));
    var_16 = (min(var_16, ((min(var_7, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((~(arr_3 [i_1] [i_1 + 1])))));
                arr_6 [i_1] [7] [i_0] = (~(min(((130 >> (8974 - 8949))), var_8)));
                var_17 = (min((((((var_2 ? 208 : var_11))) ? var_4 : (arr_2 [i_1]))), (arr_3 [i_0] [4])));
            }
        }
    }
    #pragma endscop
}
