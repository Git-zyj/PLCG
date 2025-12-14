/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (~0)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (0 < 2147483647);
                arr_7 [i_0] = (max((((arr_4 [1] [i_0 - 1] [i_0]) + ((((arr_0 [i_0]) ? var_1 : (arr_3 [i_0] [i_0])))))), 65516));
                arr_8 [i_0] = (((-2147483640 / var_3) != var_10));
            }
        }
    }
    #pragma endscop
}
