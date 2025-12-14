/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_11, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [1] [i_1] = arr_0 [i_0];
                arr_8 [i_0] [i_1 + 4] = min(var_8, (arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 1]));
            }
        }
    }
    var_18 = (((((((var_5 ? var_9 : var_10))) ? (min(var_9, var_5)) : var_2)) < (max(11753555213261341823, 1073741792))));
    var_19 = ((max(((var_16 ? var_14 : var_6)), var_16)) * var_5);
    var_20 = var_8;
    #pragma endscop
}
