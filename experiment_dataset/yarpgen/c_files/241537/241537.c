/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~(var_18 & var_14))));
    var_20 = min((!65293), (!3546));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (((arr_0 [i_0 + 1] [i_0 + 1]) % (arr_0 [i_0 - 1] [i_0 - 1])));
                var_22 = ((((-(arr_1 [i_1]))) % ((max((arr_0 [i_1 - 1] [i_1 - 2]), var_13)))));
                arr_5 [i_0] = (arr_2 [i_0] [i_1] [i_1]);
                var_23 = ((var_7 ? (((arr_2 [i_0 + 2] [i_1 - 2] [i_0]) ? (arr_2 [i_0 + 1] [i_1 + 2] [i_0]) : (arr_2 [i_0 + 1] [i_1 + 1] [i_0]))) : (arr_3 [i_0 + 2])));
                var_24 &= ((var_8 ? var_3 : ((-(arr_0 [i_0 + 1] [i_1])))));
            }
        }
    }
    var_25 = (min(var_25, (((((((268 ? -126 : var_7)) == var_3)) ? (+-1) : (max((var_4 % -97), var_11)))))));
    var_26 = 242;
    #pragma endscop
}
