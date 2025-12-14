/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (((~(-2147483647 - 1))));
                var_13 = var_8;
            }
        }
    }

    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_7 [7] = ((((max((min((arr_6 [i_2 + 1] [1]), var_7)), ((max(0, var_5)))))) ? (((((var_9 ? var_7 : (arr_3 [i_2])))) ? ((26 ? 0 : 19)) : (arr_6 [i_2 + 2] [i_2 - 2]))) : 39059));
        var_14 = ((var_5 ? var_1 : var_2));
        var_15 = var_8;
        var_16 -= arr_0 [i_2] [i_2];
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_17 = var_8;
        var_18 = (min(((((arr_6 [i_3] [i_3]) ? var_0 : (arr_10 [i_3 + 1] [i_3])))), (min(((((arr_3 [i_3]) == 112))), 5747303923508865649))));
    }
    var_19 -= ((99 ? ((((min(var_3, var_4))) ? (min(var_0, var_5)) : ((var_5 ? var_6 : var_9)))) : (((((var_4 ? 16591053682044613826 : var_5))) ? var_1 : var_6))));
    #pragma endscop
}
