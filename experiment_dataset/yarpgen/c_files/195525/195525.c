/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((var_18 ? var_17 : var_12)))) ? (((0 || ((min(1, var_10)))))) : (32767 - -var_9)));
    var_20 = ((((((4006391035 - 1) ? (min(var_2, var_9)) : (71 + 32148)))) + (((((min(1, var_7)))) - var_10))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((((var_8 ? (var_7 / var_13) : (62127 / -2107))) * (((var_11 / 32767) / var_13))));
                    arr_9 [i_2 - 1] [i_2] [i_0] = 31;
                }
            }
        }
    }
    #pragma endscop
}
