/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 *= -18446744073709551615;
                arr_4 [i_0] [i_0] &= (((arr_2 [i_0] [i_0]) || (arr_2 [i_1] [i_1])));
                arr_5 [i_0] [i_0] [2] |= (~(min((arr_0 [i_1] [i_0]), (((arr_1 [i_1] [i_1]) ? 0 : var_10)))));
                var_12 = (min(var_12, (((((min((((arr_2 [8] [8]) ? 137438953408 : (arr_2 [i_0] [i_1]))), -4689397030707021477))) ? ((~(arr_3 [i_0] [i_1]))) : -2102385417)))));
            }
        }
    }
    var_13 = (max(var_13, ((min((((886700267844735473 & -4689397030707021465) - var_6)), var_5)))));
    var_14 = (min(var_14, (var_10 & var_0)));
    #pragma endscop
}
