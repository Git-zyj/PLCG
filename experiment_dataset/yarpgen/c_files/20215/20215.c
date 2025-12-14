/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((var_3 - (var_13 / 212))), (min(var_11, -var_13))));
    var_15 = (((((-(~18)))) ? var_1 : 2815845614659113131));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 &= (~var_13);
                    arr_7 [18] [i_1] [i_1] [i_2] &= ((~((min(var_9, var_1)))));
                    var_17 = ((min(var_6, 44)));
                }
            }
        }
    }
    var_18 = var_3;
    var_19 *= (var_4 <= var_8);
    #pragma endscop
}
