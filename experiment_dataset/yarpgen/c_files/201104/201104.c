/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_8;
    var_20 = ((var_14 ? (18446744073709551615 < var_2) : (114 != 0)));
    var_21 = ((((((0 ? var_5 : var_18)))) >= (min((min(4, -1)), ((min(-1022, 1035762050)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = (min((arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_1 - 1]), (min((arr_5 [i_0 + 2] [i_1 + 1] [i_1 - 3] [i_1 - 2]), 805306368))));
                    var_23 = ((~(((0 >= (arr_8 [i_0 + 2] [i_1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
