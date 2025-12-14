/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (max(var_11, var_8));
    var_17 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (arr_4 [i_0]);
                    arr_6 [i_0] [i_1] [1] = (arr_4 [i_0]);
                    var_20 = (!0);
                }
            }
        }
    }
    var_21 = (((((((((var_2 ? -6442334516600154435 : var_11)) + 9223372036854775807)) >> var_5))) ? ((536870911 ? (min(-70368744177664, 8305986660004982861)) : 31378)) : var_14));
    #pragma endscop
}
