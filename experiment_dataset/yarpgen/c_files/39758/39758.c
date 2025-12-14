/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] &= (((max(((var_3 ? (arr_2 [i_0] [i_1]) : (arr_1 [2]))), 0)) ^ (max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [5] [4])))));
                arr_5 [i_1] = ((+(((arr_2 [i_1 - 1] [i_1 - 1]) - (arr_1 [i_1 - 1])))));
            }
        }
    }
    var_12 = var_0;
    var_13 = (max((((max(0, var_3)))), 13972536350155681154));
    var_14 = var_2;
    #pragma endscop
}
