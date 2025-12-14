/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-(max(var_3, var_11)))) >> (var_7 - 92)));
    var_17 -= (max((max((((var_15 ? var_0 : -31806))), 31)), var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((40415 ? ((((arr_8 [i_0] [i_1]) ? 59 : (arr_6 [i_1] [i_2 + 4])))) : (((arr_4 [14] [14]) ? -32764 : (arr_2 [i_1])))))) ? ((((((arr_7 [i_0] [i_1] [i_2]) ? -426939002 : var_0))) ? (((arr_0 [i_2]) ? 179 : 576459652791795712)) : (arr_5 [6]))) : ((((max((arr_5 [6]), var_13))))))))));
                    var_19 = ((1 >> (40 - 12)));
                    arr_9 [i_2] [i_1] [i_1] [i_0 + 1] = (arr_5 [i_1]);
                }
            }
        }
    }
    var_20 = (((((var_15 ? var_7 : ((var_4 ? var_8 : var_8))))) ? ((((((var_9 ? 40023 : var_13))) ? (max(1, var_1)) : var_11))) : (max((((-31806 ? var_2 : var_0))), (var_5 - 956689726)))));
    #pragma endscop
}
