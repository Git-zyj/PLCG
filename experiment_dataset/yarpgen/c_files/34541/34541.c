/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1846096772;

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_16 = (((24576 ? (((var_7 ? 4 : var_0)) : (min(var_6, 3432772238))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 = -var_6;
                        var_18 = ((955670435 | var_12) ^ ((var_5 ? 0 : var_12)));
                        arr_8 [i_3] [i_3] = -1;
                        var_19 = 1;
                    }
                    var_20 = 1;
                    var_21 = (((((0 ? -30337 : 1)) >> (3339296861 >= 1))));
                }
            }
        }
        arr_9 [i_0] = var_3;
    }
    var_22 -= var_2;
    var_23 = var_13;
    #pragma endscop
}
