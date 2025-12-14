/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_8 ? var_13 : var_1))), ((4080 ? var_2 : (min(var_4, -59))))));
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((((-33258 ? ((max(var_5, (arr_0 [i_1])))) : var_4))) ? (arr_3 [i_0 + 1] [i_0] [i_0 - 2]) : var_10);
                var_17 = (max(var_17, ((max(var_11, (arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]))))));
            }
        }
    }
    var_18 += ((!(((var_13 ? var_13 : (var_11 || var_4))))));
    #pragma endscop
}
