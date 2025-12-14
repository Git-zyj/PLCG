/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 1));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max(((min((max(1, (arr_1 [9]))), (arr_3 [i_1] [i_1])))), ((((min(15, 1))) ? (arr_1 [i_0]) : (((arr_4 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : 1)))))))));
                var_14 = (((~var_3) ? (((((arr_3 [i_0] [i_0]) / 1)) / (arr_0 [i_1]))) : var_0));
                var_15 = (!(((-8503 ? -8503 : 0))));
            }
        }
    }
    #pragma endscop
}
