/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((var_2 ? (((~255) ? -var_5 : ((var_7 ? var_7 : var_2)))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_1] = var_4;
                var_12 = (((arr_3 [i_0] [i_0] [i_1 + 2]) ? (((arr_5 [i_0 + 1]) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 2]))) : var_6));
            }
        }
    }
    var_13 |= ((~(((min(var_6, var_9))))));
    var_14 = ((-12288 ? var_10 : var_10));
    var_15 = var_10;
    #pragma endscop
}
