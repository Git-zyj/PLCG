/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_1 [i_0])));
        var_17 = var_3;
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_18 = (max(var_18, (!1)));
        arr_5 [i_1] = 10;
        arr_6 [i_1] [16] = (((-((max(9870, 11))))));
    }
    var_19 = 1;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_20 = ((((max((((-13852 ? 1 : var_13))), var_14))) ? (max((max(var_13, 16660506828693701118)), ((16660506828693701118 ? var_3 : var_12)))) : var_11));
                    var_21 = -7342;
                }
            }
        }
    }
    #pragma endscop
}
