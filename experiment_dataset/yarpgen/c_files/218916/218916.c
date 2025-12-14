/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((((arr_0 [i_1 + 1] [i_1]) << (((arr_0 [i_1 - 1] [i_1]) - 10693133243074417207)))), ((((var_5 + var_0) && var_12)))));
                arr_6 [i_0] = (((((~(arr_0 [i_1 - 1] [i_1 + 2])))) ? var_13 : (arr_0 [i_1 - 1] [i_1 + 2])));
            }
        }
    }
    var_15 = var_11;
    var_16 = (((var_9 || (((var_5 ? var_3 : var_3))))));
    var_17 = max((min(var_8, ((var_9 ? var_8 : var_9)))), var_6);
    #pragma endscop
}
