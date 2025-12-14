/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (75 & 74);
                var_17 = (var_13 - 75);
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [0] [0] |= (arr_9 [i_2]);
        var_18 = (max(var_18, (((((((var_2 ? -80 : (arr_8 [i_2])))) ? (arr_8 [17]) : (((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_7 [i_2] [10]))))) | ((((arr_9 [i_2]) == var_2)))))));
        var_19 = (max(112, -5));
        var_20 = (~var_3);
        var_21 = var_4;
    }
    #pragma endscop
}
