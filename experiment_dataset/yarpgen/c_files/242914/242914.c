/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_1 ? var_8 : var_1)) ? (((max(var_7, var_17)))) : (var_9 - var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((var_10 ? var_10 : (min(var_12, var_10))));
                    var_19 = (((((((var_17 >> (767755966 - 767755948))) / var_11))) ? ((((var_1 > (max(var_15, var_11)))))) : (max((min(3136907955, 767755966)), -767755985))));
                    var_20 = (max(var_20, (((((((var_17 ? var_16 : var_10)))) || var_0)))));
                }
            }
        }
    }
    var_21 = var_17;
    var_22 = ((max(var_15, ((min(var_5, var_5))))));
    #pragma endscop
}
