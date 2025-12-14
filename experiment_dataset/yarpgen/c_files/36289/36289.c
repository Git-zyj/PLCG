/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] = (((var_7 ? var_10 : var_4)));
                arr_6 [i_1] = (min(1, ((max(var_10, (var_13 || var_15))))));
            }
        }
    }
    var_17 = max((~var_10), var_9);
    var_18 = (((var_9 ? (((max(var_4, var_14)))) : ((var_9 ? var_6 : var_9)))));
    var_19 = (((((-((min(var_6, var_11)))))) ? (((var_15 >= (!var_13)))) : var_2));
    #pragma endscop
}
