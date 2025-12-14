/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = var_2;
                arr_7 [i_0] [i_0] [i_0] = 0;
                var_11 += ((((min((arr_2 [i_1 - 3]), (arr_2 [i_1 - 1])))) / (min(((min(236, -38))), (arr_3 [i_0] [i_1])))));
                var_12 = (max(63038, (((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1])))));
            }
        }
    }
    var_13 &= (((((var_0 ^ ((max(var_3, var_1)))))) ? ((((min(14455883627271234675, 24860))) ? (var_4 / var_8) : -1)) : (max(var_5, (var_7 * var_8)))));
    var_14 = var_5;
    var_15 = ((((max(((240 ? var_5 : -8095032)), ((min(var_4, var_4)))))) ? var_6 : ((var_3 ? (min(64, var_8)) : var_7))));
    #pragma endscop
}
