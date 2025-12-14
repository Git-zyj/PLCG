/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 ^= (109 ? ((83 ? (arr_1 [i_0] [i_2]) : var_4)) : ((min((((arr_5 [i_1] [i_1] [i_0]) ? var_2 : (arr_7 [i_0 - 1] [i_1] [i_2]))), 83))));
                    arr_8 [i_0] [i_0] [i_0] = 70;
                    var_19 = 173;
                    arr_9 [i_0] [16] [i_2 + 1] [12] &= ((31183 ? (min(181, (((arr_4 [8] [14] [16]) ? (arr_4 [18] [18] [i_2]) : var_13)))) : (83 | 475)));
                }
            }
        }
    }
    #pragma endscop
}
