/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [7] [i_1] [i_2] = var_14;
                    arr_8 [i_0] [i_1] [i_2] = ((((((((arr_2 [i_1]) ? (arr_0 [i_0]) : -12049864)) + (((arr_6 [i_0] [i_0] [i_0]) ? (arr_0 [i_2 + 1]) : (arr_2 [i_0])))))) ? (max((arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 1]), 12049870)) : (min((arr_4 [i_2] [i_0] [i_0]), ((min((arr_6 [i_0] [2] [i_0]), (arr_6 [i_2] [i_1] [i_0]))))))));
                }
            }
        }
    }
    var_17 += var_14;
    var_18 = (((((-12049864 ^ (min(var_5, var_13))))) ? var_11 : (min(((min(12049845, -12049868))), (13 - var_9)))));
    #pragma endscop
}
