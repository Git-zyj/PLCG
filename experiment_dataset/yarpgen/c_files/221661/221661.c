/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = ((~((var_5 ? ((min(32763, 1))) : (var_11 * var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [21] [i_1] [i_1] = 112;
                var_14 = (max(var_14, (min((((-((~(arr_0 [i_1])))))), (max((((-10 ? 102 : 128))), (min((arr_1 [i_1]), -1636773436))))))));
                arr_7 [i_0] [i_0] [i_1] |= (arr_1 [i_1]);
                arr_8 [i_1] [9] [i_1] = (arr_1 [18]);
            }
        }
    }
    #pragma endscop
}
