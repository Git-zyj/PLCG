/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(((-var_5 % ((var_7 ? (arr_1 [18]) : var_8)))), (arr_2 [i_0])));
                arr_6 [i_0] [12] [i_1] = ((~16) ? (((arr_2 [10]) ? var_10 : ((3 ? var_16 : var_9)))) : (((arr_1 [i_0 + 2]) << 7)));
            }
        }
    }
    var_18 = 65514;
    var_19 = var_7;
    var_20 = 65529;
    var_21 = var_7;
    #pragma endscop
}
