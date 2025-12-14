/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (min((min((arr_3 [i_0] [i_2 - 2] [i_2 - 3]), (arr_3 [i_0] [i_2 - 4] [i_2 - 3]))), (arr_3 [i_0] [i_2 + 1] [i_2 + 1])));
                    arr_9 [i_0] [i_0] = (min((max(18446744073709551615, (min((arr_5 [i_2 - 3]), (arr_7 [i_0]))))), ((var_8 ? ((5099950176314403200 ? 2095386062271322849 : -7260197704439790028)) : (((min(32767, 0))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] [6] = (~(max(((var_7 ? var_4 : (arr_10 [i_3] [5]))), 255)));
        var_10 = var_2;
        var_11 = (((((144115188075855872 ? 0 : var_2)) - (arr_2 [i_3]))));
        arr_13 [i_3] [1] = (((max(var_7, (arr_6 [i_3] [i_3] [i_3] [i_3])))) ? (var_5 + var_1) : (arr_3 [i_3] [i_3] [i_3]));
    }
    #pragma endscop
}
