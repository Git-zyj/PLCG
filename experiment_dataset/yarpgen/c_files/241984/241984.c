/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    var_13 = (max((((((var_11 ? var_6 : -5552326678724843488)) >> ((((var_6 ? var_7 : var_3)) - 17808067576855214840))))), ((var_0 ? (~1) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) / (arr_1 [i_0])))));
                arr_6 [i_0] [i_0] = -var_7;
                var_14 = (((arr_0 [i_0]) < ((125 ? var_0 : (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
