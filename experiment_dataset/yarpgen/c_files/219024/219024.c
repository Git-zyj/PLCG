/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [18] [19] = (max(((min(1620930729, (arr_0 [i_0])))), 1));
                arr_6 [i_1] [18] = (max(((((var_12 ? -4902994360587644065 : (-2147483647 - 1))))), (max(var_10, (2147483647 & var_6)))));
                var_13 |= (min(737697427, (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
            }
        }
    }
    var_14 = var_10;
    var_15 = (((((-(max(var_1, var_10))))) ? (((((max(var_4, 16789119252138846882)) < var_1)))) : (((var_4 ^ var_4) ? (max(8344546053007126309, var_5)) : (((min(240, var_6))))))));
    #pragma endscop
}
