/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-var_0 ? var_7 : var_8)));
    var_21 = 196;
    var_22 = (((((((var_6 ? var_19 : 196))) ? var_17 : var_12)) / ((((var_10 < ((var_8 ? var_19 : var_7))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_23 = var_14;
        var_24 = 196;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_25 = 178;
                    arr_6 [i_1] = (arr_3 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
