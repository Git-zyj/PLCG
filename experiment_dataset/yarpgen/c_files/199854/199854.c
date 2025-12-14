/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((-1881315987 ? (((var_4 ? -var_13 : (arr_3 [i_1 + 1] [2] [i_1 - 2])))) : var_5));
                var_17 = (((26462 ? (arr_4 [i_0 - 2]) : var_1)));
            }
        }
    }
    var_18 &= 13;
    var_19 = var_11;
    #pragma endscop
}
