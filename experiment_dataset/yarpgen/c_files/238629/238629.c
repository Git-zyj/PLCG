/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 *= ((!((max((arr_4 [5] [i_2] [21]), (((!(arr_2 [i_2] [i_1] [18])))))))));
                    arr_7 [i_2 + 3] = ((!(((((((arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_2]) & var_13))) ? ((~(arr_6 [i_0 + 3] [i_1] [i_2]))) : (((((arr_0 [i_1]) || 79)))))))));
                    var_18 = (((((3470 ? (max((arr_5 [i_0] [i_1] [i_1] [i_2]), (arr_3 [i_0] [i_1] [i_0]))) : (((~(-2147483647 - 1))))))) ? 2790833611523242124 : (~var_10)));
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
