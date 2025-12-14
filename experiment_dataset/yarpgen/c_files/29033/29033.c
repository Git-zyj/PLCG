/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min((max((var_6 | 15875425649646005343), ((((((arr_1 [i_1 + 1] [1]) + 9223372036854775807)) >> (((arr_2 [i_0] [6] [6]) + 29746))))))), (arr_2 [15] [i_1 - 3] [i_1])));
                var_17 = ((var_2 ? (max(2571318424063546272, (arr_3 [3] [i_0] [i_1 + 3]))) : (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_18 = (~5);
    var_19 += (!-4182);
    #pragma endscop
}
