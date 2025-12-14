/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((~((var_4 ? 719664719 : 3476162641))));
    var_13 ^= ((var_5 ? -1021392392176477900 : var_4));
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [11] [11] &= (arr_3 [i_1 - 2]);
                arr_7 [1] [i_1] [i_1] = (((var_9 ^ (arr_4 [i_1 - 2]))));
            }
        }
    }
    #pragma endscop
}
