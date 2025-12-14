/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max(1, (min(-15, -589665435))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 - 3] [i_2 + 1] [i_2 + 1] &= (((((arr_2 [i_1]) + 9223372036854775807)) << (((((var_8 && (arr_4 [i_2 + 1] [i_2 - 2] [i_2 - 2])))) - 1))));
                    var_21 = (min(var_21, (((!var_19) ? ((((((arr_1 [i_0]) ? (arr_3 [i_1 - 2]) : var_16))) ? 0 : (105 ^ var_0))) : (-589665426 % 183)))));
                }
            }
        }
    }
    #pragma endscop
}
