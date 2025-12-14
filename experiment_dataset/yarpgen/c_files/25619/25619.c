/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (arr_2 [20] [i_1]);
                arr_5 [i_0] [i_1] = arr_1 [5] [i_1];
                var_17 += (((((var_11 | (((var_10 ? var_9 : (arr_1 [4] [i_1]))))))) ? ((((1357177725 ? (arr_0 [8]) : (arr_4 [i_0] [i_1]))) & (max(var_11, var_10)))) : ((((arr_2 [i_1] [i_0]) ^ (arr_2 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
