/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (max(1, (((arr_6 [i_1 + 3] [i_1 - 4] [i_1 + 1] [i_1 - 3]) + (arr_6 [i_1 - 1] [i_1 - 4] [i_1 - 3] [i_1 - 4])))));
                    arr_8 [i_0] [i_1] [i_1 - 3] [i_2] &= -var_1;
                    var_12 = var_0;
                    var_13 *= (((((((var_7 ? var_5 : (arr_7 [i_2] [i_2] [i_1] [i_0])))) ? 1 : (min((arr_7 [i_0] [i_0] [i_2] [i_0]), (arr_5 [i_0] [i_1] [i_2]))))) << (((arr_5 [i_0] [14] [15]) + 1063639829))));
                }
            }
        }
    }
    var_14 += var_3;
    #pragma endscop
}
