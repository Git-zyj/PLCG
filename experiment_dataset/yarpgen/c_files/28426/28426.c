/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = 57;
                arr_6 [i_0] [i_1] = max((((((-5 ? (-9223372036854775807 - 1) : 20368))) ? ((var_6 ? 1 : 594257096)) : (var_8 & 1))), (1 & -18413));
            }
        }
    }
    var_14 = (max(1, var_6));
    var_15 = var_0;
    var_16 = (max((~-6770321474816395894), 18412));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] [18] |= (~var_12);
                var_17 = (min(var_17, (((var_6 ? (arr_11 [i_2]) : (arr_11 [i_2]))))));
                var_18 = ((((((15 ? 0 : 3)) << (var_5 || var_2))) << (((18446744073709551606 || (0 == var_4))))));
                arr_16 [i_3] [i_3] [i_3] = 23536;
                var_19 = -4294967289;
            }
        }
    }
    #pragma endscop
}
