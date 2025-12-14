/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(-7774091638046407676, 1640))) ? (max(((var_2 ? var_8 : var_9)), (((var_8 ? var_4 : var_12))))) : (((((max(var_1, var_10))) ? ((var_15 ? var_9 : var_6)) : var_6))));
    var_17 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((max(var_14, var_12))) ? ((var_4 ? var_8 : var_1)) : (((min(var_14, var_1))))));
                arr_5 [i_0] [i_0] [i_0] = ((~((min(var_10, var_7)))));
            }
        }
    }
    var_18 = var_8;
    var_19 = var_11;
    #pragma endscop
}
