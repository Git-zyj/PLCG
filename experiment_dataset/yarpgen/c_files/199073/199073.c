/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (+-3081474913629370906)));
    var_14 = (min(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 -= (arr_1 [i_1] [i_0]);
                var_16 = (min(var_16, ((min((((3931665729 ? var_4 : (arr_3 [i_0] [8])))), ((max((var_10 || var_12), (arr_2 [i_0])))))))));
            }
        }
    }
    var_17 = (~var_8);
    #pragma endscop
}
