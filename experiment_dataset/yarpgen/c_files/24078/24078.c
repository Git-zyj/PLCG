/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = (min((arr_3 [i_0] [0]), (min(16, (arr_4 [i_1])))));
                    var_11 -= -828485400;
                    var_12 -= (arr_7 [i_0 - 2] [i_1 - 3] [i_1 - 3]);
                    var_13 = (((~(arr_7 [i_0] [i_1 - 1] [i_2]))));
                    var_14 -= (arr_0 [i_0] [i_0]);
                }
            }
        }
    }
    var_15 = (min(var_15, ((var_4 ? (((!(!-9870)))) : var_1))));
    #pragma endscop
}
