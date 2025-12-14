/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = (max((((((max(var_12, var_12))) < ((var_7 ? var_3 : var_16))))), var_16));
    var_21 += ((((var_17 || var_7) ? (var_12 / var_14) : (min(var_15, var_4)))) >> (-68 + 79));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = var_5;
                arr_4 [i_0] [0] &= (-10993 + 1);
                var_23 = (arr_2 [i_0] [i_1 + 1] [i_0]);
                var_24 = (min(var_24, ((var_8 == (arr_1 [12])))));
            }
        }
    }
    #pragma endscop
}
