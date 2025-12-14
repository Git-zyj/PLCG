/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_3, 6972525111684347465))) ? var_8 : (5435641096607071402 / 1)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((((((arr_2 [i_0]) & (arr_1 [i_0 - 3])))) < ((min(var_0, var_9)))));
                var_13 = (((arr_2 [i_0]) ^ (min((arr_0 [i_1 + 1]), 8272623899231210606))));
                var_14 = var_10;
            }
        }
    }
    var_15 = ((var_9 & ((2505556502677875876 ? 2505556502677875858 : var_8))));
    #pragma endscop
}
